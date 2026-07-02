import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import VehicleState, ModeStatus, DbwStatus, LaneState, AEBStatus, TTCStatus, SafetyState

class SafetySupervisorNode(Node):
    def __init__(self):
        super().__init__('safety_supervisor_node')
        
        self.create_subscription(VehicleState, '/vehicle_state', self.veh_cb, 10)
        self.create_subscription(ModeStatus, '/mode_status', self.mode_cb, 10)
        self.create_subscription(DbwStatus, '/dbw_status', self.dbw_cb, 10)
        self.create_subscription(LaneState, '/lane_state', self.lane_cb, 10)
        self.create_subscription(AEBStatus, '/aeb_status', self.aeb_cb, 10)
        self.create_subscription(TTCStatus, '/ttc_status', self.ttc_cb, 10)
        
        self.pub = self.create_publisher(SafetyState, '/safety_state', 10)
        
        self.veh = VehicleState()
        self.mode = ModeStatus()
        self.dbw = DbwStatus()
        self.lane = LaneState()
        self.aeb = AEBStatus()
        self.ttc = TTCStatus()
        
        self.timer = self.create_timer(0.1, self.supervise)
        
        self.get_logger().info('Safety Supervisor Node started.')

    def veh_cb(self, msg): self.veh = msg
    def mode_cb(self, msg): self.mode = msg
    def dbw_cb(self, msg): self.dbw = msg
    def lane_cb(self, msg): self.lane = msg
    def aeb_cb(self, msg): self.aeb = msg
    def ttc_cb(self, msg): self.ttc = msg

    def supervise(self):
        safety = SafetyState()
        safety.safe_to_drive = True
        safety.emergency_stop = False
        safety.reason = "All systems nominal"
        
        # 1. Hardware/Safety Switches
        if self.mode.kill_switch:
            safety.emergency_stop = True
            safety.safe_to_drive = False
            safety.reason = "KILL SWITCH ACTIVE"
            
        # 2. Battery
        elif self.veh.battery_voltage > 0 and self.veh.battery_voltage < 40.0:
            safety.emergency_stop = True
            safety.safe_to_drive = False
            safety.reason = "CRITICAL LOW BATTERY"
            
        # 3. DBW Fault
        elif self.dbw.fault_detected:
            safety.emergency_stop = True
            safety.safe_to_drive = False
            safety.reason = f"DBW FAULT: {self.dbw.fault_reason}"
            
        # 4. In autonomous mode but DBW disabled
        elif self.mode.autonomous_switch and not self.dbw.dbw_enabled:
            # Not an emergency stop necessarily, but DBW isn't engaging
            pass
            
        self.pub.publish(safety)

def main(args=None):
    rclpy.init(args=args)
    node = SafetySupervisorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok(): rclpy.shutdown()

if __name__ == '__main__':
    main()
