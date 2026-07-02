from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    declare_use_sim_time = DeclareLaunchArgument(
        'use_sim_time', default_value='true',
        description='Use Gazebo simulation clock'
    )
    use_sim_time = LaunchConfiguration('use_sim_time')
    sim_params = [{'use_sim_time': use_sim_time}]

    return LaunchDescription([
        declare_use_sim_time,
        Node(
            package='abaja_vehicle_state',
            executable='vehicle_state_node',
            name='vehicle_state_node',
            parameters=sim_params,
            output='screen'
        ),
        Node(
            package='abaja_vehicle_state',
            executable='wheel_speed_node',
            name='wheel_speed_node',
            parameters=sim_params
        ),
        Node(
            package='abaja_vehicle_state',
            executable='steering_feedback_node',
            name='steering_feedback_node',
            parameters=sim_params
        ),
        Node(
            package='abaja_vehicle_state',
            executable='battery_monitor_node',
            name='battery_monitor_node',
            parameters=sim_params
        ),
        Node(
            package='abaja_vehicle_state',
            executable='mode_status_node',
            name='mode_status_node',
            parameters=sim_params,
            output='screen'
        ),
        # Dashboard uses os.system('clear') — best run in a separate terminal.
        Node(
            package='abaja_vehicle_state',
            executable='vehicle_dashboard_node',
            name='vehicle_dashboard_node',
            parameters=sim_params,
            output='screen'
        ),
    ])
