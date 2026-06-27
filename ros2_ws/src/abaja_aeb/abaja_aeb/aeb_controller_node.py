import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import TTCStatus, VehicleState, ModeStatus, AEBStatus, ControlCmd

class AebControllerNode(Node):
    def __init__(self):
        super().__init__('aeb_controller_node')
        
        self.ttc_sub = self.create_subscription(TTCStatus, '/ttc_status', self.ttc_cb, 10)
        self.mode_sub = self.create_subscription(ModeStatus, '/mode_status', self.mode_cb, 10)
        
        self.aeb_pub = self.create_publisher(AEBStatus, '/aeb_status', 10)
        self.cmd_pub = self.create_publisher(ControlCmd, '/aeb_control_cmd', 10)
        
        self.latest_mode = ModeStatus()
        self.latest_mode.autonomous_switch = False
        self.latest_mode.longitudinal_switch = False
        self.latest_mode.kill_switch = False
        
        self.get_logger().info('AEB Controller Node started.')

    def mode_cb(self, msg):
        self.latest_mode = msg
        
    def ttc_cb(self, msg):
        aeb = AEBStatus()
        cmd = ControlCmd()
        cmd.source = "aeb_controller"
        
        # Check safety prerequisites
        if not self.latest_mode.autonomous_switch or not self.latest_mode.longitudinal_switch or self.latest_mode.kill_switch:
            aeb.aeb_active = False
            aeb.warning_active = False
            aeb.emergency_braking = False
            aeb.reason = "AEB Disabled (Switch constraints)"
            # Send 0 command when disabled (Mux will ignore it)
            cmd.throttle_percent = 0.0
            cmd.brake_percent = 0.0
            self.aeb_pub.publish(aeb)
            self.cmd_pub.publish(cmd)
            return

        aeb.aeb_active = True
        
        if msg.risk_level == "emergency":
            aeb.warning_active = True
            aeb.emergency_braking = True
            aeb.commanded_brake_percent = 100.0
            aeb.commanded_throttle_percent = 0.0
            aeb.reason = f"Emergency! Obstacle at {msg.distance_m:.1f}m"
            
            cmd.throttle_percent = 0.0
            cmd.brake_percent = 100.0
            
        elif msg.risk_level == "warning":
            aeb.warning_active = True
            aeb.emergency_braking = False
            aeb.commanded_brake_percent = 30.0
            aeb.commanded_throttle_percent = 0.0
            aeb.reason = f"Warning! Obstacle at {msg.distance_m:.1f}m"
            
            cmd.throttle_percent = 0.0
            cmd.brake_percent = 30.0
            
        else:
            aeb.warning_active = False
            aeb.emergency_braking = False
            aeb.commanded_brake_percent = 0.0
            aeb.commanded_throttle_percent = 0.0
            aeb.reason = "Safe"
            
            cmd.throttle_percent = 0.0
            cmd.brake_percent = 0.0

        # Note: AEB doesn't control steering. The Mux will handle preserving steering from LKA.
        
        self.aeb_pub.publish(aeb)
        self.cmd_pub.publish(cmd)

def main(args=None):
    rclpy.init(args=args)
    node = AebControllerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok(): rclpy.shutdown()

if __name__ == '__main__':
    main()
