import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import ControlCmd, DbwCmd, DbwStatus, ModeStatus, VehicleState
from std_msgs.msg import Bool

class DbwManagerNode(Node):
    def __init__(self):
        super().__init__('dbw_manager_node')
        
        self.cmd_sub = self.create_subscription(ControlCmd, '/control_cmd', self.cmd_cb, 10)
        self.mode_sub = self.create_subscription(ModeStatus, '/mode_status', self.mode_cb, 10)
        self.state_sub = self.create_subscription(VehicleState, '/vehicle_state', self.state_cb, 10)
        self.estop_sub = self.create_subscription(Bool, '/emergency_stop', self.estop_cb, 10)
        
        self.dbw_cmd_pub = self.create_publisher(DbwCmd, '/dbw_cmd', 10)
        self.dbw_status_pub = self.create_publisher(DbwStatus, '/dbw_status', 10)
        
        self.latest_mode = ModeStatus()
        self.latest_mode.autonomous_switch = False
        self.latest_mode.manual_switch = True
        self.latest_mode.kill_switch = False
        self.latest_mode.lateral_switch = False
        self.latest_mode.longitudinal_switch = False
        
        self.latest_state = VehicleState()
        self.estop_active = False
        
        # Startup grace period: do not trigger timeout fault for the first N seconds.
        # This prevents a false fault while the pipeline is initialising.
        self.declare_parameter('startup_grace_seconds', 5.0)
        grace = self.get_parameter('startup_grace_seconds').value
        from rclpy.duration import Duration
        self.startup_deadline = self.get_clock().now() + Duration(seconds=grace)
        self.last_cmd_time = self.get_clock().now()
        
        self.timer = self.create_timer(0.05, self.timer_callback) # 20Hz safety check
        self.get_logger().info('DBW Manager Node started.')

    def mode_cb(self, msg):
        self.latest_mode = msg

    def state_cb(self, msg):
        self.latest_state = msg
        
    def estop_cb(self, msg):
        self.estop_active = msg.data

    def cmd_cb(self, msg):
        self.last_cmd_time = self.get_clock().now()
        self.process_command(msg)
        
    def process_command(self, cmd_in):
        dbw_out = DbwCmd()
        status_out = DbwStatus()
        
        # 1. Base enabled states
        status_out.dbw_enabled = self.latest_mode.autonomous_switch and not self.latest_mode.kill_switch
        status_out.throttle_enabled = status_out.dbw_enabled and self.latest_mode.longitudinal_switch
        status_out.brake_enabled = status_out.dbw_enabled and self.latest_mode.longitudinal_switch
        status_out.steering_enabled = status_out.dbw_enabled and self.latest_mode.lateral_switch
        
        dbw_out.enable_throttle = status_out.throttle_enabled
        dbw_out.enable_brake = status_out.brake_enabled
        dbw_out.enable_steering = status_out.steering_enabled
        dbw_out.emergency_stop = False
        
        # 2. Timeout Check (Rule 6)
        # Skip timeout fault during the startup grace period.
        now = self.get_clock().now()
        in_grace_period = now < self.startup_deadline
        time_since_last_cmd = (now - self.last_cmd_time).nanoseconds / 1e9
        if not in_grace_period and time_since_last_cmd > 0.5:
            status_out.fault_detected = True
            status_out.fault_reason = "Command Timeout"
            dbw_out.throttle_percent = 0.0
            dbw_out.brake_percent = 100.0
            dbw_out.steering_angle_deg = 0.0
            dbw_out.emergency_stop = True
            self.publish_outputs(dbw_out, status_out)
            return

        # 3. Kill Switch Check (Rule 2)
        if self.latest_mode.kill_switch:
            status_out.fault_detected = True
            status_out.fault_reason = "Kill Switch Active"
            dbw_out.throttle_percent = 0.0
            dbw_out.brake_percent = 100.0
            dbw_out.steering_angle_deg = 0.0
            dbw_out.emergency_stop = True
            self.publish_outputs(dbw_out, status_out)
            return

        # 4. Emergency Stop Check (Rule 3)
        if self.estop_active or cmd_in.emergency_stop:
            status_out.fault_detected = True
            status_out.fault_reason = "Emergency Stop"
            dbw_out.throttle_percent = 0.0
            dbw_out.brake_percent = 100.0
            dbw_out.steering_angle_deg = 0.0
            dbw_out.emergency_stop = True
            self.publish_outputs(dbw_out, status_out)
            return

        # 5. Autonomous Mode Check (Rule 1)
        if not self.latest_mode.autonomous_switch:
            status_out.fault_detected = False
            status_out.fault_reason = "Manual Mode Active"
            dbw_out.throttle_percent = 0.0
            dbw_out.brake_percent = 0.0
            dbw_out.steering_angle_deg = 0.0
            self.publish_outputs(dbw_out, status_out)
            return
            
        # 6. Apply commands within limits (Rule 7)
        # Limit target speed
        dbw_out.target_speed_mps = max(min(cmd_in.target_speed_mps, 2.0), -2.0)
        
        # Longitudinal logic (Rule 4)
        if status_out.throttle_enabled:
            dbw_out.throttle_percent = max(min(cmd_in.throttle_percent, 100.0), 0.0)
        else:
            dbw_out.throttle_percent = 0.0
            
        if status_out.brake_enabled:
            dbw_out.brake_percent = max(min(cmd_in.brake_percent, 100.0), 0.0)
        else:
            dbw_out.brake_percent = 0.0

        # Lateral logic (Rule 5)
        if status_out.steering_enabled:
            dbw_out.steering_angle_deg = max(min(cmd_in.steering_angle_deg, 30.0), -30.0)
        else:
            dbw_out.steering_angle_deg = 0.0

        status_out.fault_detected = False
        status_out.fault_reason = "OK"
        
        self.publish_outputs(dbw_out, status_out)

    def publish_outputs(self, dbw_out, status_out):
        self.dbw_cmd_pub.publish(dbw_out)
        self.dbw_status_pub.publish(status_out)
        
    def timer_callback(self):
        # Check for timeout when no commands arrive, but respect grace period
        now = self.get_clock().now()
        in_grace_period = now < self.startup_deadline
        time_since_last_cmd = (now - self.last_cmd_time).nanoseconds / 1e9
        if not in_grace_period and time_since_last_cmd > 0.5:
            # Trigger a dummy empty command process to enforce timeout rule
            dummy = ControlCmd()
            self.process_command(dummy)

def main(args=None):
    rclpy.init(args=args)
    node = DbwManagerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
