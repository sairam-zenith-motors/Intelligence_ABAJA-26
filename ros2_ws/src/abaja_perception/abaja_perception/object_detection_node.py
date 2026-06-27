import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from abaja_interfaces.msg import DetectedObject, DetectedObjectArray
from cv_bridge import CvBridge
import cv2

try:
    from ultralytics import YOLO
    YOLO_AVAILABLE = True
except ImportError:
    YOLO_AVAILABLE = False

class ObjectDetectionNode(Node):
    def __init__(self):
        super().__init__('object_detection_node')
        
        self.declare_parameter('confidence_threshold', 0.5)
        self.conf_thresh = self.get_parameter('confidence_threshold').value
        
        self.sub = self.create_subscription(Image, '/camera/image_raw', self.image_cb, 10)
        self.det_pub = self.create_publisher(DetectedObjectArray, '/detections', 10)
        self.img_pub = self.create_publisher(Image, '/annotated_image', 10)
        
        self.bridge = CvBridge()
        
        self.target_classes = [
            'speed_limit_10', 'speed_limit_15', 'speed_limit_30', 
            'speed_limit_60', 'speed_limit_80', 'red_traffic_light', 
            'green_traffic_light', 'amber_traffic_light', 'traffic_cone', 
            'pedestrian', 'car', 'bicyclist', 'two_wheeler', 'cow', 'steel_barricade'
        ]
        
        if YOLO_AVAILABLE:
            try:
                # Load a standard pretrained YOLOv8n model
                # In the future, this should be replaced with custom aBAJA weights.
                self.model = YOLO('yolov8n.pt')
                self.get_logger().info('YOLOv8 model loaded successfully.')
            except Exception as e:
                self.get_logger().error(f'Failed to load YOLO model: {e}')
                self.model = None
        else:
            self.get_logger().error("ultralytics package not installed. YOLO object detection will not work.")
            self.model = None

    def image_cb(self, msg):
        frame = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        
        det_msg = DetectedObjectArray()
        det_msg.header = msg.header
        
        if self.model is not None:
            # Run inference
            results = self.model(frame, verbose=False)
            
            for r in results:
                boxes = r.boxes
                for box in boxes:
                    cls_id = int(box.cls[0])
                    conf = float(box.conf[0])
                    
                    if conf >= self.conf_thresh:
                        # Map COCO classes to our target classes for dummy purpose.
                        # For now we just use the COCO name if it maps, or generic name.
                        class_name = self.model.names[cls_id]
                        
                        obj = DetectedObject()
                        obj.class_name = class_name
                        obj.confidence = conf
                        x1, y1, x2, y2 = box.xyxy[0]
                        obj.x_min = int(x1)
                        obj.y_min = int(y1)
                        obj.x_max = int(x2)
                        obj.y_max = int(y2)
                        
                        det_msg.objects.append(obj)
                        
                        # Draw on frame
                        cv2.rectangle(frame, (obj.x_min, obj.y_min), (obj.x_max, obj.y_max), (0, 255, 0), 2)
                        label = f"{class_name} {conf:.2f}"
                        cv2.putText(frame, label, (obj.x_min, obj.y_min - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
        else:
            # If no YOLO, just add text indicating missing YOLO
            cv2.putText(frame, "YOLO Missing", (50, 50), cv2.FONT_HERSHEY_SIMPLEX, 1.0, (0, 0, 255), 2)
            
        self.det_pub.publish(det_msg)
        annotated_msg = self.bridge.cv2_to_imgmsg(frame, "bgr8")
        self.img_pub.publish(annotated_msg)

def main(args=None):
    rclpy.init(args=args)
    node = ObjectDetectionNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
