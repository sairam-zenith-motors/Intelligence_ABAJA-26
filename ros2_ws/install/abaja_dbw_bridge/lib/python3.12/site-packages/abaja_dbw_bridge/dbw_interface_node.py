import rclpy
from rclpy.node import Node

class DBWInterfaceNode(Node):
    def __init__(self):
        super().__init__('dbw_interface_node')
        self.get_logger().info('DBW Interface Node has been started.')

def main(args=None):
    rclpy.init(args=args)
    node = DBWInterfaceNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
