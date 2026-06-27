import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import VehicleState, ModeStatus
import os

class VehicleDashboardNode(Node):
    def __init__(self):
        super().__init__('vehicle_dashboard_node')
        
        # Subscribe to vehicle state and mode status
        self.state_sub = self.create_subscription(VehicleState, '/vehicle_state', self.state_cb, 10)
        self.mode_sub = self.create_subscription(ModeStatus, '/mode_status', self.mode_cb, 10)
        
        self.latest_state = VehicleState()
        self.latest_mode = ModeStatus()
        
        self.timer = self.create_timer(0.5, self.print_dashboard) # 2 Hz refresh rate
        
    def state_cb(self, msg):
        self.latest_state = msg
        
    def mode_cb(self, msg):
        self.latest_mode = msg
        
    def print_dashboard(self):
        # Clear screen (works on unix terminals)
        os.system('clear')
        
        mode_str = "AUTONOMOUS" if self.latest_mode.autonomous_switch else "MANUAL"
        if self.latest_mode.kill_switch:
            mode_str = "KILLED"
            
        print("========================================")
        print("       aBAJA VEHICLE DASHBOARD          ")
        print("========================================")
        print(f" Mode            : {mode_str}")
        print(f" Speed           : {self.latest_state.speed_mps:.2f} m/s")
        print(f" Steering Angle  : {self.latest_state.steering_angle_deg:.1f} deg")
        print(f" Battery Voltage : {self.latest_state.battery_voltage:.1f} V")
        print("----------------------------------------")
        print(" SWITCHES:")
        print(f" Lateral         : {'ON' if self.latest_mode.lateral_switch else 'OFF'}")
        print(f" Longitudinal    : {'ON' if self.latest_mode.longitudinal_switch else 'OFF'}")
        print(f" Kill Switch     : {'ACTIVE' if self.latest_mode.kill_switch else 'SAFE'}")
        print(f" Emergency Stop  : {'ACTIVE' if self.latest_state.emergency_stop else 'SAFE'}")
        print("========================================")

def main(args=None):
    rclpy.init(args=args)
    node = VehicleDashboardNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        # Clear screen on exit
        os.system('clear')
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == '__main__':
    main()
