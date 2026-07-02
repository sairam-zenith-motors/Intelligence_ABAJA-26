import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import VehicleState
from nav_msgs.msg import Odometry


class VehicleStateNode(Node):
    def __init__(self):
        super().__init__('vehicle_state_node')

        # Publisher for vehicle state
        self.publisher_ = self.create_publisher(VehicleState, '/vehicle_state', 10)

        # Subscribe to /odom to get actual speed from Gazebo DiffDrive plugin
        self.odom_sub = self.create_subscription(
            Odometry,
            '/odom',
            self.odom_callback,
            10
        )

        # State: actual speed extracted from odometry
        self.speed_mps = 0.0
        self.odom_received = False

        # Publish at 10 Hz
        self.timer = self.create_timer(0.1, self.timer_callback)
        self.get_logger().info(
            'Vehicle State Node started. Subscribing to /odom, publishing /vehicle_state'
        )

    def odom_callback(self, msg: Odometry):
        """Extract forward speed from Gazebo odometry."""
        self.speed_mps = msg.twist.twist.linear.x
        self.odom_received = True

    def timer_callback(self):
        msg = VehicleState()

        # Real speed from /odom; 0.0 if odometry not yet available
        msg.speed_mps = self.speed_mps
        msg.steering_angle_deg = 0.0
        msg.brake_position = 0.0
        msg.throttle_position = 0.0
        msg.battery_voltage = 48.0
        msg.autonomous_mode = True
        msg.manual_mode = False
        msg.lateral_enabled = True
        msg.longitudinal_enabled = True
        msg.emergency_stop = False
        msg.status_text = 'System Normal' if self.odom_received else 'Waiting for /odom'

        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = VehicleStateNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
