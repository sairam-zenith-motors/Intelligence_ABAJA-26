import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import ModeStatus

class ModeStatusNode(Node):
    def __init__(self):
        super().__init__('mode_status_node')
        self.publisher_ = self.create_publisher(ModeStatus, '/mode_status', 10)
        self.timer = self.create_timer(0.1, self.timer_callback)
        self.get_logger().info('Mode Status Node started. Publishing dummy /mode_status')

    def timer_callback(self):
        msg = ModeStatus()
        msg.autonomous_switch = True
        msg.manual_switch = False
        msg.lateral_switch = True
        msg.longitudinal_switch = True
        msg.kill_switch = False
        msg.dbw_ready = True
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = ModeStatusNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
