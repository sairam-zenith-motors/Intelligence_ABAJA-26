import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import DbwCmd
from std_msgs.msg import Float32

class BrakeByWireNode(Node):
    def __init__(self):
        super().__init__('brake_by_wire_node')
        self.sub = self.create_subscription(DbwCmd, '/dbw_cmd', self.dbw_cb, 10)
        self.pub = self.create_publisher(Float32, '/brake_cmd', 10)
        self.get_logger().info('Brake By Wire Node started.')

    def dbw_cb(self, msg):
        out = Float32()
        out.data = msg.brake_percent
        self.pub.publish(out)
        self.get_logger().debug(f'Brake Command: {out.data}%')

def main(args=None):
    rclpy.init(args=args)
    node = BrakeByWireNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
