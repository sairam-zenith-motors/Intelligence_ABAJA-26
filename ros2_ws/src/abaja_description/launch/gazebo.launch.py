"""
gazebo.launch.py - Launch the aBAJA buggy in Gazebo Harmonic (ROS2 Jazzy)

This launch file starts:
1. robot_state_publisher  - Publishes the robot URDF and TF transforms
2. Gazebo Harmonic (gz sim) - The 3D physics simulation
3. ros_gz_sim create       - Spawns the robot model into Gazebo
4. ros_gz_bridge           - Bridges /cmd_vel and /clock between ROS2 and Gazebo

PREREQUISITES - Install these packages first:
    sudo apt install ros-jazzy-ros-gz-sim ros-jazzy-ros-gz-bridge ros-jazzy-ros-gz-image

USAGE:
    # Terminal 1: Launch Gazebo with the robot
    ros2 launch abaja_description gazebo.launch.py

    # Terminal 2: Control with keyboard
    ros2 run abaja_teleop keyboard_teleop

    # Terminal 3: Check topics
    ros2 topic list
    ros2 topic echo /cmd_vel
"""

import os
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    ExecuteProcess,
    LogInfo,
    RegisterEventHandler,
    TimerAction,
)
from launch.event_handlers import OnProcessStart
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    """Generate the launch description for Gazebo Harmonic simulation."""

    # =========================================================================
    # Get package paths
    # =========================================================================
    pkg_description = get_package_share_directory('abaja_description')
    pkg_ros_gz_sim = get_package_share_directory('ros_gz_sim')

    # Path to the main XACRO file
    xacro_file = os.path.join(pkg_description, 'urdf', 'abaja_buggy.urdf.xacro')

    # =========================================================================
    # Launch argument: use_sim_time
    # =========================================================================
    declare_use_sim_time = DeclareLaunchArgument(
        'use_sim_time',
        default_value='true',
        description='Use simulation (Gazebo) clock if true'
    )
    use_sim_time = LaunchConfiguration('use_sim_time')

    # =========================================================================
    # Process XACRO → URDF
    # =========================================================================
    robot_description = ParameterValue(
        Command(['xacro ', xacro_file]),
        value_type=str
    )

    # =========================================================================
    # Node: robot_state_publisher
    # Publishes /robot_description and broadcasts TF transforms.
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
    # Launch Gazebo Harmonic (gz sim) via ros_gz_sim
    #
    # '-r' flag starts the simulation running immediately.
    # 'empty.sdf' loads an empty world with a ground plane.
    # =========================================================================
    gazebo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_ros_gz_sim, 'launch', 'gz_sim.launch.py')
        ),
        launch_arguments={
            'gz_args': '-r empty.sdf',
        }.items()
    )

    # =========================================================================
    # Spawn the robot in Gazebo
    #
    # Reads the URDF from the /robot_description topic and creates
    # the robot entity in the Gazebo world.
    # Delay by 3 seconds to give Gazebo time to start.
    # =========================================================================
    spawn_entity = TimerAction(
        period=3.0,
        actions=[
            Node(
                package='ros_gz_sim',
                executable='create',
                name='spawn_abaja_buggy',
                output='screen',
                arguments=[
                    '-name', 'abaja_buggy',
                    '-topic', 'robot_description',
                    '-x', '0.0',
                    '-y', '0.0',
                    '-z', '0.5',   # Drop from 0.5m so wheels settle on ground
                    '-Y', '0.0',
                ],
            )
        ]
    )

    # =========================================================================
    # ros_gz_bridge - Bridge topics between ROS2 and Gazebo Harmonic
    #
    # Syntax: /topic@ros_msg_type[@direction]gz_msg_type
    #   [ = Gazebo → ROS2 (subscribe from Gazebo, publish to ROS2)
    #   ] = ROS2 → Gazebo (subscribe from ROS2, publish to Gazebo)
    #   @ = bidirectional
    # =========================================================================
    bridge_node = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        name='ros_gz_bridge',
        output='screen',
        arguments=[
            # Bridge /clock from Gazebo to ROS2 (for use_sim_time)
            '/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock',
            # Bridge /cmd_vel from ROS2 to Gazebo (teleop commands)
            '/cmd_vel@geometry_msgs/msg/Twist]gz.msgs.Twist',
            # Bridge /odom from Gazebo to ROS2 (odometry feedback)
            '/odom@nav_msgs/msg/Odometry[gz.msgs.Odometry',
            # Bridge joint states from Gazebo to ROS2
            '/world/empty/model/abaja_buggy/joint_state@sensor_msgs/msg/JointState[gz.msgs.Model',
        ],
        remappings=[
            ('/world/empty/model/abaja_buggy/joint_state', '/joint_states'),
        ]
    )

    # =========================================================================
    # Info message
    # =========================================================================
    info_msg = LogInfo(msg=[
        '\n',
        '=' * 60, '\n',
        '  aBAJA Buggy - Gazebo Harmonic Simulation\n',
        '=' * 60, '\n',
        '  Robot is being spawned into Gazebo...\n',
        '\n',
        '  To control the buggy, open a NEW terminal and run:\n',
        '    cd ~/ros2_ws && source install/setup.bash\n',
        '    ros2 run abaja_teleop keyboard_teleop\n',
        '\n',
        '  Useful commands:\n',
        '    ros2 topic list\n',
        '    ros2 topic echo /cmd_vel\n',
        '    ros2 topic echo /odom\n',
        '=' * 60, '\n',
    ])

    # =========================================================================
    # Return launch description
    # =========================================================================
    return LaunchDescription([
        declare_use_sim_time,
        info_msg,
        robot_state_publisher_node,
        gazebo_launch,
        spawn_entity,
        bridge_node,
    ])
