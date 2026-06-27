import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction, LogInfo
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    bringup_dir = get_package_share_directory('abaja_bringup')
    
    stage2_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(bringup_dir, 'launch', 'stage2_vehicle_state.launch.py')
        )
    )
    
    stage3_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(bringup_dir, 'launch', 'stage3_dbw.launch.py')
        )
    )
    
    stage4_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(bringup_dir, 'launch', 'stage4_perception.launch.py')
        )
    )

    return LaunchDescription([
        LogInfo(msg="Bringing up Stage 2: Vehicle State Monitoring..."),
        stage2_launch,
        
        LogInfo(msg="Bringing up Stage 3: Drive-By-Wire..."),
        stage3_launch,
        
        LogInfo(msg="Bringing up Stage 4: Perception..."),
        stage4_launch,
    ])
