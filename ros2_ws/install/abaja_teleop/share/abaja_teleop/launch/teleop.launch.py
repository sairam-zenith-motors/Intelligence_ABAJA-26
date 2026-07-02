"""
teleop.launch.py - Launch file for the keyboard teleoperation node

This runs the aBAJA keyboard teleop node, allowing you to drive
the robot using WASD keys.

Usage:
    ros2 launch abaja_teleop teleop.launch.py

Note:
    This must be run in a terminal where you can provide keyboard input.
"""

from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    """Generate the launch description for the teleop node."""
    
    teleop_node = Node(
        package='abaja_teleop',
        executable='keyboard_teleop',
        name='keyboard_teleop',
        output='screen',
        prefix='xterm -e' # Optional: could pop up a new terminal, but usually run directly
    )
    
    # We use xterm -e so it runs in a dedicated pop-up terminal 
    # to avoid the termios ioctl error when launched via ros2 launch
    teleop_node_simple = Node(
        package='abaja_teleop',
        executable='keyboard_teleop',
        name='keyboard_teleop',
        output='screen',
        prefix='xterm -e'
    )
    
    return LaunchDescription([
        teleop_node_simple
    ])
