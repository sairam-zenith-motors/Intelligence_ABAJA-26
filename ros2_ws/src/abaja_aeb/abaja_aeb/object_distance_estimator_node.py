import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import DetectedObjectArray, ObjectDistance, ObjectDistanceArray

class ObjectDistanceEstimatorNode(Node):
    def __init__(self):
        super().__init__('object_distance_estimator_node')
        
        self.sub = self.create_subscription(DetectedObjectArray, '/detections', self.detections_cb, 10)
        self.pub = self.create_publisher(ObjectDistanceArray, '/object_distances', 10)
        
        # Simple focal length approximation (pixels)
        self.focal_length = 500.0 
        
        # Approximate real-world heights (meters)
        self.assumed_heights = {
            'person': 1.7,
            'car': 1.5,
            'truck': 3.0,
            'bicycle': 1.0,
            'stop sign': 0.8
        }
        
        self.get_logger().info('Object Distance Estimator Node started.')

    def detections_cb(self, msg):
        out_msg = ObjectDistanceArray()
        out_msg.header = msg.header
        
        for det in msg.objects:
            obj_h_pixels = det.y_max - det.y_min
            
            # Use assumed height if known, else assume 1.0m
            real_h = self.assumed_heights.get(det.class_name, 1.0)
            
            # Pinhole camera distance estimation: D = (real_H * focal_length) / pixel_H
            dist = (real_h * self.focal_length) / max(obj_h_pixels, 1)
            
            od = ObjectDistance()
            od.class_name = det.class_name
            od.confidence = det.confidence
            od.distance_m = dist
            od.x_min = det.x_min
            od.y_min = det.y_min
            od.x_max = det.x_max
            od.y_max = det.y_max
            
            out_msg.objects.append(od)
            
        self.pub.publish(out_msg)

def main(args=None):
    rclpy.init(args=args)
    node = ObjectDistanceEstimatorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok(): rclpy.shutdown()

if __name__ == '__main__':
    main()
