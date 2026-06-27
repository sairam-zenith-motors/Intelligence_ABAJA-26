import rclpy
from rclpy.node import Node
import os
from abaja_interfaces.msg import VehicleState, ModeStatus, DbwStatus, LaneState, AEBStatus, ControlCmd

class SystemDashboardNode(Node):
    def __init__(self):
        super().__init__('system_dashboard_node')
        
        self.create_subscription(VehicleState, '/vehicle_state', self.veh_cb, 10)
        self.create_subscription(ModeStatus, '/mode_status', self.mode_cb, 10)
        self.create_subscription(DbwStatus, '/dbw_status', self.dbw_cb, 10)
        self.create_subscription(LaneState, '/lane_state', self.lane_cb, 10)
        self.create_subscription(AEBStatus, '/aeb_status', self.aeb_cb, 10)
        self.create_subscription(ControlCmd, '/control_cmd', self.cmd_cb, 10)
        
        self.veh = VehicleState()
        self.mode = ModeStatus()
        self.dbw = DbwStatus()
        self.lane = LaneState()
        self.aeb = AEBStatus()
        self.cmd = ControlCmd()
        
        self.timer = self.create_timer(0.2, self.display_dashboard)
        
    def veh_cb(self, msg): self.veh = msg
    def mode_cb(self, msg): self.mode = msg
    def dbw_cb(self, msg): self.dbw = msg
    def lane_cb(self, msg): self.lane = msg
    def aeb_cb(self, msg): self.aeb = msg
    def cmd_cb(self, msg): self.cmd = msg
        
    def display_dashboard(self):
        os.system('clear')
        print("============================================================")
        print("          aBAJA SYSTEM DASHBOARD (STAGE 7)                  ")
        print("============================================================")
        print(f" SPEED: {self.veh.speed_mps:.2f} m/s    |  BATTERY: {self.veh.battery_voltage:.1f}V")
        print(f" STEER FB: {self.veh.steering_angle_deg:.1f} deg |  DBW FAULT: {self.dbw.fault_detected}")
        print("------------------------------------------------------------")
        print(f" MODE: AUTONOMOUS [{self.mode.autonomous_switch}]  |  KILL SWITCH [{self.mode.kill_switch}]")
        print(f" LKA ENABLED [{self.mode.lateral_switch}]       |  AEB ENABLED [{self.mode.longitudinal_switch}]")
        print("------------------------------------------------------------")
        print(f" LANE: {self.lane.status_text}")
        print(f" AEB:  {self.aeb.reason}")
        print("------------------------------------------------------------")
        print(f" CONTROL SOURCE: {self.cmd.source}")
        print(f" TARGET SPEED: {self.cmd.target_speed_mps:.2f} m/s  | STEER: {self.cmd.steering_angle_deg:.1f} deg")
        print(f" THROTTLE: {self.cmd.throttle_percent:.1f}%        | BRAKE: {self.cmd.brake_percent:.1f}%")
        print("============================================================")

def main(args=None):
    rclpy.init(args=args)
    node = SystemDashboardNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok(): rclpy.shutdown()

if __name__ == '__main__':
    main()
