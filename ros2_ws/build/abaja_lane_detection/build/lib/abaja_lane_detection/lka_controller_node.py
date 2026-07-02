import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import LaneState, VehicleState, ModeStatus, ControlCmd

class LkaControllerNode(Node):
    def __init__(self):
        super().__init__('lka_controller_node')
        
        self.lane_sub = self.create_subscription(LaneState, '/lane_state', self.lane_cb, 10)
        self.mode_sub = self.create_subscription(ModeStatus, '/mode_status', self.mode_cb, 10)
        
        # Publish to the specific lka_control_cmd topic for the mux
        self.pub = self.create_publisher(ControlCmd, '/lka_control_cmd', 10)
        
        self.latest_mode = ModeStatus()
        self.latest_mode.autonomous_switch = False
        self.latest_mode.lateral_switch = False
        
        # Simple P controller gain (deg per meter of error)
        self.kp = -15.0 
        
        self.get_logger().info('LKA Controller Node started.')

    def mode_cb(self, msg):
        self.latest_mode = msg
        
    def lane_cb(self, msg):
        cmd = ControlCmd()
        cmd.source = "lka_controller"
        
        if not self.latest_mode.autonomous_switch or not self.latest_mode.lateral_switch:
            # LKA not allowed
            cmd.target_speed_mps = 0.0
            cmd.steering_angle_deg = 0.0
            cmd.throttle_percent = 0.0
            cmd.brake_percent = 0.0
            self.pub.publish(cmd)
            return
            
        if msg.lane_available:
            # P control
            steering_req = self.kp * msg.lateral_error_m
            # Limit steering
            steering_req = max(min(steering_req, 25.0), -25.0)
            
            cmd.steering_angle_deg = steering_req
            cmd.target_speed_mps = 0.8 # Slow speed
            cmd.throttle_percent = 10.0 # Just enough to move
            cmd.brake_percent = 0.0
        else:
            # Lost lane
            cmd.steering_angle_deg = 0.0
            cmd.target_speed_mps = 0.0
            cmd.throttle_percent = 0.0
            cmd.brake_percent = 50.0 # Slow down gently
            
        self.pub.publish(cmd)

def main(args=None):
    rclpy.init(args=args)
    node = LkaControllerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok(): rclpy.shutdown()

if __name__ == '__main__':
    main()
