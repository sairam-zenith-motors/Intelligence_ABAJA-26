from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='abaja_vehicle_state',
            executable='vehicle_state_node',
            name='vehicle_state_node'
        ),
        Node(
            package='abaja_vehicle_state',
            executable='wheel_speed_node',
            name='wheel_speed_node'
        ),
        Node(
            package='abaja_vehicle_state',
            executable='steering_feedback_node',
            name='steering_feedback_node'
        ),
        Node(
            package='abaja_vehicle_state',
            executable='battery_monitor_node',
            name='battery_monitor_node'
        ),
        Node(
            package='abaja_vehicle_state',
            executable='mode_status_node',
            name='mode_status_node'
        ),
        # Since dashboard uses os.system('clear'), it needs a terminal.
        # Launching it via standard launch might cause terminal issues.
        # For full output, we recommend running it in a separate terminal.
        # But we include it here as requested.
        Node(
            package='abaja_vehicle_state',
            executable='vehicle_dashboard_node',
            name='vehicle_dashboard_node',
            output='screen'
        )
    ])
