import os
from launch import LaunchDescription
from launch.actions import (
    IncludeLaunchDescription,
    LogInfo,
    DeclareLaunchArgument,
)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node


def generate_launch_description():
    pkg_bringup = get_package_share_directory('abaja_bringup')

    # Argument: set use_sim_time:=true when running in Gazebo simulation.
    # Pass use_sim_time:=false for real hardware deployment.
    declare_use_sim_time = DeclareLaunchArgument(
        'use_sim_time',
        default_value='true',
        description='Use Gazebo simulation clock. Set false for real hardware.'
    )
    use_sim_time = LaunchConfiguration('use_sim_time')
    sim_params = [{'use_sim_time': use_sim_time}]

    # Propagate use_sim_time to every included sub-launch
    sim_launch_args = {'use_sim_time': use_sim_time}

    # -------------------------------------------------------------------------
    # Stage 2: Vehicle State (vehicle_state_node, mode_status_node, etc.)
    # Stage 3: DBW (cmd_vel_to_dbw, dbw_manager, dbw_to_cmd_vel, by-wire nodes)
    # Stage 4: Perception (camera_node, object_detection_node)
    # -------------------------------------------------------------------------
    stage2_3_4 = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_bringup, 'launch', 'stage2_3_4_bringup.launch.py')
        ),
        launch_arguments=sim_launch_args.items()
    )

    # -------------------------------------------------------------------------
    # Stage 5: Lane Detection (lane_detection, lane_tracker, lka_controller)
    # -------------------------------------------------------------------------
    stage5 = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_bringup, 'launch', 'stage5_lane.launch.py')
        ),
        launch_arguments=sim_launch_args.items()
    )

    # -------------------------------------------------------------------------
    # Stage 6: AEB (object_distance_estimator, ttc_calculator, aeb_controller)
    # -------------------------------------------------------------------------
    stage6 = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_bringup, 'launch', 'stage6_aeb.launch.py')
        ),
        launch_arguments=sim_launch_args.items()
    )

    # -------------------------------------------------------------------------
    # Control Mux: receives /teleop_control_cmd, /lka_control_cmd,
    # /aeb_control_cmd; outputs /control_cmd based on safety priority.
    # -------------------------------------------------------------------------
    control_mux = Node(
        package='abaja_control',
        executable='control_mux_node',
        name='control_mux_node',
        parameters=sim_params,
        output='screen'
    )

    # -------------------------------------------------------------------------
    # Logging & Safety
    # -------------------------------------------------------------------------
    data_logger = Node(
        package='abaja_logging',
        executable='data_logger_node',
        name='data_logger_node',
        parameters=sim_params,
        output='screen'
    )

    safety_supervisor = Node(
        package='abaja_logging',
        executable='safety_supervisor_node',
        name='safety_supervisor_node',
        parameters=sim_params,
        output='screen'
    )

    return LaunchDescription([
        declare_use_sim_time,
        LogInfo(msg='[stage7] Starting Full Autonomous Pipeline (Stages 2-7)...'),
        stage2_3_4,
        stage5,
        stage6,
        control_mux,
        data_logger,
        safety_supervisor,
    ])
