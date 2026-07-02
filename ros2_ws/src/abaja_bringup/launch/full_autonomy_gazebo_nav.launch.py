#!/usr/bin/env python3
"""
full_autonomy_gazebo_nav.launch.py — One-Command Full Autonomous Demo

WHAT THIS DOES:
  Launches the COMPLETE aBAJA autonomous buggy simulation with one command:

  ┌─────────────────────────────────────────────────────────────────┐
  │  STAGE 1: Gazebo Harmonic simulation (lane track world + robot) │
  │  STAGE 2: Vehicle state (mode_status, vehicle_state, etc.)      │
  │  STAGE 3: DBW pipeline (dbw_manager, by-wire nodes, sim bridge) │
  │  STAGE 4: Perception (simulated camera viewer — no YOLO)        │
  │  STAGE 5: Lane detection + LKA                                  │
  │  STAGE 6: AEB (emergency braking)                               │
  │  STAGE 7: Control Mux (Safety > AEB > TrafficStop > Nav2 > LKA) │
  │  STAGE 8: SLAM + Nav2 + Traffic Signal + Optional Waypoints     │
  └─────────────────────────────────────────────────────────────────┘

LAUNCH ARGUMENTS:
  use_sim_time           (default: true)   — Gazebo clock
  world                  (default: abaja_lane_track) — which SDF world
  slam                   (default: true)   — run SLAM toolbox
  nav2                   (default: true)   — run Nav2
  rviz                   (default: true)   — open RViz (navigation view)
  start_waypoint_mission (default: false)  — auto-start waypoint mission
  green_duration         (default: 10.0)   — traffic GREEN time (s)
  yellow_duration        (default: 3.0)    — traffic YELLOW time (s)
  red_duration           (default: 8.0)    — traffic RED time (s)

USAGE — EXAMPLES:
  # Full simulation (Gazebo + Autonomy + Nav2 + Traffic):
  ros2 launch abaja_bringup full_autonomy_gazebo_nav.launch.py

  # With auto-start waypoint mission (buggy drives autonomously on track):
  ros2 launch abaja_bringup full_autonomy_gazebo_nav.launch.py start_waypoint_mission:=true

  # Without RViz (headless):
  ros2 launch abaja_bringup full_autonomy_gazebo_nav.launch.py rviz:=false

  # Shorter traffic red (3s) for faster testing:
  ros2 launch abaja_bringup full_autonomy_gazebo_nav.launch.py red_duration:=3.0

ARCHITECTURE:
  Gazebo → /camera/image_raw, /lidar/scan, /imu/data, /odom, /gps/fix (via ros_gz_bridge)
  SLAM Toolbox → /map (map frame)  /tf (map → odom)
  Nav2 → /cmd_vel_nav (Twist)
  nav_cmd_to_control_cmd_node → /nav_control_cmd (ControlCmd)
  control_mux_node → /control_cmd (priority: Safety > AEB > TrafficStop > Nav2 > LKA > Teleop)
  dbw_manager_node → /dbw_cmd
  dbw_to_cmd_vel_node → /cmd_vel → Gazebo DiffDrive plugin

TF CHAIN:
  map → odom → base_link → chassis_link → [all sensor frames]
  map → odom: SLAM toolbox
  odom → base_link: Gazebo DiffDrive + /odom topic
  base_link → ...: robot_state_publisher from URDF
"""

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    LogInfo,
    TimerAction,
)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration


