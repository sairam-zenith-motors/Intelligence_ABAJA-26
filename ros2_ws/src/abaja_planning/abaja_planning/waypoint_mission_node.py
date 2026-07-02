#!/usr/bin/env python3
"""
waypoint_mission_node.py — Autonomous Waypoint Mission Executor

PURPOSE:
  Loads ordered waypoints from mission_waypoints.yaml and sends them to
  Nav2's /follow_waypoints action server in sequence.
  The buggy will autonomously navigate from start to end of the lane track,
  obeying Nav2's path planning and the traffic signal logic on the way.

PIPELINE:
  [this node] → /follow_waypoints action → bt_navigator → planner → controller
                                                         → /cmd_vel_nav
                                                         → nav_cmd_to_control_cmd_node
                                                         → control_mux → DBW → Gazebo

BEHAVIOUR:
  1. Waits for Nav2 /follow_waypoints action server to be available
  2. Loads waypoints from mission_waypoints.yaml
  3. Sends all waypoints (index >= goals_start_index) as a single action
  4. Reports progress (which waypoint is currently being navigated to)
  5. On success: logs completion
  6. On failure: logs error and can retry (stop_on_failure=false in nav2_params)

WAYPOINTS (from mission_waypoints.yaml):
  wp1: X=5.0   early straight
  wp2: X=10.0  mid straight
  wp3: X=15.0  approach signal
  wp4: X=17.0  stop line (traffic signal gate)
  wp5: X=20.0  past signal
  wp6: X=24.0  end of track (final goal)

USAGE:
  # Standalone (Nav2 + Gazebo must already be running):
  ros2 run abaja_planning waypoint_mission_node

  # Via launch file:
  ros2 launch abaja_bringup full_autonomy_gazebo_nav.launch.py start_waypoint_mission:=true

PARAMETERS:
  waypoints_file  (string) — absolute path to mission_waypoints.yaml
                             (set by launch file via ament_index)
  use_sim_time    (bool)   — true for Gazebo simulation
"""

import os
import yaml
import math
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.duration import Duration
from nav2_msgs.action import FollowWaypoints
from geometry_msgs.msg import PoseStamped


