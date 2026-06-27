from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='abaja_dbw',
            executable='cmd_vel_to_dbw_node',
            name='cmd_vel_to_dbw_node'
        ),
        Node(
            package='abaja_dbw',
            executable='dbw_manager_node',
            name='dbw_manager_node'
        ),
        Node(
            package='abaja_dbw',
            executable='throttle_by_wire_node',
            name='throttle_by_wire_node'
        ),
        Node(
            package='abaja_dbw',
            executable='brake_by_wire_node',
            name='brake_by_wire_node'
        ),
        Node(
            package='abaja_dbw',
            executable='steer_by_wire_node',
            name='steer_by_wire_node'
        )
    ])
