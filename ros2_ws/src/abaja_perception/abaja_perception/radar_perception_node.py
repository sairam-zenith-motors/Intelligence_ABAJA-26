import rclpy
from rclpy.node import Node

class RadarPerceptionNode(Node):
    def __init__(self):
        super().__init__('radar_perception_node')
        self.get_logger().info('Radar Perception Node has been started.')
        # In the future, this node will subscribe to /radar/scan and publish /radar/objects

def main(args=None):
    rclpy.init(args=args)
    node = RadarPerceptionNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
