import rclpy
from rclpy.node import Node
import csv
import time
import os
from abaja_interfaces.msg import VehicleState, DbwStatus, LaneState, AEBStatus, TTCStatus, ControlCmd, DetectedObjectArray

class DataLoggerNode(Node):
    def __init__(self):
        super().__init__('data_logger_node')
        
        # Subscriptions
        self.create_subscription(VehicleState, '/vehicle_state', self.veh_cb, 10)
        self.create_subscription(DbwStatus, '/dbw_status', self.dbw_cb, 10)
        self.create_subscription(LaneState, '/lane_state', self.lane_cb, 10)
        self.create_subscription(AEBStatus, '/aeb_status', self.aeb_cb, 10)
        self.create_subscription(TTCStatus, '/ttc_status', self.ttc_cb, 10)
        self.create_subscription(ControlCmd, '/control_cmd', self.cmd_cb, 10)
        self.create_subscription(DetectedObjectArray, '/detections', self.det_cb, 10)
        
        # State caching
        self.veh = VehicleState()
        self.dbw = DbwStatus()
        self.lane = LaneState()
        self.aeb = AEBStatus()
        self.ttc = TTCStatus()
        self.cmd = ControlCmd()
        self.objects_count = 0
        
        # Open CSV file
        log_dir = os.path.expanduser('~/ros2_ws/logs')
        os.makedirs(log_dir, exist_ok=True)
        self.filename = os.path.join(log_dir, f"abaja_log_{int(time.time())}.csv")
        self.file = open(self.filename, 'w', newline='')
        self.writer = csv.writer(self.file)
        
        # Write header
        self.writer.writerow([
            'timestamp', 'speed_mps', 'steering_deg', 
            'brake_pct', 'throttle_pct', 'lateral_error', 
            'ttc_sec', 'aeb_active', 'objects_detected', 'dbw_fault'
        ])
        
        # Log loop at 10Hz
        self.timer = self.create_timer(0.1, self.log_loop)
        
        self.get_logger().info(f'Data Logger Node started. Logging to {self.filename}')

    def veh_cb(self, msg): self.veh = msg
    def dbw_cb(self, msg): self.dbw = msg
    def lane_cb(self, msg): self.lane = msg
    def aeb_cb(self, msg): self.aeb = msg
    def ttc_cb(self, msg): self.ttc = msg
    def cmd_cb(self, msg): self.cmd = msg
    def det_cb(self, msg): self.objects_count = len(msg.objects)

    def log_loop(self):
        self.writer.writerow([
            time.time(),
            f"{self.veh.speed_mps:.2f}",
            f"{self.cmd.steering_angle_deg:.2f}",
            f"{self.cmd.brake_percent:.2f}",
            f"{self.cmd.throttle_percent:.2f}",
            f"{self.lane.lateral_error_m:.2f}",
            f"{self.ttc.ttc_seconds:.2f}",
            int(self.aeb.aeb_active),
            self.objects_count,
            int(self.dbw.fault_detected)
        ])
        
    def destroy_node(self):
        self.file.close()
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    node = DataLoggerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok(): rclpy.shutdown()

if __name__ == '__main__':
    main()
