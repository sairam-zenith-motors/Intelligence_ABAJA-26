import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, LogInfo
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    pkg_bringup = get_package_share_directory('abaja_bringup')
    pkg_desc = get_package_share_directory('abaja_description')
    
    gazebo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_desc, 'launch', 'gazebo.launch.py')
        )
    )
    
    rviz_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_desc, 'launch', 'display.launch.py')
        ),
        launch_arguments={'use_joint_gui': 'false'}.items()
    )
    
    full_system = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_bringup, 'launch', 'stage7_full_system.launch.py')
        )
    )
    
    return LaunchDescription([
        LogInfo(msg='Starting Full System with Simulation (Gazebo + RViz)...'),
        gazebo_launch,
        rviz_launch,
        full_system
    ])
