import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import VehicleState

class StateEstimatorNode(Node):
    def __init__(self):
        super().__init__('state_estimator_node')
        self.get_logger().info('State Estimator Node has been started.')
        self.publisher_ = self.create_publisher(VehicleState, '/vehicle_state', 10)
        self.timer = self.create_timer(0.1, self.timer_callback)

    def timer_callback(self):
        msg = VehicleState()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.current_speed = 0.0
        msg.steering_angle = 0.0
        msg.dbw_status = 'DUMMY_OK'
        msg.safety_state = 'DUMMY_SAFE'
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = StateEstimatorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
