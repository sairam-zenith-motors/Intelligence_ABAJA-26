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
            package='abaja_dbw',
            executable='cmd_vel_to_dbw_node',
            name='cmd_vel_to_dbw_node',
            parameters=sim_params,
            output='screen'
        ),
        Node(
            package='abaja_dbw',
            executable='dbw_manager_node',
            name='dbw_manager_node',
            parameters=sim_params,
            output='screen'
        ),
        Node(
            package='abaja_dbw',
            executable='throttle_by_wire_node',
            name='throttle_by_wire_node',
            parameters=sim_params
        ),
        Node(
            package='abaja_dbw',
            executable='brake_by_wire_node',
            name='brake_by_wire_node',
            parameters=sim_params
        ),
        Node(
            package='abaja_dbw',
            executable='steer_by_wire_node',
            name='steer_by_wire_node',
            parameters=sim_params
        ),
        # Simulation-only: converts /dbw_cmd back to /cmd_vel for Gazebo DiffDrive plugin.
        # This closes the autonomous control loop in simulation.
        # Remove or disable this node when running on real hardware.
        Node(
            package='abaja_dbw',
            executable='dbw_to_cmd_vel_node',
            name='dbw_to_cmd_vel_node',
            parameters=sim_params,
            output='screen'
        ),
    ])
