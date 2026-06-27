import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class CameraNode(Node):
    def __init__(self):
        super().__init__('camera_node')
        self.declare_parameter('camera_index', 0)
        self.camera_index = self.get_parameter('camera_index').value
        
        self.publisher_ = self.create_publisher(Image, '/camera/image_raw', 10)
        
        # Try to open camera
        self.cap = cv2.VideoCapture(self.camera_index)
        if not self.cap.isOpened():
            self.get_logger().error(f"Failed to open camera index {self.camera_index}")
        else:
            self.get_logger().info(f"Camera index {self.camera_index} opened successfully.")
            
        self.bridge = CvBridge()
        # 30 fps
        self.timer = self.create_timer(1.0/30.0, self.timer_callback)

    def timer_callback(self):
        if self.cap.isOpened():
            ret, frame = self.cap.read()
            if ret:
                msg = self.bridge.cv2_to_imgmsg(frame, "bgr8")
                self.publisher_.publish(msg)
            else:
                self.get_logger().warn("Failed to read frame from camera.")

    def destroy_node(self):
        if self.cap.isOpened():
            self.cap.release()
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    node = CameraNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
