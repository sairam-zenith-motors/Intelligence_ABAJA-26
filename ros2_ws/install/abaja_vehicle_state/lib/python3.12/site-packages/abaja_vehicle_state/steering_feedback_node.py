import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import SteeringFeedback

class SteeringFeedbackNode(Node):
    def __init__(self):
        super().__init__('steering_feedback_node')
        self.publisher_ = self.create_publisher(SteeringFeedback, '/steering_feedback', 10)
        self.timer = self.create_timer(0.1, self.timer_callback)
        self.get_logger().info('Steering Feedback Node started. Publishing dummy /steering_feedback')

    def timer_callback(self):
        msg = SteeringFeedback()
        msg.target_angle_deg = 0.0
        msg.actual_angle_deg = 0.0
        msg.error_deg = 0.0
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = SteeringFeedbackNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
