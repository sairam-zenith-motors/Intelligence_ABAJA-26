#!/usr/bin/env python3
"""
stage8_navigation.launch.py — SLAM + Nav2 + Traffic Signal + Optional Waypoint Mission

WHAT THIS LAUNCH FILE DOES:
  This is Stage 8 of the aBAJA pipeline.
  It assumes Stages 1-7 (Gazebo, description, vehicle state, DBW, control mux,
  perception, lane detection, AEB) are already running (via stage7_full_system.launch.py).

  Stage 8 adds:
    - SLAM Toolbox (online async mapping on /lidar/scan)
    - Nav2 (planner, controller, behavior, bt_navigator, waypoint_follower)
    - nav_cmd_to_control_cmd_node (Nav2 /cmd_vel_nav → /nav_control_cmd bridge)
    - traffic_light_sim_node (publishes /traffic_light_state cycle)
    - traffic_signal_logic_node (publishes /traffic_signal_stop)
    - Optional: waypoint_mission_node (sends lane-track waypoints to Nav2)
    - Optional: RViz2 (with abaja_nav.rviz config)

LAUNCH ARGUMENTS:
  use_sim_time           (default: true)  — use Gazebo clock
  slam                   (default: true)  — run slam_toolbox
  nav2                   (default: true)  — run Nav2
  rviz                   (default: false) — open RViz (set true for visualization)
  start_waypoint_mission (default: false) — auto-start waypoint mission
  green_duration         (default: 10.0)  — traffic GREEN time (s)
  yellow_duration        (default: 3.0)   — traffic YELLOW time (s)
  red_duration           (default: 8.0)   — traffic RED time (s)

USAGE:
  # Stage 8 only (Gazebo + Stages 2-7 must already be running):
  ros2 launch abaja_bringup stage8_navigation.launch.py

  # With RViz and waypoint mission:
  ros2 launch abaja_bringup stage8_navigation.launch.py rviz:=true start_waypoint_mission:=true
"""

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    LogInfo,
)
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node


