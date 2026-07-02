import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from abaja_interfaces.msg import LaneMarking
from cv_bridge import CvBridge
import cv2
import numpy as np

class LaneDetectionNode(Node):
    def __init__(self):
        super().__init__('lane_detection_node')
        
        self.declare_parameter('roi_top', 0.5)
        self.declare_parameter('roi_bottom', 1.0)
        self.declare_parameter('lane_threshold', 200)
        self.declare_parameter('debug_view', True)
        
        self.roi_top = self.get_parameter('roi_top').value
        self.roi_bottom = self.get_parameter('roi_bottom').value
        self.lane_threshold = self.get_parameter('lane_threshold').value
        self.debug_view = self.get_parameter('debug_view').value
        
        self.sub = self.create_subscription(Image, '/camera/image_raw', self.image_cb, 10)
        self.lane_pub = self.create_publisher(LaneMarking, '/lane_markings', 10)
        self.debug_pub = self.create_publisher(Image, '/lane_debug_image', 10)
        
        self.bridge = CvBridge()
        self.get_logger().info('Lane Detection Node started.')

    def image_cb(self, msg):
        frame = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        h, w = frame.shape[:2]
        
        # 1. Grayscale & Threshold
        gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
        _, thresh = cv2.threshold(gray, self.lane_threshold, 255, cv2.THRESH_BINARY)
        
        # 2. Apply ROI mask
        mask = np.zeros_like(thresh)
        top = int(h * self.roi_top)
        bottom = int(h * self.roi_bottom)
        
        # Simple trapezoid ROI
        poly = np.array([[(0, bottom), (int(w*0.4), top), (int(w*0.6), top), (w, bottom)]])
        cv2.fillPoly(mask, poly, 255)
        roi_thresh = cv2.bitwise_and(thresh, mask)
        
        # 3. Simple column summation for lane finding
        # Split image into left and right halves to find lines
        midpoint = int(w / 2)
        histogram = np.sum(roi_thresh[top:bottom, :], axis=0)
        
        left_lane_x = -1.0
        right_lane_x = -1.0
        left_detected = False
        right_detected = False
        
        if np.max(histogram[:midpoint]) > 0:
            left_lane_x = float(np.argmax(histogram[:midpoint]))
            left_detected = True
            
        if np.max(histogram[midpoint:]) > 0:
            right_lane_x = float(np.argmax(histogram[midpoint:]) + midpoint)
            right_detected = True
            
        # 4. Calculate center
        lane_center_x = 0.0
        if left_detected and right_detected:
            lane_center_x = (left_lane_x + right_lane_x) / 2.0
        elif left_detected:
            # Assumed lane width in pixels roughly 400
            lane_center_x = left_lane_x + 200.0
        elif right_detected:
            lane_center_x = right_lane_x - 200.0
            
        # 5. Publish
        lm = LaneMarking()
        lm.left_lane_detected = left_detected
        lm.right_lane_detected = right_detected
        lm.left_lane_x = left_lane_x
        lm.right_lane_x = right_lane_x
        lm.lane_center_x = lane_center_x
        lm.confidence = 1.0 if (left_detected and right_detected) else (0.5 if (left_detected or right_detected) else 0.0)
        
        self.lane_pub.publish(lm)
        
        # 6. Debug View
        if self.debug_view:
            debug_img = cv2.cvtColor(roi_thresh, cv2.COLOR_GRAY2BGR)
            if left_detected:
                cv2.line(debug_img, (int(left_lane_x), 0), (int(left_lane_x), h), (0, 0, 255), 2)
            if right_detected:
                cv2.line(debug_img, (int(right_lane_x), 0), (int(right_lane_x), h), (0, 0, 255), 2)
            if lm.confidence > 0:
                cv2.circle(debug_img, (int(lane_center_x), int(h/2)), 5, (0, 255, 0), -1)
                
            debug_msg = self.bridge.cv2_to_imgmsg(debug_img, "bgr8")
            self.debug_pub.publish(debug_msg)

def main(args=None):
    rclpy.init(args=args)
    node = LaneDetectionNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok(): rclpy.shutdown()

if __name__ == '__main__':
    main()
