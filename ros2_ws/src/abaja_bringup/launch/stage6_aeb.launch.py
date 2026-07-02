import os
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
            package='abaja_aeb',
            executable='object_distance_estimator_node',
            name='object_distance_estimator_node',
            parameters=sim_params,
            output='screen'
        ),
        Node(
            package='abaja_aeb',
            executable='ttc_calculator_node',
            name='ttc_calculator_node',
            parameters=sim_params,
            output='screen'
        ),
        Node(
            package='abaja_aeb',
            executable='aeb_controller_node',
            name='aeb_controller_node',
            parameters=sim_params,
            output='screen'
        ),
    ])
