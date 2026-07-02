#!/usr/bin/env python3
"""
dbw_to_cmd_vel_node.py - DBW Command to cmd_vel Bridge for Gazebo Simulation

This node closes the autonomous control loop in Gazebo.

Problem it solves:
  The full autonomous pipeline ends at:
    control_mux_node → /control_cmd → dbw_manager_node → /dbw_cmd
  But Gazebo's DiffDrive plugin only responds to /cmd_vel (Twist).
  Without this node, autonomous commands (from LKA, AEB, teleop path) are
  computed correctly but never reach the Gazebo physics engine.

How it works:
  Subscribes to /dbw_cmd  (DbwCmd)
  Converts throttle_percent + steering_angle_deg → linear.x + angular.z
  Publishes to /cmd_vel (Twist) → bridges into Gazebo via ros_gz_bridge

Conversion:
  linear.x  = (throttle_percent / 100.0) * MAX_SPEED_MPS
             - (brake_percent / 100.0) * MAX_SPEED_MPS  [simplified]
  angular.z = -steering_angle_deg / STEERING_TO_ANGULAR_FACTOR

Note:
  This is a simulation-only node. On real hardware, /dbw_cmd is sent
  directly to the CAN/serial actuator interface in abaja_dbw_bridge.
  When running with real hardware, do NOT launch this node.
"""

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from abaja_interfaces.msg import DbwCmd


# ---------------------------------------------------------------------------
# Conversion constants — tune these to match physical buggy behaviour
# ---------------------------------------------------------------------------
MAX_SPEED_MPS = 2.0          # m/s at 100% throttle (matches DiffDrive plugin limits)
STEERING_TO_ANGULAR = 1.5    # scales steering_deg → angular.z (rad/s equivalent)
                              # Higher = more responsive turning in Gazebo


class DbwToCmdVelNode(Node):
    """
    Converts /dbw_cmd (DbwCmd) output from dbw_manager_node into
    /cmd_vel (Twist) so Gazebo's DiffDrive plugin receives the commands.
    """

    def __init__(self):
        super().__init__('dbw_to_cmd_vel_node')

        # Parameters — can be overridden from launch file
        self.declare_parameter('max_speed_mps', MAX_SPEED_MPS)
        self.declare_parameter('steering_to_angular', STEERING_TO_ANGULAR)

        self.max_speed = self.get_parameter('max_speed_mps').value
        self.steer_factor = self.get_parameter('steering_to_angular').value

        # Subscribe to DBW command output
        self.sub = self.create_subscription(
            DbwCmd,
            '/dbw_cmd',
            self.dbw_cmd_callback,
            10
        )

        # Publish to /cmd_vel — bridged to Gazebo by ros_gz_bridge
        self.pub = self.create_publisher(Twist, '/cmd_vel', 10)

        self.get_logger().info(
            'DBW→cmd_vel bridge started. '
            f'max_speed={self.max_speed} m/s, '
            f'steer_factor={self.steer_factor}'
        )

    def dbw_cmd_callback(self, msg: DbwCmd):
        """
        Convert DbwCmd fields to a Twist message for Gazebo.

        Emergency stop: override everything → zero velocity.
        Normal:         throttle drives linear.x, steering drives angular.z.
        Braking:        brake_percent reduces linear.x proportionally.
        """
        twist = Twist()

        # -----------------------------------------------------------------
        # Emergency stop overrides everything
        # -----------------------------------------------------------------
        if msg.emergency_stop:
            twist.linear.x = 0.0
            twist.angular.z = 0.0
            self.pub.publish(twist)
            return

        # -----------------------------------------------------------------
        # Longitudinal velocity:
        #   throttle pushes speed forward
        #   brake reduces it
        #   Net = throttle contribution - brake contribution
        # -----------------------------------------------------------------
        throttle_vel = (msg.throttle_percent / 100.0) * self.max_speed
        brake_vel = (msg.brake_percent / 100.0) * self.max_speed
        net_linear = throttle_vel - brake_vel

        # Clamp to physical limits
        net_linear = max(min(net_linear, self.max_speed), -self.max_speed)

        # If DBW isn't enabled, send zero
        if not msg.enable_throttle and not msg.enable_brake:
            net_linear = 0.0

        # -----------------------------------------------------------------
        # Lateral / steering:
        #   steering_angle_deg (+ = left in ROS convention)
        #   angular.z positive = counter-clockwise = left turn
        #   Divide by steer_factor to convert degrees → rad/s scale
        # -----------------------------------------------------------------
        if msg.enable_steering:
            angular_z = msg.steering_angle_deg / self.steer_factor
            # Clamp to reasonable angular velocity
            angular_z = max(min(angular_z, 1.5), -1.5)
        else:
            angular_z = 0.0

        twist.linear.x = net_linear
        twist.angular.z = angular_z

        self.pub.publish(twist)

        self.get_logger().debug(
            f'DBW→cmd_vel: throttle={msg.throttle_percent:.1f}% '
            f'brake={msg.brake_percent:.1f}% '
            f'steer={msg.steering_angle_deg:.1f}° '
            f'→ linear={net_linear:.2f} angular={angular_z:.2f}'
        )


def main(args=None):
    rclpy.init(args=args)
    node = DbwToCmdVelNode()
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