class WaypointMissionNode(Node):
    """
    Sends the aBAJA lane-track waypoints to Nav2 /follow_waypoints action.
    """

    def __init__(self):
        super().__init__('waypoint_mission_node')

        # ── Parameters ────────────────────────────────────────────────────
        self.declare_parameter('waypoints_file', '')
        self.declare_parameter('use_sim_time', True)

        waypoints_file = self.get_parameter('waypoints_file').value

        # If not set via parameter, try to find via ament_index
        if not waypoints_file or not os.path.exists(waypoints_file):
            try:
                from ament_index_python.packages import get_package_share_directory
                pkg = get_package_share_directory('abaja_bringup')
                waypoints_file = os.path.join(pkg, 'config', 'mission_waypoints.yaml')
            except Exception:
                waypoints_file = ''

        if not os.path.exists(waypoints_file):
            self.get_logger().error(
                f'mission_waypoints.yaml not found at: {waypoints_file}'
            )
            raise FileNotFoundError(f'Waypoints file not found: {waypoints_file}')

        self.waypoints_file = waypoints_file
        self.get_logger().info(f'Loading waypoints from: {self.waypoints_file}')

        # ── Action client for Nav2 follow_waypoints ──────────────────────
        self._action_client = ActionClient(self, FollowWaypoints, 'follow_waypoints')

        # ── Load waypoints ────────────────────────────────────────────────
        self.waypoints = self._load_waypoints()

        if not self.waypoints:
            self.get_logger().error('No waypoints loaded — check mission_waypoints.yaml')
            return

        self.get_logger().info(
            f'Loaded {len(self.waypoints)} waypoints. '
            f'Waiting for Nav2 /follow_waypoints action server...'
        )

        # ── Start mission after Nav2 is ready ─────────────────────────────
        # Use a one-shot timer to wait for Nav2, then send mission
        self._start_timer = self.create_timer(2.0, self._start_mission)

    def _load_waypoints(self):
        """Load waypoints from YAML, return list of PoseStamped."""
        try:
            with open(self.waypoints_file, 'r') as f:
                data = yaml.safe_load(f)
        except Exception as e:
            self.get_logger().error(f'Failed to load waypoints YAML: {e}')
            return []

        mission = data.get('mission', {})
        frame_id = mission.get('frame_id', 'map')
        all_wps = mission.get('waypoints', [])
        start_idx = mission.get('goals_start_index', 1)

        # Skip the 'start' waypoint (index 0 = vehicle spawn)
        goal_wps = all_wps[start_idx:]

        poses = []
        for wp in goal_wps:
            pose = PoseStamped()
            pose.header.frame_id = frame_id
            pose.header.stamp = self.get_clock().now().to_msg()

            pos = wp.get('pose', {}).get('position', {})
            ort = wp.get('pose', {}).get('orientation', {})

            pose.pose.position.x = float(pos.get('x', 0.0))
            pose.pose.position.y = float(pos.get('y', 0.0))
            pose.pose.position.z = float(pos.get('z', 0.0))
            pose.pose.orientation.x = float(ort.get('x', 0.0))
            pose.pose.orientation.y = float(ort.get('y', 0.0))
            pose.pose.orientation.z = float(ort.get('z', 0.0))
            pose.pose.orientation.w = float(ort.get('w', 1.0))

            poses.append(pose)
            self.get_logger().info(
                f'  Waypoint [{wp.get("name", "?")}]: '
                f'X={pose.pose.position.x:.1f} Y={pose.pose.position.y:.1f}'
            )

        return poses

    def _start_mission(self):
        """Called by timer — wait for server then send waypoints."""
        # Cancel the recurring timer (one-shot)
        self._start_timer.cancel()

        # Wait for action server (up to 30 seconds)
        self.get_logger().info('Waiting for Nav2 /follow_waypoints action server...')
        if not self._action_client.wait_for_server(timeout_sec=30.0):
            self.get_logger().error(
                'Nav2 /follow_waypoints action server not available after 30s. '
                'Is Nav2 running? Try: ros2 action list | grep waypoint'
            )
            return

        self.get_logger().info(
            f'✅ Nav2 action server ready. '
            f'Sending {len(self.waypoints)} waypoints...'
        )
        self._send_waypoints()

    def _send_waypoints(self):
        """Send all waypoints to Nav2 as a single FollowWaypoints action."""
        # Refresh timestamps
        now = self.get_clock().now().to_msg()
        for wp in self.waypoints:
            wp.header.stamp = now

        goal_msg = FollowWaypoints.Goal()
        goal_msg.poses = self.waypoints

        self.get_logger().info(
            f'🚀 Sending mission: {len(self.waypoints)} waypoints to Nav2...'
        )

        send_future = self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self._feedback_callback
        )
        send_future.add_done_callback(self._goal_response_callback)

    def _goal_response_callback(self, future):
        """Handle Nav2 goal acceptance/rejection."""
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error('❌ Nav2 REJECTED the waypoint mission goal!')
            return

        self.get_logger().info('✅ Nav2 ACCEPTED mission. Buggy is navigating...')
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self._result_callback)

    def _feedback_callback(self, feedback_msg):
        """Report current waypoint progress."""
        feedback = feedback_msg.feedback
        current_wp = feedback.current_waypoint
        total_wps = len(self.waypoints)
        self.get_logger().info(
            f'📍 Navigating to waypoint {current_wp + 1}/{total_wps}'
        )

    def _result_callback(self, future):
        """Handle mission completion."""
        result = future.result().result
        missed = result.missed_waypoints

        if not missed:
            self.get_logger().info(
                f'🏁 MISSION COMPLETE! '
                f'All {len(self.waypoints)} waypoints reached successfully!'
            )
        else:
            self.get_logger().warn(
                f'⚠️  Mission finished with {len(missed)} missed waypoints: '
                f'{missed}. Check Nav2 logs for details.'
            )


def main(args=None):
    rclpy.init(args=args)
    node = WaypointMissionNode()
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
