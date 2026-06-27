from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='abaja_perception',
            executable='camera_node',
            name='camera_node',
            parameters=[{'camera_index': 0}]
        ),
        Node(
            package='abaja_perception',
            executable='object_detection_node',
            name='object_detection_node',
            parameters=[{'confidence_threshold': 0.5}]
        ),
        Node(
            package='abaja_perception',
            executable='detection_display_node',
            name='detection_display_node'
        ),
        Node(
            package='abaja_perception',
            executable='detection_recorder_node',
            name='detection_recorder_node'
        )
    ])
