#!/usr/bin/env python3
"""
control_mux_node.py - Control Command Multiplexer

Receives control commands from multiple sources and applies a strict
safety-priority order to decide which command to forward to the DBW manager.

PRIORITY ORDER (highest to lowest):
  1. Safety Supervisor emergency stop (/safety_state.emergency_stop)
  2. AEB emergency/warning braking   (/aeb_control_cmd.brake_percent > 0)
  3. Traffic signal stop              (/traffic_signal_stop = True)
  4. Nav2 autonomous navigation       (/nav_control_cmd)
  5. LKA lane keeping assist          (/lka_control_cmd)
  6. Teleop / manual fallback         (/teleop_control_cmd)

INPUT TOPICS:
  /teleop_control_cmd   (abaja_interfaces/msg/ControlCmd) - keyboard/joystick
  /lka_control_cmd      (abaja_interfaces/msg/ControlCmd) - lane keeping
  /aeb_control_cmd      (abaja_interfaces/msg/ControlCmd) - emergency braking
  /nav_control_cmd      (abaja_interfaces/msg/ControlCmd) - Nav2 navigation
  /safety_state         (abaja_interfaces/msg/SafetyState) - safety supervisor
  /traffic_signal_stop  (std_msgs/msg/Bool)               - traffic signal logic

OUTPUT TOPICS:
  /control_cmd  (abaja_interfaces/msg/ControlCmd) - to DBW manager (20 Hz)

NOTES:
  - Nav2 feeds /cmd_vel_nav → nav_cmd_to_control_cmd_node → /nav_control_cmd
  - Traffic signal stop is a soft brake (does NOT cancel Nav2 mission)
  - LKA is active when target_speed > 0 OR steering != 0 OR brake > 0
  - Teleop is always the final fallback
"""

import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import ControlCmd, SafetyState
from std_msgs.msg import Bool


