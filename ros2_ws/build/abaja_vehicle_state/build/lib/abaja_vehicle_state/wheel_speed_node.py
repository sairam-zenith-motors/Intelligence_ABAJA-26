import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import WheelSpeed

class WheelSpeedNode(Node):
    def __init__(self):
        super().__init__('wheel_speed_node')
        self.publisher_ = self.create_publisher(WheelSpeed, '/wheel_speed', 10)
        self.timer = self.create_timer(0.1, self.timer_callback)
        self.get_logger().info('Wheel Speed Node started. Publishing dummy /wheel_speed')

    def timer_callback(self):
        msg = WheelSpeed()
        msg.front_left = 0.0
        msg.front_right = 0.0
        msg.rear_left = 0.0
        msg.rear_right = 0.0
        msg.average_speed = 0.0
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = WheelSpeedNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
