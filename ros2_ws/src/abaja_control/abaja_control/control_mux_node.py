import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import ControlCmd, SafetyState

class ControlMuxNode(Node):
    def __init__(self):
        super().__init__('control_mux_node')
        
        self.teleop_sub = self.create_subscription(ControlCmd, '/teleop_control_cmd', self.teleop_cb, 10)
        self.lka_sub = self.create_subscription(ControlCmd, '/lka_control_cmd', self.lka_cb, 10)
        self.aeb_sub = self.create_subscription(ControlCmd, '/aeb_control_cmd', self.aeb_cb, 10)
        self.safety_sub = self.create_subscription(SafetyState, '/safety_state', self.safety_cb, 10)
        
        self.pub = self.create_publisher(ControlCmd, '/control_cmd', 10)
        
        # Latest commands
        self.teleop_cmd = ControlCmd()
        self.lka_cmd = ControlCmd()
        self.aeb_cmd = ControlCmd()
        self.safety_state = SafetyState()
        self.safety_state.emergency_stop = False
        
        # Run mux loop at 20Hz
        self.timer = self.create_timer(0.05, self.mux_loop)
        
        self.get_logger().info('Control Mux Node started.')

    def teleop_cb(self, msg):
        self.teleop_cmd = msg
        
    def lka_cb(self, msg):
        self.lka_cmd = msg
        
    def aeb_cb(self, msg):
        self.aeb_cmd = msg
        
    def safety_cb(self, msg):
        self.safety_state = msg

    def mux_loop(self):
        final_cmd = ControlCmd()
        
        # Priority 1: High-level Safety Supervisor Emergency Stop
        if self.safety_state.emergency_stop:
            final_cmd.source = "mux_emergency"
            final_cmd.throttle_percent = 0.0
            final_cmd.brake_percent = 100.0
            # Keep steering as 0 or current (using 0 for safety)
            final_cmd.steering_angle_deg = 0.0
            final_cmd.target_speed_mps = 0.0
            self.pub.publish(final_cmd)
            return
            
        # Priority 2: AEB (Emergency or Warning Braking)
        if self.aeb_cmd.brake_percent > 0:
            final_cmd.source = "mux_aeb"
            final_cmd.throttle_percent = self.aeb_cmd.throttle_percent
            final_cmd.brake_percent = self.aeb_cmd.brake_percent
            final_cmd.target_speed_mps = 0.0
            
            # AEB doesn't control steering, so we allow LKA or Teleop to steer
            if abs(self.lka_cmd.steering_angle_deg) > 0:
                final_cmd.steering_angle_deg = self.lka_cmd.steering_angle_deg
            else:
                final_cmd.steering_angle_deg = self.teleop_cmd.steering_angle_deg
                
            self.pub.publish(final_cmd)
            return
            
        # Priority 3: LKA (Lane Keeping Assist)
        # If LKA is active, it sends a non-zero speed and steering
        if self.lka_cmd.target_speed_mps > 0 or abs(self.lka_cmd.steering_angle_deg) > 0 or self.lka_cmd.brake_percent > 0:
            final_cmd.source = "mux_lka"
            final_cmd.throttle_percent = self.lka_cmd.throttle_percent
            final_cmd.brake_percent = self.lka_cmd.brake_percent
            final_cmd.steering_angle_deg = self.lka_cmd.steering_angle_deg
            final_cmd.target_speed_mps = self.lka_cmd.target_speed_mps
            
            # Note: The teleop throttle could technically override here if we wanted hybrid mode,
            # but for strict autonomy, LKA takes full control of the requested axes.
            self.pub.publish(final_cmd)
            return
            
        # Priority 4: Teleop / Manual
        # If no autonomous system is commanding anything, fall back to teleop commands
        # The DBW Manager will reject them if the mode switch is wrong anyway.
        final_cmd = self.teleop_cmd
        final_cmd.source = "mux_teleop"
        self.pub.publish(final_cmd)

def main(args=None):
    rclpy.init(args=args)
    node = ControlMuxNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok(): rclpy.shutdown()

if __name__ == '__main__':
    main()
