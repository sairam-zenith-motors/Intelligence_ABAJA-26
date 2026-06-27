"""
sim_bringup.launch.py - Full Gazebo Simulation Bringup for aBAJA Buggy

This launch file brings up the full simulation environment:
1. Gazebo Harmonic with the robot spawned
2. robot_state_publisher for TF
3. Keyboard teleoperation node (captures current terminal)

Usage:
    ros2 launch abaja_bringup sim_bringup.launch.py

Note:
    Since this launches the keyboard teleop node, this terminal will be
    used for driving the buggy. Use WASD keys here.
"""

import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, LogInfo
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    """Generate the full simulation bringup launch description."""
    
    # Get package paths
    pkg_description = get_package_share_directory('abaja_description')
    pkg_teleop = get_package_share_directory('abaja_teleop')
    
    # Include gazebo.launch.py
    gazebo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_description, 'launch', 'gazebo.launch.py')
        )
    )
    
    # Include display.launch.py (RViz)
    # We set use_joint_gui:=false because Gazebo JointStatePublisher will publish joint states!
    rviz_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_description, 'launch', 'display.launch.py')
        ),
        launch_arguments={'use_joint_gui': 'false'}.items()
    )
    
    # Include teleop.launch.py
    teleop_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_teleop, 'launch', 'teleop.launch.py')
        )
    )
    
    # Info message
    info_msg = LogInfo(msg=[
        '\n',
        '=' * 60, '\n',
        '  FULL SIMULATION BRINGUP STARTED\n',
        '=' * 60, '\n',
        '  1. Gazebo Harmonic is starting...\n',
        '  2. RViz is opening...\n',
        '  3. Keyboard Teleop is running in THIS terminal!\n',
        '\n',
        '  Controls:\n',
        '    W / S : Accelerate / Brake (Reverse)\n',
        '    A / D : Steer Left / Right\n',
        '    Space : Emergency Stop\n',
        '=' * 60, '\n',
    ])
    
    return LaunchDescription([
        info_msg,
        gazebo_launch,
        rviz_launch,
        teleop_launch,
    ])
