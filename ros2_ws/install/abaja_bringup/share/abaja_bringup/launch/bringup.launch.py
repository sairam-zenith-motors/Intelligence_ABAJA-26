"""
bringup.launch.py - Main bringup launch file for the aBAJA buggy

This launch file brings up the complete robot system:
1. Includes the display.launch.py from abaja_description
   (which starts robot_state_publisher, joint_state_publisher_gui, and RViz)
2. Optionally launches the keyboard teleop node

Usage:
    # Full bringup with visualization:
    ros2 launch abaja_bringup bringup.launch.py

    # Bringup with teleop enabled:
    ros2 launch abaja_bringup bringup.launch.py use_teleop:=true

    # Without joint_state_publisher_gui (for when real hardware provides joint states):
    ros2 launch abaja_bringup bringup.launch.py use_joint_gui:=true

Note:
    The keyboard teleop node requires terminal access for keyboard input.
    When use_teleop:=true, run the teleop separately in another terminal:
        ros2 run abaja_teleop keyboard_teleop
"""

import os
from launch import LaunchDescription
from launch.actions import (
    IncludeLaunchDescription,
    DeclareLaunchArgument,
    LogInfo,
    GroupAction,
)
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PythonExpression
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    """Generate the bringup launch description."""
    
    # =========================================================================
    # Get package paths
    # =========================================================================
    pkg_description = get_package_share_directory('abaja_description')
    
    # =========================================================================
    # Declare launch arguments
    # =========================================================================
    
    # Whether to use the joint state publisher GUI
    declare_use_joint_gui = DeclareLaunchArgument(
        'use_joint_gui',
        default_value='true',
        description='Launch joint_state_publisher_gui for manual joint control'
    )
    
    # Whether to print a reminder about teleop
    declare_use_teleop = DeclareLaunchArgument(
        'use_teleop',
        default_value='false',
        description='Set to true to get teleop launch instructions'
    )
    
    # =========================================================================
    # Include the display launch file from abaja_description
    # =========================================================================
    # This launches:
    # - robot_state_publisher
    # - joint_state_publisher_gui
    # - rviz2
    display_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_description, 'launch', 'display.launch.py')
        )
    )
    
    # =========================================================================
    # Teleop reminder message
    # =========================================================================
    teleop_reminder = LogInfo(
        msg=[
            '\n',
            '=' * 60, '\n',
            '  aBAJA Buggy Bringup Complete!\n',
            '=' * 60, '\n',
            '\n',
            '  To control the buggy with keyboard, open a NEW terminal:\n',
            '\n',
            '    cd ~/ros2_ws\n',
            '    source install/setup.bash\n',
            '    ros2 run abaja_teleop keyboard_teleop\n',
            '\n',
            '  To check topics:\n',
            '    ros2 topic list\n',
            '    ros2 topic echo /cmd_vel\n',
            '\n',
            '=' * 60, '\n',
        ],
        condition=IfCondition(LaunchConfiguration('use_teleop'))
    )
    
    # =========================================================================
    # Return launch description
    # =========================================================================
    return LaunchDescription([
        declare_use_joint_gui,
        declare_use_teleop,
        display_launch,
        teleop_reminder,
    ])