def generate_launch_description():

    # ── Package directories ───────────────────────────────────────────────
    pkg_description = get_package_share_directory('abaja_description')
    pkg_bringup = get_package_share_directory('abaja_bringup')

    # ── Launch arguments ──────────────────────────────────────────────────
    declare_use_sim_time = DeclareLaunchArgument(
        'use_sim_time', default_value='true',
        description='Use Gazebo simulation clock'
    )
    declare_world = DeclareLaunchArgument(
        'world', default_value='abaja_lane_track',
        description='Gazebo world to load (abaja_lane_track, abaja_track, or empty)'
    )
    declare_slam = DeclareLaunchArgument(
        'slam', default_value='true',
        description='Run SLAM toolbox for online mapping'
    )
    declare_nav2 = DeclareLaunchArgument(
        'nav2', default_value='true',
        description='Run Nav2 navigation stack'
    )
    declare_rviz = DeclareLaunchArgument(
        'rviz', default_value='true',
        description='Open RViz2 with navigation visualization'
    )
    declare_waypoint_mission = DeclareLaunchArgument(
        'start_waypoint_mission', default_value='false',
        description='Auto-start waypoint mission (buggy drives autonomously on track)'
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
    world = LaunchConfiguration('world')
    slam = LaunchConfiguration('slam')
    nav2 = LaunchConfiguration('nav2')
    rviz = LaunchConfiguration('rviz')
    start_waypoint_mission = LaunchConfiguration('start_waypoint_mission')
    green_dur = LaunchConfiguration('green_duration')
    yellow_dur = LaunchConfiguration('yellow_duration')
    red_dur = LaunchConfiguration('red_duration')

    # ── STAGE 1: Gazebo simulation ────────────────────────────────────────
    # gazebo.launch.py starts Gazebo + robot_state_publisher + ros_gz_bridge
    # Bridges: /camera/image_raw, /lidar/scan, /imu/data, /odom, /gps/fix, /cmd_vel
    stage1_gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_description, 'launch', 'gazebo.launch.py')
        ),
        launch_arguments={
            'use_sim_time': use_sim_time,
            'world': world,
        }.items()
    )

    # ── STAGES 2-4: Vehicle State + DBW + Perception ──────────────────────
    stage2_3_4 = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_bringup, 'launch', 'stage2_3_4_bringup.launch.py')
        ),
        launch_arguments={'use_sim_time': use_sim_time}.items()
    )

    # ── STAGE 5: Lane Detection + LKA ────────────────────────────────────
    stage5 = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_bringup, 'launch', 'stage5_lane.launch.py')
        ),
        launch_arguments={'use_sim_time': use_sim_time}.items()
    )

    # ── STAGE 6: AEB ──────────────────────────────────────────────────────
    stage6 = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_bringup, 'launch', 'stage6_aeb.launch.py')
        ),
        launch_arguments={'use_sim_time': use_sim_time}.items()
    )

    # ── STAGE 7: Full system (control_mux + logging + safety) ────────────
    stage7 = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_bringup, 'launch', 'stage7_full_system.launch.py')
        ),
        launch_arguments={'use_sim_time': use_sim_time}.items()
    )

    # ── STAGE 8: Navigation (SLAM + Nav2 + Traffic Signal + Waypoints) ────
    # Delayed by 5 seconds to give Gazebo time to start and /lidar/scan to be available.
    # SLAM needs sensor data before it can build the map.
    stage8_navigation_inner = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_bringup, 'launch', 'stage8_navigation.launch.py')
        ),
        launch_arguments={
            'use_sim_time': use_sim_time,
            'slam': slam,
            'nav2': nav2,
            'rviz': rviz,
            'start_waypoint_mission': start_waypoint_mission,
            'green_duration': green_dur,
            'yellow_duration': yellow_dur,
            'red_duration': red_dur,
        }.items()
    )

    # Wrap Stage 8 in a 5-second delay so Gazebo + sensors are ready first
    stage8_navigation = TimerAction(
        period=5.0,
        actions=[
            LogInfo(msg='[full_autonomy] ⏱️  5s delay elapsed — starting Stage 8 (SLAM + Nav2 + Traffic Signal)...'),
            stage8_navigation_inner,
        ]
    )

    return LaunchDescription([
        # ── Declare arguments ───────────────────────────────────────────
        declare_use_sim_time,
        declare_world,
        declare_slam,
        declare_nav2,
        declare_rviz,
        declare_waypoint_mission,
        declare_green_dur,
        declare_yellow_dur,
        declare_red_dur,

        # ── Startup log ─────────────────────────────────────────────────
        LogInfo(msg='╔══════════════════════════════════════════════════════════╗'),
        LogInfo(msg='║  aBAJA Full Autonomy Simulation — Starting...            ║'),
        LogInfo(msg='║  All stages: Gazebo + DBW + LKA + AEB + Nav2 + Traffic  ║'),
        LogInfo(msg='╚══════════════════════════════════════════════════════════╝'),

        # ── Stage 1: Gazebo ─────────────────────────────────────────────
        LogInfo(msg='[full_autonomy] STAGE 1: Starting Gazebo simulation...'),
        stage1_gazebo,

        # ── Stages 2-4: Core stack ──────────────────────────────────────
        LogInfo(msg='[full_autonomy] STAGES 2-4: Starting vehicle state, DBW, perception...'),
        stage2_3_4,

        # ── Stage 5: Lane detection ─────────────────────────────────────
        LogInfo(msg='[full_autonomy] STAGE 5: Starting lane detection + LKA...'),
        stage5,

        # ── Stage 6: AEB ────────────────────────────────────────────────
        LogInfo(msg='[full_autonomy] STAGE 6: Starting AEB...'),
        stage6,

        # ── Stage 7: Control Mux + Safety ───────────────────────────────
        LogInfo(msg='[full_autonomy] STAGE 7: Starting control mux + safety supervisor...'),
        stage7,

        # ── Stage 8: Navigation (delayed 5s) ────────────────────────────
        LogInfo(msg='[full_autonomy] STAGE 8: Scheduling SLAM + Nav2 launch in 5 seconds...'),
        stage8_navigation,
    ])
