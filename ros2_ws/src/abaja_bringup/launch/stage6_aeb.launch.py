import os
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='abaja_aeb',
            executable='object_distance_estimator_node',
            name='object_distance_estimator_node',
            output='screen'
        ),
        Node(
            package='abaja_aeb',
            executable='ttc_calculator_node',
            name='ttc_calculator_node',
            output='screen'
        ),
        Node(
            package='abaja_aeb',
            executable='aeb_controller_node',
            name='aeb_controller_node',
            output='screen'
        )
    ])
