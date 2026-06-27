"""
autonomy_bringup.launch.py - Stage 1 ROS2 Foundation Bringup

This launch file starts all the dummy nodes for the autonomous stack architecture.
"""

from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    # Create a list of nodes to launch
    nodes = [
        Node(
            package='abaja_perception',
            executable='radar_perception_node',
            name='radar_perception'
        ),
        Node(
            package='abaja_lane_detection',
            executable='lane_detector_node',
            name='lane_detector'
        ),
        Node(
            package='abaja_vehicle_state',
            executable='state_estimator_node',
            name='state_estimator'
        ),
        Node(
            package='abaja_planning',
            executable='path_planner_node',
            name='path_planner'
        ),
        Node(
            package='abaja_control',
            executable='vehicle_controller_node',
            name='vehicle_controller'
        ),
        Node(
            package='abaja_dbw_bridge',
            executable='dbw_interface_node',
            name='dbw_interface'
        ),
        Node(
            package='abaja_safety',
            executable='safety_monitor_node',
            name='safety_monitor'
        ),
        Node(
            package='abaja_logging',
            executable='data_logger_node',
            name='data_logger'
        )
    ]

    return LaunchDescription(nodes)
