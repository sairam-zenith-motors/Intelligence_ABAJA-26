import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import LaneMarking, LaneState

class LaneTrackerNode(Node):
    def __init__(self):
        super().__init__('lane_tracker_node')
        
        self.declare_parameter('min_lane_confidence', 0.3)
        self.declare_parameter('image_center_x', 320.0) # Assuming 640x480 for now
        
        self.min_conf = self.get_parameter('min_lane_confidence').value
        self.img_center_x = self.get_parameter('image_center_x').value
        
        self.sub = self.create_subscription(LaneMarking, '/lane_markings', self.markings_cb, 10)
        self.pub = self.create_publisher(LaneState, '/lane_state', 10)
        
        # Exponential moving average for smoothing
        self.smoothed_error = 0.0
        self.alpha = 0.2
        
        self.get_logger().info('Lane Tracker Node started.')

    def markings_cb(self, msg):
        ls = LaneState()
        
        if msg.confidence >= self.min_conf:
            ls.lane_available = True
            ls.lane_confidence = msg.confidence
            
            # Simple pixel-to-meter approximation. 
            # E.g. 1 pixel = 0.005 meters (5mm)
            pixel_error = msg.lane_center_x - self.img_center_x
            raw_error_m = pixel_error * 0.005
            
            # Smooth error
            self.smoothed_error = self.alpha * raw_error_m + (1 - self.alpha) * self.smoothed_error
            
            ls.lateral_error_m = self.smoothed_error
            # Heading error is complex without proper transform, approx as 0 for now
            ls.heading_error_deg = 0.0 
            ls.status_text = "Tracking"
        else:
            ls.lane_available = False
            ls.lane_confidence = 0.0
            ls.lateral_error_m = 0.0
            ls.heading_error_deg = 0.0
            ls.status_text = "Lane Lost"
            self.smoothed_error = 0.0
            
        self.pub.publish(ls)

def main(args=None):
    rclpy.init(args=args)
    node = LaneTrackerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok(): rclpy.shutdown()

if __name__ == '__main__':
    main()