def generate_launch_description():

    # ── Package directories ───────────────────────────────────────────────
    pkg_bringup = get_package_share_directory('abaja_bringup')
    pkg_description = get_package_share_directory('abaja_description')

    # Config files (installed via setup.py data_files)
    slam_config = os.path.join(pkg_bringup, 'config', 'slam_toolbox.yaml')
    nav2_config = os.path.join(pkg_bringup, 'config', 'nav2_params.yaml')
    rviz_config = os.path.join(pkg_description, 'rviz', 'abaja_nav.rviz')

    # ── Launch arguments ──────────────────────────────────────────────────
    declare_use_sim_time = DeclareLaunchArgument(
        'use_sim_time', default_value='true',
        description='Use Gazebo simulation clock'
    )
    declare_slam = DeclareLaunchArgument(
        'slam', default_value='true',
        description='Run slam_toolbox for online mapping'
    )
    declare_nav2 = DeclareLaunchArgument(
        'nav2', default_value='true',
        description='Run Nav2 navigation stack'
    )
    declare_rviz = DeclareLaunchArgument(
        'rviz', default_value='false',
        description='Open RViz2 with abaja_nav.rviz config'
    )
    declare_waypoint_mission = DeclareLaunchArgument(
        'start_waypoint_mission', default_value='false',
        description='Auto-start waypoint mission node (sends goals to Nav2)'
    )
    declare_green_dur = DeclareLaunchArgument(
        'green_duration', default_value='10.0',
        description='Traffic signal GREEN duration in seconds'
    )
    declare_yellow_dur = DeclareLaunchArgument(
        'yellow_duration', default_value='3.0',
        description='Traffic signal YELLOW duration in seconds'
    )
    declare_red_dur = DeclareLaunchArgument(
        'red_duration', default_value='8.0',
        description='Traffic signal RED duration in seconds'
    )

    # Shortcuts
    use_sim_time = LaunchConfiguration('use_sim_time')
    slam = LaunchConfiguration('slam')
    nav2 = LaunchConfiguration('nav2')
    rviz = LaunchConfiguration('rviz')
    start_waypoint_mission = LaunchConfiguration('start_waypoint_mission')
    green_dur = LaunchConfiguration('green_duration')
    yellow_dur = LaunchConfiguration('yellow_duration')
    red_dur = LaunchConfiguration('red_duration')

    sim_params = [{'use_sim_time': use_sim_time}]

    # ── SLAM Toolbox ──────────────────────────────────────────────────────
    slam_node = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory('slam_toolbox'),
                'launch', 'online_async_launch.py'
            )
        ),
        launch_arguments={
            'use_sim_time': use_sim_time,
            'slam_params_file': slam_config,
        }.items(),
        condition=IfCondition(slam)
    )

    # ── Nav2 Bringup ──────────────────────────────────────────────────────
    # Use nav2_bringup navigation_launch.py for the full Nav2 stack.
    # We remap /cmd_vel → /cmd_vel_nav so Nav2's output goes to our bridge node,
    # not directly to Gazebo's DiffDrive (which already has dbw_to_cmd_vel on /cmd_vel).
    nav2_node = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory('nav2_bringup'),
                'launch', 'navigation_launch.py'
            )
        ),
        launch_arguments={
            'use_sim_time': use_sim_time,
            'params_file': nav2_config,
            # CRITICAL: remap Nav2 /cmd_vel → /cmd_vel_nav to avoid
            # directly driving Gazebo (bypassing DBW safety pipeline)
            'cmd_vel_topic': '/cmd_vel_nav',
        }.items(),
        condition=IfCondition(nav2)
    )

    # ── Nav2 bridge: /cmd_vel_nav → /nav_control_cmd ──────────────────────
    nav_bridge = Node(
        package='abaja_planning',
        executable='nav_cmd_to_control_cmd_node',
        name='nav_cmd_to_control_cmd_node',
        parameters=[{
            'use_sim_time': use_sim_time,
            'max_speed_mps': 2.0,
            'angular_to_steering': 30.0,
        }],
        output='screen',
        condition=IfCondition(nav2)
    )

    # ── Traffic light simulator ───────────────────────────────────────────
    traffic_light_sim = Node(
        package='abaja_planning',
        executable='traffic_light_sim_node',
        name='traffic_light_sim_node',
        parameters=[{
            'use_sim_time': use_sim_time,
            'green_duration_s': green_dur,
            'yellow_duration_s': yellow_dur,
            'red_duration_s': red_dur,
            'initial_state': 'GREEN',
            'publish_rate_hz': 2.0,
        }],
        output='screen'
    )

    # ── Traffic signal logic ──────────────────────────────────────────────
    traffic_signal_logic = Node(
        package='abaja_planning',
        executable='traffic_signal_logic_node',
        name='traffic_signal_logic_node',
        parameters=[{
            'use_sim_time': use_sim_time,
            'stop_line_x': 17.0,
            'stop_zone_entry_x': 13.5,
            'past_stop_line_x': 17.5,
            'publish_rate_hz': 10.0,
        }],
        output='screen'
    )

    # ── Waypoint mission (optional) ───────────────────────────────────────
    waypoint_mission = Node(
        package='abaja_planning',
        executable='waypoint_mission_node',
        name='waypoint_mission_node',
        parameters=[{
            'use_sim_time': use_sim_time,
            'waypoints_file': os.path.join(pkg_bringup, 'config', 'mission_waypoints.yaml'),
        }],
        output='screen',
        condition=IfCondition(start_waypoint_mission)
    )

    # ── RViz2 (optional) ─────────────────────────────────────────────────
    rviz2_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2_nav',
        arguments=['-d', rviz_config],
        parameters=sim_params,
        output='screen',
        condition=IfCondition(rviz)
    )

    return LaunchDescription([
        # Declare all arguments
        declare_use_sim_time,
        declare_slam,
        declare_nav2,
        declare_rviz,
        declare_waypoint_mission,
        declare_green_dur,
        declare_yellow_dur,
        declare_red_dur,

        # Log startup
        LogInfo(msg='[stage8] Starting SLAM + Nav2 + Traffic Signal pipeline...'),

        # SLAM first (provides map → odom TF for Nav2)
        LogInfo(msg='[stage8] Starting SLAM toolbox on /lidar/scan...'),
        slam_node,

        # Nav2 stack (needs SLAM TF to be publishing)
        LogInfo(msg='[stage8] Starting Nav2 navigation stack...'),
        nav2_node,

        # Nav2 → control_mux bridge
        LogInfo(msg='[stage8] Starting Nav2→ControlCmd bridge (/cmd_vel_nav → /nav_control_cmd)...'),
        nav_bridge,

        # Traffic signal system
        LogInfo(msg='[stage8] Starting traffic signal simulation and logic...'),
        traffic_light_sim,
        traffic_signal_logic,

        # Optional waypoint mission
        waypoint_mission,

        # Optional RViz
        LogInfo(msg='[stage8] Stage 8 navigation launch complete.'),
        rviz2_node,
    ])
