"""
gazebo.launch.py - Launch the aBAJA buggy in Gazebo Harmonic (ROS2 Jazzy)

This launch file starts:
1. robot_state_publisher  - Publishes the robot URDF and TF transforms
2. Gazebo Harmonic (gz sim) - The 3D physics simulation
3. ros_gz_sim create       - Spawns the robot model into Gazebo
4. ros_gz_bridge           - Bridges topics between ROS2 and Gazebo:

CAMERA PIPELINE:
  sensors.xacro (Gazebo camera sensor, topic: front_camera/image_raw)
    → ros_gz_bridge (remapped)
    → ROS2: /camera/image_raw   (sensor_msgs/msg/Image)
    → ROS2: /camera/camera_info (sensor_msgs/msg/CameraInfo)
  To view: ros2 run rqt_image_view rqt_image_view /camera/image_raw
  NOTE: The laptop/USB webcam is NOT used. Images come from vehicle-mounted Gazebo camera.

LIDAR PIPELINE:
  sensors.xacro (Gazebo gpu_lidar, topic: lidar/scan)
    → ros_gz_bridge
    → ROS2: /lidar/scan (sensor_msgs/msg/LaserScan)

IMU PIPELINE:
  sensors.xacro (Gazebo imu, topic: imu/data)
    → ros_gz_bridge
    → ROS2: /imu/data (sensor_msgs/msg/Imu)

GPS/NavSat PIPELINE:
  sensors.xacro (Gazebo navsat, topic: gps/fix)
    → ros_gz_bridge
    → ROS2: /gps/fix (sensor_msgs/msg/NavSatFix)
  Note: Requires gz-sim-navsat-system plugin (in abaja_lane_track.sdf).

RADAR:
  Starkenn Orion Radar — visual + TF frame only.
  No Gazebo plugin. No bridge topic.
  TODO: Bridge /radar/objects when real hardware SDK is integrated.

OBJECT DETECTION:
  DISABLED by default. Do not run YOLO. Do not use webcam.
  Enable only when a trained model is available.

LAUNCH ARGUMENTS:
  use_sim_time  (default: true)             - Use Gazebo clock
  world         (default: abaja_lane_track) - Gazebo world file to load
                                              Options: abaja_lane_track, abaja_track, empty

USAGE:
  # Lane track (default):
  ros2 launch abaja_description gazebo.launch.py

  # Alternate world:
  ros2 launch abaja_description gazebo.launch.py world:=abaja_track

  # Keyboard teleop (new terminal):
  ros2 run abaja_teleop keyboard_teleop

  # View simulated camera (new terminal):
  ros2 run rqt_image_view rqt_image_view /camera/image_raw

  # Check all sensor topics:
  ros2 topic list | grep -E 'camera|lidar|imu|gps'

  # Check TF frames:
  ros2 run tf2_tools view_frames

PREREQUISITES:
  sudo apt install ros-jazzy-ros-gz-sim ros-jazzy-ros-gz-bridge ros-jazzy-ros-gz-image
"""

