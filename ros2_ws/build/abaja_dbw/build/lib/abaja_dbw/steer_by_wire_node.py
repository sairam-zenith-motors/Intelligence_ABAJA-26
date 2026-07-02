import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import DbwCmd
from std_msgs.msg import Float32

class SteerByWireNode(Node):
    def __init__(self):
        super().__init__('steer_by_wire_node')
        self.sub = self.create_subscription(DbwCmd, '/dbw_cmd', self.dbw_cb, 10)
        self.pub = self.create_publisher(Float32, '/steering_cmd', 10)
        self.get_logger().info('Steer By Wire Node started.')

    def dbw_cb(self, msg):
        out = Float32()
        out.data = msg.steering_angle_deg
        self.pub.publish(out)
        self.get_logger().debug(f'Steering Command: {out.data} deg')

def main(args=None):
    rclpy.init(args=args)
    node = SteerByWireNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
