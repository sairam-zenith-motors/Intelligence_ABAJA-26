import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import ObjectDistanceArray, TTCStatus, VehicleState

class TtcCalculatorNode(Node):
    def __init__(self):
        super().__init__('ttc_calculator_node')
        
        self.dist_sub = self.create_subscription(ObjectDistanceArray, '/object_distances', self.dist_cb, 10)
        self.veh_sub = self.create_subscription(VehicleState, '/vehicle_state', self.veh_cb, 10)
        
        self.pub = self.create_publisher(TTCStatus, '/ttc_status', 10)
        
        self.latest_speed = 0.0
        
        self.get_logger().info('TTC Calculator Node started.')

    def veh_cb(self, msg):
        self.latest_speed = msg.speed_mps
        
    def dist_cb(self, msg):
        ttc_msg = TTCStatus()
        
        if not msg.objects:
            ttc_msg.obstacle_detected = False
            ttc_msg.distance_m = 999.0
            ttc_msg.ttc_seconds = 999.0
            ttc_msg.risk_level = "safe"
            self.pub.publish(ttc_msg)
            return
            
        # Find closest object
        closest = min(msg.objects, key=lambda x: x.distance_m)
        
        ttc_msg.obstacle_detected = True
        ttc_msg.object_class = closest.class_name
        ttc_msg.distance_m = closest.distance_m
        ttc_msg.ego_speed_mps = self.latest_speed
        
        # Calculate TTC
        # If speed is very low, TTC is effectively infinite
        if self.latest_speed > 0.1:
            ttc_msg.ttc_seconds = closest.distance_m / self.latest_speed
        else:
            ttc_msg.ttc_seconds = 999.0
            
        # Assign risk level based on requested thresholds
        if closest.distance_m <= 4.0 or ttc_msg.ttc_seconds <= 2.0:
            ttc_msg.risk_level = "emergency"
        elif closest.distance_m <= 8.0 or ttc_msg.ttc_seconds <= 4.0:
            ttc_msg.risk_level = "warning"
        else:
            ttc_msg.risk_level = "safe"
            
        self.pub.publish(ttc_msg)

def main(args=None):
    rclpy.init(args=args)
    node = TtcCalculatorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok(): rclpy.shutdown()

if __name__ == '__main__':
    main()
