#!/usr/bin/env python3
"""
traffic_light_sim_node.py — Simulated Traffic Light Cycle Publisher

PURPOSE:
  Since object detection / YOLO is disabled (no trained model yet),
  traffic light state cannot be detected from camera images.
  This node simulates a traffic light cycle using a timer,
  based on the configured timing in traffic_signal_config.yaml.

  The physical traffic signal model is at X=18, Y=1.8 in abaja_lane_track.sdf.
  This node does NOT control the visual colour in Gazebo (Gazebo SDF does not
  support dynamic material changes from ROS topics without plugins).
  The logical state is accurate and logged clearly.

OUTPUT TOPIC:
  /traffic_light_state  (std_msgs/msg/String) — 'GREEN', 'YELLOW', or 'RED'

CONSUMED BY:
  traffic_signal_logic_node.py — reads this state and checks vehicle position
  control_mux_node.py — receives /traffic_signal_stop (Bool) from logic node

PARAMETERS (loaded from config via launch file):
  green_duration_s   (float, default: 10.0)  — GREEN state duration
  yellow_duration_s  (float, default:  3.0)  — YELLOW state duration
  red_duration_s     (float, default:  8.0)  — RED state duration
  initial_state      (string, default: GREEN) — state on startup

TIMING EXAMPLE (default):
  t=0s    → GREEN  (10s)
  t=10s   → YELLOW (3s)
  t=13s   → RED    (8s)
  t=21s   → GREEN  (repeat)

USAGE:
  ros2 run abaja_planning traffic_light_sim_node
  ros2 topic echo /traffic_light_state
"""

import rclpy
from rclpy.node import Node
from std_msgs.msg import String


# Signal states in order
SIGNAL_STATES = ['GREEN', 'YELLOW', 'RED']


class TrafficLightSimNode(Node):
    """
    Publishes a simulated traffic light state on a timer-based cycle.
    State transitions: GREEN → YELLOW → RED → GREEN → ...
    """

    def __init__(self):
        super().__init__('traffic_light_sim_node')

        # ── Parameters (configurable from launch file) ─────────────────
        self.declare_parameter('green_duration_s', 10.0)
        self.declare_parameter('yellow_duration_s', 3.0)
        self.declare_parameter('red_duration_s', 8.0)
        self.declare_parameter('initial_state', 'GREEN')
        self.declare_parameter('publish_rate_hz', 2.0)

        self.green_dur = self.get_parameter('green_duration_s').value
        self.yellow_dur = self.get_parameter('yellow_duration_s').value
        self.red_dur = self.get_parameter('red_duration_s').value
        initial_state = self.get_parameter('initial_state').value
        rate_hz = self.get_parameter('publish_rate_hz').value

        # Duration map
        self.durations = {
            'GREEN':  self.green_dur,
            'YELLOW': self.yellow_dur,
            'RED':    self.red_dur,
        }

        # ── State ─────────────────────────────────────────────────────
        if initial_state not in SIGNAL_STATES:
            initial_state = 'GREEN'
        self.current_state = initial_state
        self.state_elapsed = 0.0
        self.publish_interval = 1.0 / rate_hz

        # ── Publisher ─────────────────────────────────────────────────
        self.pub = self.create_publisher(String, '/traffic_light_state', 10)

        # ── Timer (publish + state update at rate_hz) ──────────────────
        self.timer = self.create_timer(self.publish_interval, self.timer_callback)

        self.get_logger().info(
            f'Traffic Light Sim started. '
            f'Cycle: GREEN={self.green_dur}s → YELLOW={self.yellow_dur}s → RED={self.red_dur}s. '
            f'Initial state: {self.current_state}'
        )

    def timer_callback(self):
        """Update state elapsed time and transition when duration expires."""
        self.state_elapsed += self.publish_interval

        # Check if current state has expired
        if self.state_elapsed >= self.durations[self.current_state]:
            self.state_elapsed = 0.0
            # Transition to next state
            idx = SIGNAL_STATES.index(self.current_state)
            next_idx = (idx + 1) % len(SIGNAL_STATES)
            prev_state = self.current_state
            self.current_state = SIGNAL_STATES[next_idx]
            self.get_logger().info(
                f'🚦 Traffic light: {prev_state} → {self.current_state} '
                f'(next change in {self.durations[self.current_state]:.0f}s)'
            )

        # Publish current state
        msg = String()
        msg.data = self.current_state
        self.pub.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = TrafficLightSimNode()
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
