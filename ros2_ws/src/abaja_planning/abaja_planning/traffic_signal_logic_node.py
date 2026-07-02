#!/usr/bin/env python3
"""
traffic_signal_logic_node.py — Traffic Signal Stop Logic

PURPOSE:
  Combines the vehicle's current position (from /odom) with the current
  traffic light state (from /traffic_light_state) to decide whether the
  buggy should stop before the stop line.

  Publishes /traffic_signal_stop (Bool):
    True  → buggy must stop (control_mux Priority 3 applies 80% brake)
    False → buggy may proceed (Nav2 command passes through normally)

LOGIC:
  Stop condition (AND of all three):
    1. Vehicle X position is within the stop zone
       (vehicle.x >= stop_zone_entry_x = stop_line_x - stopping_distance)
    2. Current signal state is RED or YELLOW
    3. Vehicle has not yet passed the stop line
       (vehicle.x < stop_line_x + 0.5m  ← allow 0.5m past line to resume)

  Resume condition:
    Signal turns GREEN  AND  vehicle is within stop zone
    → /traffic_signal_stop = False → control_mux allows Nav2 command

  Hysteresis:
    Once the vehicle passes X > stop_line_x + 0.5m, the stop logic is
    disabled until the vehicle re-enters the stop zone (next lap or U-turn).

INPUT TOPICS:
  /odom                  (nav_msgs/msg/Odometry)  — vehicle position
  /traffic_light_state   (std_msgs/msg/String)    — 'GREEN'/'YELLOW'/'RED'

OUTPUT TOPICS:
  /traffic_signal_stop   (std_msgs/msg/Bool)      — stop command for control_mux
  /traffic_signal_status (std_msgs/msg/String)    — debug status string

PARAMETERS (set from launch file matching traffic_signal_config.yaml):
  stop_line_x         (float, default: 17.0)  — X of stop line in map frame
  stop_zone_entry_x   (float, default: 13.5)  — X where stop zone begins
  publish_rate_hz     (float, default: 10.0)  — publish frequency

USAGE:
  ros2 run abaja_planning traffic_signal_logic_node
  ros2 topic echo /traffic_signal_stop
  ros2 topic echo /traffic_signal_status
"""

import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from std_msgs.msg import Bool, String


class TrafficSignalLogicNode(Node):
    """
    Monitors vehicle position and traffic light state.
    Publishes /traffic_signal_stop when buggy must stop at signal.
    """

    def __init__(self):
        super().__init__('traffic_signal_logic_node')

        # ── Parameters ────────────────────────────────────────────────────
        self.declare_parameter('stop_line_x', 17.0)
        self.declare_parameter('stop_zone_entry_x', 13.5)
        self.declare_parameter('past_stop_line_x', 17.5)   # resume after passing here
        self.declare_parameter('publish_rate_hz', 10.0)

        self.stop_line_x = self.get_parameter('stop_line_x').value
        self.stop_zone_entry_x = self.get_parameter('stop_zone_entry_x').value
        self.past_stop_line_x = self.get_parameter('past_stop_line_x').value
        rate_hz = self.get_parameter('publish_rate_hz').value

        # ── State ─────────────────────────────────────────────────────────
        self.vehicle_x = 0.0
        self.signal_state = 'GREEN'     # safe default — allow movement on startup
        self.stop_active = False        # current stop command state
        self.passed_stop_line = False   # true once vehicle.x > past_stop_line_x

        # ── Subscribers ───────────────────────────────────────────────────
        self.odom_sub = self.create_subscription(
            Odometry, '/odom', self.odom_callback, 10)
        self.signal_sub = self.create_subscription(
            String, '/traffic_light_state', self.signal_callback, 10)

        # ── Publishers ────────────────────────────────────────────────────
        self.stop_pub = self.create_publisher(Bool, '/traffic_signal_stop', 10)
        self.status_pub = self.create_publisher(String, '/traffic_signal_status', 10)

        # ── Timer ─────────────────────────────────────────────────────────
        self.timer = self.create_timer(1.0 / rate_hz, self.logic_loop)

        self.get_logger().info(
            f'Traffic Signal Logic started. '
            f'Stop zone: X >= {self.stop_zone_entry_x:.1f}m, '
            f'Stop line: X={self.stop_line_x:.1f}m. '
            f'Initial signal: {self.signal_state}'
        )

    def odom_callback(self, msg: Odometry):
        """Update vehicle X position from odometry."""
        self.vehicle_x = msg.pose.pose.position.x

    def signal_callback(self, msg: String):
        """Update traffic light state."""
        new_state = msg.data.upper()
        if new_state != self.signal_state:
            self.get_logger().info(
                f'🚦 Signal state: {self.signal_state} → {new_state} '
                f'(vehicle at X={self.vehicle_x:.2f}m)'
            )
            self.signal_state = new_state

    def logic_loop(self):
        """Evaluate stop condition and publish /traffic_signal_stop."""

        stop_cmd = Bool()
        status_msg = String()

        # ── Check if already past stop line ──────────────────────────────
        if self.vehicle_x > self.past_stop_line_x:
            # Vehicle has cleared the stop line — disable traffic stop
            if not self.passed_stop_line:
                self.passed_stop_line = True
                self.get_logger().info(
                    f'✅ Vehicle cleared stop line (X={self.vehicle_x:.2f}m). '
                    f'Traffic stop disabled for this pass.'
                )
            stop_cmd.data = False
            status_msg.data = (
                f'CLEARED | vehicle_x={self.vehicle_x:.2f} '
                f'signal={self.signal_state} stop=False'
            )
            self.stop_pub.publish(stop_cmd)
            self.status_pub.publish(status_msg)
            return

        # ── In stop zone check ────────────────────────────────────────────
        in_stop_zone = self.vehicle_x >= self.stop_zone_entry_x

        # ── Determine stop condition ──────────────────────────────────────
        should_stop = (
            in_stop_zone
            and self.signal_state in ('RED', 'YELLOW')
            and not self.passed_stop_line
        )

        stop_cmd.data = should_stop

        # ── Status string ─────────────────────────────────────────────────
        zone_str = 'IN_ZONE' if in_stop_zone else 'APPROACHING'
        status_msg.data = (
            f'{zone_str} | vehicle_x={self.vehicle_x:.2f}m '
            f'signal={self.signal_state} '
            f'stop={should_stop}'
        )

        # Log changes in stop state
        if should_stop and not self.stop_active:
            self.get_logger().warn(
                f'🛑 STOP ACTIVE — Signal={self.signal_state}, '
                f'vehicle at X={self.vehicle_x:.2f}m '
                f'(stop zone ≥ {self.stop_zone_entry_x:.1f}m)'
            )
        elif not should_stop and self.stop_active:
            self.get_logger().info(
                f'🟢 STOP RELEASED — Signal={self.signal_state}, '
                f'vehicle at X={self.vehicle_x:.2f}m'
            )

        self.stop_active = should_stop

        self.stop_pub.publish(stop_cmd)
        self.status_pub.publish(status_msg)


def main(args=None):
    rclpy.init(args=args)
    node = TrafficSignalLogicNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()
