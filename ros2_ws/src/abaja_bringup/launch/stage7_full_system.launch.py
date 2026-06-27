import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, LogInfo
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node

def generate_launch_description():
    pkg_bringup = get_package_share_directory('abaja_bringup')
    
    stage2_3_4 = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_bringup, 'launch', 'stage2_3_4_bringup.launch.py')
        )
    )
    
    stage5 = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_bringup, 'launch', 'stage5_lane.launch.py')
        )
    )
    
    stage6 = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_bringup, 'launch', 'stage6_aeb.launch.py')
        )
    )

    control_mux = Node(
        package='abaja_control',
        executable='control_mux_node',
        name='control_mux_node',
        output='screen'
    )
    
    data_logger = Node(
        package='abaja_logging',
        executable='data_logger_node',
        name='data_logger_node',
        output='screen'
    )

    safety_supervisor = Node(
        package='abaja_logging',
        executable='safety_supervisor_node',
        name='safety_supervisor_node',
        output='screen'
    )

    return LaunchDescription([
        LogInfo(msg='Starting Full System Integration (Stages 2 through 7)...'),
        stage2_3_4,
        stage5,
        stage6,
        control_mux,
        data_logger,
        safety_supervisor
    ])
