#!/usr/bin/env python3
"""
sim_controller.py - Simulation Controller for aBAJA Buggy (RViz mode)

This node bridges /cmd_vel commands to /joint_states so you can see
the buggy respond to keyboard teleop commands in RViz WITHOUT Gazebo.

How it works:
  1. Subscribes to /cmd_vel (Twist messages from keyboard_teleop)
  2. Converts linear.x  → wheel rotation speed for all 4 wheels
  3. Converts angular.z → front steering angle
  4. Publishes JointState messages so robot_state_publisher updates RViz

When to use:
  - Use this node when testing teleop in RViz only (no Gazebo)
  - In Gazebo mode, the gz-sim plugins handle joint states directly,
    so you do NOT need this node.

Usage:
    # Terminal 1: Launch RViz with sim_controller
    ros2 launch abaja_bringup sim_bringup.launch.py

    # Terminal 2: Control with keyboard
    ros2 run abaja_teleop keyboard_teleop

    # Or run standalone:
    ros2 run abaja_teleop sim_controller

Author: aBAJA Team, Sri Sairam Engineering College
"""

import math
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from sensor_msgs.msg import JointState


# =============================================================================
# VEHICLE PARAMETERS - Must match values in the URDF/XACRO files
# =============================================================================
WHEEL_RADIUS = 0.32       # meters (from wheels.xacro)
WHEEL_SEPARATION = 1.25   # track width in meters (from wheels.xacro)
WHEELBASE = 1.65           # distance between front and rear axle (m)
MAX_STEERING_ANGLE = 0.6   # radians (~34 degrees, from wheels.xacro)

# Publishing rate for joint states
PUBLISH_RATE_HZ = 50       # 50 Hz for smooth visualization


