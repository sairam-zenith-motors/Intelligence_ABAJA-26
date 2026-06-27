import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import os

class DetectionRecorderNode(Node):
    def __init__(self):
        super().__init__('detection_recorder_node')
        self.sub = self.create_subscription(Image, '/annotated_image', self.image_cb, 10)
        self.bridge = CvBridge()
        
        self.writer = None
        self.get_logger().info('Detection Recorder Node started. Saving to output_video.mp4')

    def image_cb(self, msg):
        frame = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        
        if self.writer is None:
            height, width, _ = frame.shape
            fourcc = cv2.VideoWriter_fourcc(*'mp4v')
            filename = os.path.join(os.getcwd(), 'output_video.mp4')
            self.writer = cv2.VideoWriter(filename, fourcc, 30.0, (width, height))
            
        self.writer.write(frame)

    def destroy_node(self):
        if self.writer is not None:
            self.writer.release()
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    node = DetectionRecorderNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
