import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    LogInfo,
)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration


def generate_launch_description():
    bringup_dir = get_package_share_directory('abaja_bringup')

    declare_use_sim_time = DeclareLaunchArgument(
        'use_sim_time', default_value='true',
        description='Use Gazebo simulation clock'
    )
    use_sim_time = LaunchConfiguration('use_sim_time')
    sim_launch_args = {'use_sim_time': use_sim_time}

    stage2_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(bringup_dir, 'launch', 'stage2_vehicle_state.launch.py')
        ),
        launch_arguments=sim_launch_args.items()
    )

    stage3_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(bringup_dir, 'launch', 'stage3_dbw.launch.py')
        ),
        launch_arguments=sim_launch_args.items()
    )

    stage4_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(bringup_dir, 'launch', 'stage4_perception.launch.py')
        ),
        launch_arguments=sim_launch_args.items()
    )

    return LaunchDescription([
        declare_use_sim_time,
        LogInfo(msg='[stage2_3_4] Bringing up Stage 2: Vehicle State Monitoring...'),
        stage2_launch,
        LogInfo(msg='[stage2_3_4] Bringing up Stage 3: Drive-By-Wire...'),
        stage3_launch,
        LogInfo(msg='[stage2_3_4] Bringing up Stage 4: Perception...'),
        stage4_launch,
    ])
