import os
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='abaja_lane_detection',
            executable='lane_detection_node',
            name='lane_detection_node',
            output='screen',
            parameters=[{'debug_view': True}]
        ),
        Node(
            package='abaja_lane_detection',
            executable='lane_tracker_node',
            name='lane_tracker_node',
            output='screen'
        ),
        Node(
            package='abaja_lane_detection',
            executable='lka_controller_node',
            name='lka_controller_node',
            output='screen'
        )
    ])