import os
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    LogInfo,
    TimerAction,
)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    """Generate the launch description for Gazebo Harmonic simulation."""

    # =========================================================================
    # Package paths
    # =========================================================================
    pkg_description = get_package_share_directory('abaja_description')
    pkg_ros_gz_sim  = get_package_share_directory('ros_gz_sim')

    xacro_file             = os.path.join(pkg_description, 'urdf', 'abaja_buggy.urdf.xacro')
    lane_track_world_path  = os.path.join(pkg_description, 'worlds', 'abaja_lane_track.sdf')
    abaja_track_world_path = os.path.join(pkg_description, 'worlds', 'abaja_track.sdf')

    # =========================================================================
    # Launch arguments
    # =========================================================================
    declare_use_sim_time = DeclareLaunchArgument(
        'use_sim_time',
        default_value='true',
        description='Use Gazebo simulation clock (true for simulation, false for real hardware)'
    )
    declare_world = DeclareLaunchArgument(
        'world',
        default_value='abaja_lane_track',
        description=(
            'Gazebo world to load. Options:\n'
            '  abaja_lane_track - Lane-marked test track with cones (DEFAULT)\n'
            '  abaja_track      - Previous simpler lane track\n'
            '  empty            - Default empty world with ground plane\n'
            'Example: ros2 launch abaja_description gazebo.launch.py world:=abaja_lane_track'
        )
    )

    use_sim_time = LaunchConfiguration('use_sim_time')
    world        = LaunchConfiguration('world')

    # =========================================================================
    # Process XACRO → URDF
    # =========================================================================
    robot_description = ParameterValue(
        Command(['xacro ', xacro_file]),
        value_type=str
    )

    # =========================================================================
    # robot_state_publisher
    # =========================================================================
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{
            'robot_description': robot_description,
            'use_sim_time': use_sim_time,
        }]
    )

    # =========================================================================
    # Gazebo Harmonic (gz sim)
    #
    # Default world: abaja_lane_track.sdf (27m lane with white markings, cones)
    # Override with: world:=abaja_track or world:=empty
    #
    # NOTE: We use the full path for custom worlds so Gazebo can find them.
    # =========================================================================
    gazebo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_ros_gz_sim, 'launch', 'gz_sim.launch.py')
        ),
        launch_arguments={
            # Full path to the lane track world (default)
            # To use empty world: change to '-r empty.sdf'
            'gz_args': f'-r {lane_track_world_path}',
        }.items()
    )

    # =========================================================================
    # Spawn the robot into Gazebo
    # Delay 4s to give Gazebo time to fully start and load the world.
    # Spawn at X=-1, Y=0, Z=0.6 (above lane start marker, drops to ground)
    # =========================================================================
    spawn_entity = TimerAction(
        period=4.0,
        actions=[
            Node(
                package='ros_gz_sim',
                executable='create',
                name='spawn_abaja_buggy',
                output='screen',
                arguments=[
                    '-name', 'abaja_buggy',
                    '-topic', 'robot_description',
                    '-x', '-1.0',   # Spawn at lane start (just behind green start line)
                    '-y', '0.0',   # Centred in lane
                    '-z', '0.6',   # Drop from 0.6m so wheels settle on ground
                    '-Y', '0.0',   # Facing +X (forward along the lane)
                ],
            )
        ]
    )

    # =========================================================================
    # ros_gz_bridge - bridges topics between ROS2 and Gazebo Harmonic
    #
    # Topic bridge syntax:
    #   /topic@ros_msg_type[gz_msg_type  = Gazebo → ROS2
    #   /topic@ros_msg_type]gz_msg_type  = ROS2 → Gazebo
    #   /topic@ros_msg_type@gz_msg_type  = bidirectional
    #
    # SENSOR TOPICS:
    #   Camera:   /front_camera/image_raw  → /camera/image_raw
    #   LiDAR:    /lidar/scan              → /lidar/scan
    #   IMU:      /imu/data                → /imu/data
    #   GPS:      /gps/fix                 → /gps/fix
    #
    # RADAR: No bridge — Starkenn Orion Radar has no Gazebo plugin.
    #        Visual + TF frame only. Future: bridge when real hardware used.
    # =========================================================================
    bridge_node = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        name='ros_gz_bridge',
        output='screen',
        arguments=[
            # ── CLOCK ─────────────────────────────────────────────────────
            # Gazebo → ROS2 (enables use_sim_time in all ROS nodes)
            '/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock',

            # ── DRIVE CONTROL ─────────────────────────────────────────────
            # ROS2 → Gazebo (teleop + autonomous planner commands)
            '/cmd_vel@geometry_msgs/msg/Twist]gz.msgs.Twist',

            # ── ODOMETRY ──────────────────────────────────────────────────
            # Gazebo → ROS2 (vehicle speed + pose feedback from DiffDrive plugin)
            '/odom@nav_msgs/msg/Odometry[gz.msgs.Odometry',

            # ── JOINT STATES ──────────────────────────────────────────────
            # Gazebo → ROS2 (wheel + steering joint positions for TF/RViz)
            # Note: world name is 'abaja_lane_track' (matches SDF world name)
            '/world/abaja_lane_track/model/abaja_buggy/joint_state@sensor_msgs/msg/JointState[gz.msgs.Model',

            # ── CAMERA ────────────────────────────────────────────────────
            # Source: vehicle-mounted Gazebo camera (sensors.xacro)
            # Gazebo topic:  /front_camera/image_raw
            # Remapped to:   /camera/image_raw  (standard ROS2 name)
            # NOT from:      laptop webcam (camera_node is NOT launched here)
            '/front_camera/image_raw@sensor_msgs/msg/Image[gz.msgs.Image',
            '/front_camera/camera_info@sensor_msgs/msg/CameraInfo[gz.msgs.CameraInfo',

            # ── LIDAR ─────────────────────────────────────────────────────
            # Source: Gazebo gpu_lidar sensor (sensors.xacro)
            # Publishes 2D horizontal scan (360° at 10Hz)
            '/lidar/scan@sensor_msgs/msg/LaserScan[gz.msgs.LaserScan',

            # ── IMU ───────────────────────────────────────────────────────
            # Source: Gazebo imu sensor (sensors.xacro, near vehicle CoG)
            # 200Hz, with Gaussian noise model
            '/imu/data@sensor_msgs/msg/Imu[gz.msgs.IMU',

            # ── GPS/NavSat ─────────────────────────────────────────────────
            # Source: Gazebo navsat sensor (sensors.xacro, on top of sensor bar)
            # Requires gz-sim-navsat-system in abaja_lane_track.sdf
            # If not installed, comment this line out to avoid bridge error.
            '/gps/fix@sensor_msgs/msg/NavSatFix[gz.msgs.NavSat',
        ],
        remappings=[
            # Joint states: Gazebo model topic → standard /joint_states
            ('/world/abaja_lane_track/model/abaja_buggy/joint_state', '/joint_states'),
            # Camera: Gazebo front_camera → standard /camera ROS2 names
            ('/front_camera/image_raw',   '/camera/image_raw'),
            ('/front_camera/camera_info', '/camera/camera_info'),
        ]
    )

    # =========================================================================
    # Info message
    # =========================================================================
    info_msg = LogInfo(msg=[
        '\n',
        '=' * 70, '\n',
        '  aBAJA Buggy — Gazebo Harmonic Simulation\n',
        '=' * 70, '\n',
        '  World:  abaja_lane_track.sdf (27m lane, white markings, cones)\n',
        '  Robot:  abaja_buggy (spawning in 4s at lane start position)\n',
        '\n',
        '  SENSORS ACTIVE:\n',
        '    /camera/image_raw       — Vehicle-mounted front camera\n',
        '    /lidar/scan             — 360° LiDAR scan (10Hz)\n',
        '    /imu/data               — IMU (200Hz, near CoG)\n',
        '    /gps/fix                — GPS NavSat (10Hz)\n',
        '    radar_link              — TF frame only (no sim plugin)\n',
        '\n',
        '  HARDWARE MODULES (TF frames only — no ROS topics):\n',
        '    kvaser_can_link, esp32_c6_link, sn65hvd230_link\n',
        '\n',
        '  OBJECT DETECTION: DISABLED (no trained model loaded)\n',
        '  LAPTOP WEBCAM:    NOT USED\n',
        '\n',
        '  COMMANDS (new terminal):\n',
        '    Keyboard teleop:  ros2 run abaja_teleop keyboard_teleop\n',
        '    Camera view:      ros2 run rqt_image_view rqt_image_view /camera/image_raw\n',
        '    Topic list:       ros2 topic list | grep -E "camera|lidar|imu|gps"\n',
        '    TF tree:          ros2 run tf2_tools view_frames\n',
        '=' * 70, '\n',
    ])

    return LaunchDescription([
        declare_use_sim_time,
        declare_world,
        info_msg,
        robot_state_publisher_node,
        gazebo_launch,
        spawn_entity,
        bridge_node,
    ])