class SimController(Node):
    """
    Simulation controller that converts /cmd_vel to /joint_states.

    This makes the robot model in RViz respond to teleop commands.
    Wheels rotate based on linear velocity, and front wheels steer
    based on angular velocity.
    """

    def __init__(self):
        super().__init__('abaja_sim_controller')

        # =====================================================================
        # Publishers and subscribers
        # =====================================================================

        # Subscribe to velocity commands from teleop
        self.cmd_vel_sub = self.create_subscription(
            Twist,
            '/cmd_vel',
            self.cmd_vel_callback,
            10
        )

        # Publish joint states for robot_state_publisher
        self.joint_state_pub = self.create_publisher(
            JointState,
            '/joint_states',
            10
        )

        # =====================================================================
        # State variables
        # =====================================================================

        # Current commanded velocities (from /cmd_vel)
        self.linear_vel = 0.0    # m/s forward/backward
        self.angular_vel = 0.0   # rad/s turning rate

        # Accumulated wheel rotation angles (continuous rotation)
        self.fl_wheel_pos = 0.0  # front left wheel angle (radians)
        self.fr_wheel_pos = 0.0  # front right wheel angle
        self.rl_wheel_pos = 0.0  # rear left wheel angle
        self.rr_wheel_pos = 0.0  # rear right wheel angle

        # Current steering angles
        self.fl_steer_angle = 0.0  # front left steering
        self.fr_steer_angle = 0.0  # front right steering

        # Time tracking for integration
        self.last_time = self.get_clock().now()

        # =====================================================================
        # Timer for publishing joint states at fixed rate
        # =====================================================================
        self.timer = self.create_timer(
            1.0 / PUBLISH_RATE_HZ,
            self.publish_joint_states
        )

        # Log startup
        self.get_logger().info('aBAJA Sim Controller started!')
        self.get_logger().info('Subscribing to /cmd_vel, publishing to /joint_states')
        self.get_logger().info(f'Publishing at {PUBLISH_RATE_HZ} Hz')
        self.get_logger().info('Run keyboard_teleop in another terminal to control the buggy')

    def cmd_vel_callback(self, msg):
        """
        Callback for /cmd_vel messages.

        Stores the latest velocity command for use in the timer callback.
        """
        self.linear_vel = msg.linear.x
        self.angular_vel = msg.angular.z

    def publish_joint_states(self):
        """
        Calculate wheel rotations and steering angles from velocity commands,
        then publish as JointState messages.

        Called at PUBLISH_RATE_HZ frequency by the timer.
        """
        # Calculate time delta
        current_time = self.get_clock().now()
        dt = (current_time - self.last_time).nanoseconds / 1e9
        self.last_time = current_time

        # Clamp dt to avoid huge jumps on startup
        if dt > 0.1:
            dt = 0.1

        # =====================================================================
        # Calculate steering angles from angular velocity
        #
        # We map angular velocity to a steering angle.
        # A simple proportional mapping: steer_angle = angular_vel * factor
        # The factor is chosen so that max angular velocity gives a
        # reasonable steering angle.
        # =====================================================================
        steering_factor = 0.75  # Tune this for desired responsiveness
        target_steer = self.angular_vel * steering_factor

        # Clamp to steering limits
        target_steer = max(-MAX_STEERING_ANGLE, min(MAX_STEERING_ANGLE, target_steer))

        # Smooth steering transition (simple exponential filter)
        steer_rate = 5.0  # How fast steering responds (higher = faster)
        alpha = min(1.0, steer_rate * dt)
        self.fl_steer_angle += alpha * (target_steer - self.fl_steer_angle)
        self.fr_steer_angle += alpha * (target_steer - self.fr_steer_angle)

        # =====================================================================
        # Calculate wheel rotation from linear velocity
        #
        # wheel_angular_velocity = linear_velocity / wheel_radius
        # wheel_position += wheel_angular_velocity * dt
        #
        # For differential steering, inner and outer wheels spin at
        # different rates. For simplicity, we apply the same rate to all.
        # =====================================================================
        wheel_angular_vel = self.linear_vel / WHEEL_RADIUS

        # Update accumulated wheel positions (they keep spinning)
        self.fl_wheel_pos += wheel_angular_vel * dt
        self.fr_wheel_pos += wheel_angular_vel * dt
        self.rl_wheel_pos += wheel_angular_vel * dt
        self.rr_wheel_pos += wheel_angular_vel * dt

        # Keep angles in reasonable range to avoid floating point issues
        TWO_PI = 2.0 * math.pi
        self.fl_wheel_pos = self.fl_wheel_pos % TWO_PI
        self.fr_wheel_pos = self.fr_wheel_pos % TWO_PI
        self.rl_wheel_pos = self.rl_wheel_pos % TWO_PI
        self.rr_wheel_pos = self.rr_wheel_pos % TWO_PI

        # =====================================================================
        # Publish JointState message
        #
        # Joint names must exactly match those in the URDF/XACRO files.
        # Order: steering joints first, then wheel joints.
        # =====================================================================
        joint_state = JointState()
        joint_state.header.stamp = current_time.to_msg()

        joint_state.name = [
            # Steering joints (revolute - position controlled)
            'front_left_steering_joint',
            'front_right_steering_joint',
            # Wheel joints (continuous - rotation)
            'front_left_wheel_joint',
            'front_right_wheel_joint',
            'rear_left_wheel_joint',
            'rear_right_wheel_joint',
        ]

        joint_state.position = [
            # Steering positions (radians)
            self.fl_steer_angle,
            self.fr_steer_angle,
            # Wheel positions (radians, accumulated)
            self.fl_wheel_pos,
            self.fr_wheel_pos,
            self.rl_wheel_pos,
            self.rr_wheel_pos,
        ]

        joint_state.velocity = [
            # Steering velocities (not used for display, but included)
            0.0,
            0.0,
            # Wheel velocities
            wheel_angular_vel,
            wheel_angular_vel,
            wheel_angular_vel,
            wheel_angular_vel,
        ]

        self.joint_state_pub.publish(joint_state)


def main(args=None):
    """Main entry point."""
    rclpy.init(args=args)
    node = SimController()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Sim Controller shutting down...')
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
