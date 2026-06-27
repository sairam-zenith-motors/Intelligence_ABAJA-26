"""
display.launch.py - Launch file for visualizing the aBAJA buggy in RViz

This launch file starts:
1. robot_state_publisher - Publishes the robot URDF to /robot_description
                           and broadcasts TF transforms
2. joint_state_publisher_gui - Provides a GUI with sliders to manually
                                move joints (steering, wheels)
3. rviz2 - Opens RViz with a pre-configured display setup

Usage:
    ros2 launch abaja_description display.launch.py

After launching, you should see the buggy model in RViz with:
- Robot model visible
- TF frames displayed
- Grid on the ground plane
- You can move the steering/wheels using the GUI sliders
"""

import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.conditions import IfCondition
from launch.substitutions import Command, LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    """Generate the launch description for RViz visualization."""
    
    # =========================================================================
    # Get package paths
    # =========================================================================
    # Find where abaja_description package is installed
    pkg_description = get_package_share_directory('abaja_description')
    
    # Path to the main XACRO file
    xacro_file = os.path.join(pkg_description, 'urdf', 'abaja_buggy.urdf.xacro')
    
    # Path to the RViz configuration file
    rviz_config_file = os.path.join(pkg_description, 'rviz', 'abaja_display.rviz')
    
    # =========================================================================
    # Launch arguments
    # =========================================================================
    declare_use_joint_gui = DeclareLaunchArgument(
        'use_joint_gui',
        default_value='true',
        description='Launch joint_state_publisher_gui for manual joint control'
    )
    use_joint_gui = LaunchConfiguration('use_joint_gui')
    
    # =========================================================================
    # Process XACRO file into URDF string
    # =========================================================================
    # The Command substitution runs 'xacro' at launch time to convert
    # the .xacro file into a complete URDF XML string
    robot_description = ParameterValue(
        Command(['xacro ', xacro_file]),
        value_type=str
    )
    
    # =========================================================================
    # Node: robot_state_publisher
    # =========================================================================
    # This node:
    # - Reads the URDF from the 'robot_description' parameter
    # - Publishes the robot model on /robot_description topic
    # - Broadcasts TF transforms for all fixed joints
    # - Listens to /joint_states for movable joint positions
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{
            'robot_description': robot_description,
            'use_sim_time': False
        }]
    )
    
    # =========================================================================
    # Node: joint_state_publisher_gui
    # =========================================================================
    # This node:
    # - Provides a GUI window with sliders for each movable joint
    # - Publishes joint angles on /joint_states topic
    # - Allows you to manually test wheel rotation and steering
    joint_state_publisher_gui_node = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui',
        output='screen',
        condition=IfCondition(use_joint_gui)
    )
    
    # =========================================================================
    # Node: rviz2
    # =========================================================================
    # RViz visualization tool with our custom config file
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', rviz_config_file]
    )
    
    # =========================================================================
    # Return the complete launch description
    # =========================================================================
    return LaunchDescription([
        declare_use_joint_gui,
        robot_state_publisher_node,
        joint_state_publisher_gui_node,
        rviz_node,
    ])