class ControlMuxNode(Node):
    def __init__(self):
        super().__init__('control_mux_node')

        # ── Subscribers ───────────────────────────────────────────────────
        self.teleop_sub = self.create_subscription(
            ControlCmd, '/teleop_control_cmd', self.teleop_cb, 10)
        self.lka_sub = self.create_subscription(
            ControlCmd, '/lka_control_cmd', self.lka_cb, 10)
        self.aeb_sub = self.create_subscription(
            ControlCmd, '/aeb_control_cmd', self.aeb_cb, 10)
        self.nav_sub = self.create_subscription(
            ControlCmd, '/nav_control_cmd', self.nav_cb, 10)
        self.safety_sub = self.create_subscription(
            SafetyState, '/safety_state', self.safety_cb, 10)
        self.traffic_stop_sub = self.create_subscription(
            Bool, '/traffic_signal_stop', self.traffic_stop_cb, 10)

        # ── Publisher ─────────────────────────────────────────────────────
        self.pub = self.create_publisher(ControlCmd, '/control_cmd', 10)

        # ── Latest commands (defaults = zero/safe) ────────────────────────
        self.teleop_cmd = ControlCmd()
        self.lka_cmd = ControlCmd()
        self.aeb_cmd = ControlCmd()
        self.nav_cmd = ControlCmd()
        self.safety_state = SafetyState()
        self.safety_state.emergency_stop = False
        self.traffic_signal_stop = False

        # Timeout tracking for Nav2 command staleness
        self.nav_last_time = self.get_clock().now()

        # Run mux loop at 20 Hz
        self.timer = self.create_timer(0.05, self.mux_loop)

        self.get_logger().info(
            'Control Mux Node started. '
            'Priority: Safety > AEB > TrafficStop > Nav2 > LKA > Teleop'
        )

    # ── Callbacks ─────────────────────────────────────────────────────────
    def teleop_cb(self, msg):
        self.teleop_cmd = msg

    def lka_cb(self, msg):
        self.lka_cmd = msg

    def aeb_cb(self, msg):
        self.aeb_cmd = msg

    def nav_cb(self, msg):
        self.nav_cmd = msg
        self.nav_last_time = self.get_clock().now()

    def safety_cb(self, msg):
        self.safety_state = msg

    def traffic_stop_cb(self, msg):
        self.traffic_signal_stop = msg.data

    # ── Mux Loop ──────────────────────────────────────────────────────────
    def mux_loop(self):
        final_cmd = ControlCmd()

        # ── Priority 1: Safety Supervisor Emergency Stop ──────────────────
        if self.safety_state.emergency_stop:
            final_cmd.source = 'mux_emergency'
            final_cmd.throttle_percent = 0.0
            final_cmd.brake_percent = 100.0
            final_cmd.steering_angle_deg = 0.0
            final_cmd.target_speed_mps = 0.0
            final_cmd.emergency_stop = True
            self.pub.publish(final_cmd)
            return

        # ── Priority 2: AEB (Emergency or Warning Braking) ───────────────
        if self.aeb_cmd.brake_percent > 0:
            final_cmd.source = 'mux_aeb'
            final_cmd.throttle_percent = self.aeb_cmd.throttle_percent
            final_cmd.brake_percent = self.aeb_cmd.brake_percent
            final_cmd.target_speed_mps = 0.0
            # AEB doesn't control steering — use Nav2 or teleop steer
            if abs(self.nav_cmd.steering_angle_deg) > 0:
                final_cmd.steering_angle_deg = self.nav_cmd.steering_angle_deg
            elif abs(self.lka_cmd.steering_angle_deg) > 0:
                final_cmd.steering_angle_deg = self.lka_cmd.steering_angle_deg
            else:
                final_cmd.steering_angle_deg = self.teleop_cmd.steering_angle_deg
            self.pub.publish(final_cmd)
            return

        # ── Priority 3: Traffic Signal Stop ──────────────────────────────
        # Soft brake — Nav2 mission is NOT cancelled, just paused at signal
        if self.traffic_signal_stop:
            final_cmd.source = 'mux_traffic_stop'
            final_cmd.throttle_percent = 0.0
            final_cmd.brake_percent = 80.0   # firm brake, not 100% (allows creep release)
            final_cmd.steering_angle_deg = 0.0
            final_cmd.target_speed_mps = 0.0
            final_cmd.emergency_stop = False
            self.pub.publish(final_cmd)
            return

        # ── Priority 4: Nav2 Autonomous Navigation ────────────────────────
        # Active if Nav2 has sent a command recently (within 1 second)
        nav_age = (self.get_clock().now() - self.nav_last_time).nanoseconds / 1e9
        nav_active = (
            nav_age < 1.0
            and (
                self.nav_cmd.target_speed_mps > 0.001
                or abs(self.nav_cmd.steering_angle_deg) > 0.001
                or self.nav_cmd.throttle_percent > 0.001
            )
        )
        if nav_active:
            final_cmd.source = 'mux_nav2'
            final_cmd.throttle_percent = self.nav_cmd.throttle_percent
            final_cmd.brake_percent = self.nav_cmd.brake_percent
            final_cmd.steering_angle_deg = self.nav_cmd.steering_angle_deg
            final_cmd.target_speed_mps = self.nav_cmd.target_speed_mps
            final_cmd.emergency_stop = False
            self.pub.publish(final_cmd)
            return

        # ── Priority 5: LKA (Lane Keeping Assist) ────────────────────────
        lka_active = (
            self.lka_cmd.target_speed_mps > 0
            or abs(self.lka_cmd.steering_angle_deg) > 0
            or self.lka_cmd.brake_percent > 0
        )
        if lka_active:
            final_cmd.source = 'mux_lka'
            final_cmd.throttle_percent = self.lka_cmd.throttle_percent
            final_cmd.brake_percent = self.lka_cmd.brake_percent
            final_cmd.steering_angle_deg = self.lka_cmd.steering_angle_deg
            final_cmd.target_speed_mps = self.lka_cmd.target_speed_mps
            self.pub.publish(final_cmd)
            return

        # ── Priority 6: Teleop / Manual Fallback ─────────────────────────
        final_cmd = self.teleop_cmd
        final_cmd.source = 'mux_teleop'
        self.pub.publish(final_cmd)


def main(args=None):
    rclpy.init(args=args)
    node = ControlMuxNode()
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
