#!/usr/bin/env python3
"""
nav_cmd_to_control_cmd_node.py — Nav2 → Control Mux Bridge

PURPOSE:
  Nav2's controller_server publishes velocity commands to /cmd_vel_nav (Twist).
  This node converts those Twist messages into ControlCmd messages and
  publishes them to /nav_control_cmd for the control_mux_node.

  This keeps Nav2 isolated from the DBW/control pipeline format.
  control_mux_node picks up /nav_control_cmd at Priority 4.

PIPELINE:
  Nav2 controller_server
    → /cmd_vel_nav  (geometry_msgs/Twist)
    → [THIS NODE]
    → /nav_control_cmd  (abaja_interfaces/ControlCmd)
    → control_mux_node  (Priority 4: Nav2)
    → /control_cmd
    → dbw_manager_node
    → /dbw_cmd
    → dbw_to_cmd_vel_node
    → /cmd_vel
    → Gazebo DiffDrive

CONVERSION:
  linear.x  → target_speed_mps
            → throttle_percent = (linear.x / MAX_SPEED) * 100  (if > 0)
            → brake_percent    = (|linear.x| / MAX_SPEED) * 100 (if < 0)

  angular.z → steering_angle_deg = angular.z * ANGULAR_TO_STEERING_FACTOR
              (positive angular.z = turn left = positive steering angle in ROS convention)

  Clamping:
    target_speed_mps ∈ [-2.0, 2.0]
    steering_angle_deg ∈ [-30.0, 30.0]
    throttle_percent ∈ [0.0, 100.0]
    brake_percent ∈ [0.0, 100.0]

PARAMETERS (declare in launch file or command line):
  max_speed_mps          (float, default: 2.0)  — physical max speed
  angular_to_steering    (float, default: 30.0) — scale factor: angular.z rad/s → degrees
  nav_cmd_timeout_s      (float, default: 1.0)  — max age before considering nav inactive

TOPICS:
  Subscribes: /cmd_vel_nav  (geometry_msgs/msg/Twist)
  Publishes:  /nav_control_cmd  (abaja_interfaces/msg/ControlCmd)
"""

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from abaja_interfaces.msg import ControlCmd


# ---------------------------------------------------------------------------
# Default conversion constants
# ---------------------------------------------------------------------------
MAX_SPEED_MPS_DEFAULT = 2.0      # m/s at 100% throttle
ANGULAR_TO_STEERING_DEFAULT = 30.0  # 1 rad/s angular.z → 30° steering angle


class NavCmdToControlCmdNode(Node):
    """
    Converts Nav2 /cmd_vel_nav (Twist) → /nav_control_cmd (ControlCmd).
    Acts as the interface between Nav2 and the aBAJA DBW/control pipeline.
    """

    def __init__(self):
        super().__init__('nav_cmd_to_control_cmd_node')

        # Parameters
        self.declare_parameter('max_speed_mps', MAX_SPEED_MPS_DEFAULT)
        self.declare_parameter('angular_to_steering', ANGULAR_TO_STEERING_DEFAULT)

        self.max_speed = self.get_parameter('max_speed_mps').value
        self.angular_to_steering = self.get_parameter('angular_to_steering').value

        # Subscriber: Nav2 cmd_vel (remapped from /cmd_vel to /cmd_vel_nav)
        self.sub = self.create_subscription(
            Twist,
            '/cmd_vel_nav',
            self.twist_callback,
            10
        )

        # Publisher: ControlCmd for control_mux Priority 4
        self.pub = self.create_publisher(ControlCmd, '/nav_control_cmd', 10)

        self.get_logger().info(
            f'Nav→ControlCmd bridge started. '
            f'max_speed={self.max_speed} m/s, '
            f'angular_to_steering={self.angular_to_steering} deg/(rad/s)'
        )

    def twist_callback(self, msg: Twist):
        """
        Convert geometry_msgs/Twist → abaja_interfaces/ControlCmd.

        Nav2 sends:
          linear.x  = desired forward speed (m/s), negative = stop/back
          angular.z = desired turning rate (rad/s), + = left, - = right

        ControlCmd needs:
          target_speed_mps   = desired speed
          throttle_percent   = 0-100
          brake_percent      = 0-100
          steering_angle_deg = -30 to +30 (+ = left)
          source             = 'nav2'
        """
        cmd = ControlCmd()
        cmd.source = 'nav2'
        cmd.emergency_stop = False

        linear_x = float(msg.linear.x)
        angular_z = float(msg.angular.z)

        # ── Target speed ──────────────────────────────────────────────────
        cmd.target_speed_mps = max(min(linear_x, self.max_speed), -self.max_speed)

        # ── Throttle / Brake ──────────────────────────────────────────────
        if linear_x > 0.001:
            # Forward motion
            cmd.throttle_percent = min((linear_x / self.max_speed) * 100.0, 100.0)
            cmd.brake_percent = 0.0
        elif linear_x < -0.001:
            # Braking / reversing (Nav2 sometimes sends small negative values to stop)
            cmd.throttle_percent = 0.0
            cmd.brake_percent = min((abs(linear_x) / self.max_speed) * 100.0, 100.0)
        else:
            # Near-zero — coast/stop
            cmd.throttle_percent = 0.0
            cmd.brake_percent = 0.0

        # ── Steering ──────────────────────────────────────────────────────
        # angular.z > 0 → left turn → positive steering_angle_deg
        steering_raw = angular_z * self.angular_to_steering
        cmd.steering_angle_deg = max(min(steering_raw, 30.0), -30.0)

        self.pub.publish(cmd)

        self.get_logger().debug(
            f'Nav2→ControlCmd: linear={linear_x:.3f} angular={angular_z:.3f} '
            f'→ throttle={cmd.throttle_percent:.1f}% '
            f'brake={cmd.brake_percent:.1f}% '
            f'steer={cmd.steering_angle_deg:.1f}°'
        )


def main(args=None):
    rclpy.init(args=args)
    node = NavCmdToControlCmdNode()
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
