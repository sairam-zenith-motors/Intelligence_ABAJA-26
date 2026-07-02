import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import ControlCmd

class VehicleControllerNode(Node):
    def __init__(self):
        super().__init__('vehicle_controller_node')
        self.get_logger().info('Vehicle Controller Node has been started.')
        self.publisher_ = self.create_publisher(ControlCmd, '/control_cmd', 10)
        self.timer = self.create_timer(0.1, self.timer_callback)

    def timer_callback(self):
        msg = ControlCmd()
        msg.steering_angle_cmd = 0.0
        msg.throttle_cmd = 0.0
        msg.brake_cmd = 0.0
        msg.target_speed = 0.0
        msg.emergency_stop = False
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = VehicleControllerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
