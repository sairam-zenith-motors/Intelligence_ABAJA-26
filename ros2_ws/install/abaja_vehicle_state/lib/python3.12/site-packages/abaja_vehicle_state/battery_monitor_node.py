import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import BatteryStatus

class BatteryMonitorNode(Node):
    def __init__(self):
        super().__init__('battery_monitor_node')
        self.publisher_ = self.create_publisher(BatteryStatus, '/battery_status', 1) # Publish at 1Hz
        self.timer = self.create_timer(1.0, self.timer_callback)
        self.get_logger().info('Battery Monitor Node started. Publishing dummy /battery_status')

    def timer_callback(self):
        msg = BatteryStatus()
        msg.voltage = 48.2
        msg.current = 2.5
        msg.percentage = 98.0
        msg.low_voltage_warning = False
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = BatteryMonitorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
