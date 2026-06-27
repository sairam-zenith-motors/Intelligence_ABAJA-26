import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import VehicleState

class VehicleStateNode(Node):
    def __init__(self):
        super().__init__('vehicle_state_node')
        self.publisher_ = self.create_publisher(VehicleState, '/vehicle_state', 10)
        self.timer = self.create_timer(0.1, self.timer_callback)
        self.get_logger().info('Vehicle State Node started. Publishing dummy /vehicle_state')

    def timer_callback(self):
        msg = VehicleState()
        # Dummy data for stage 2
        msg.speed_mps = 0.0
        msg.steering_angle_deg = 0.0
        msg.brake_position = 0.0
        msg.throttle_position = 0.0
        msg.battery_voltage = 48.0
        msg.autonomous_mode = True
        msg.manual_mode = False
        msg.lateral_enabled = True
        msg.longitudinal_enabled = True
        msg.emergency_stop = False
        msg.status_text = "System Normal"
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
