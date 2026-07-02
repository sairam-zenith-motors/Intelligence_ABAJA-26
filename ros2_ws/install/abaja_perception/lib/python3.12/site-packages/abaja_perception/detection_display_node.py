import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class DetectionDisplayNode(Node):
    def __init__(self):
        super().__init__('detection_display_node')
        self.sub = self.create_subscription(Image, '/annotated_image', self.image_cb, 10)
        self.bridge = CvBridge()
        self.get_logger().info('Detection Display Node started.')

    def image_cb(self, msg):
        frame = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        cv2.imshow("aBAJA Perception", frame)
        cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)
    node = DetectionDisplayNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        cv2.destroyAllWindows()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
