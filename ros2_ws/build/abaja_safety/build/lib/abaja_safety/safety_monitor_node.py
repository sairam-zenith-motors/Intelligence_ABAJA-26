import rclpy
from rclpy.node import Node

class SafetyMonitorNode(Node):
    def __init__(self):
        super().__init__('safety_monitor_node')
        self.get_logger().info('Safety Monitor Node has been started.')

def main(args=None):
    rclpy.init(args=args)
    node = SafetyMonitorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
