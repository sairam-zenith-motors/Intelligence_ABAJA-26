import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from abaja_interfaces.msg import ControlCmd

class CmdVelToDbwNode(Node):
    def __init__(self):
        super().__init__('cmd_vel_to_dbw_node')
        
        self.subscription = self.create_subscription(
            Twist,
            '/cmd_vel',
            self.cmd_vel_callback,
            10)
            
        self.publisher_ = self.create_publisher(ControlCmd, '/teleop_control_cmd', 10)
        self.get_logger().info('Cmd Vel to DBW Node started. Publishing to /teleop_control_cmd')

    def cmd_vel_callback(self, msg):
        cmd = ControlCmd()
        
        # In a real car, this would involve a complex mapping based on current speed.
        # Here we just map linearly for simplicity.
        # Max speed 2 m/s, max steering 30 deg.
        
        cmd.target_speed_mps = msg.linear.x
        
        # Simple steering mapping (angular.z to degrees)
        # e.g. 1.0 rad/s could map to maximum steering angle.
        # Using a direct proportional factor for simulation.
        cmd.steering_angle_deg = msg.angular.z * 30.0 # simple scaling
        
        # Keep steering within bounds
        cmd.steering_angle_deg = max(min(cmd.steering_angle_deg, 30.0), -30.0)
        
        # Very simple throttle/brake logic based on target speed request
        if msg.linear.x > 0:
            cmd.throttle_percent = (msg.linear.x / 2.0) * 100.0
            cmd.brake_percent = 0.0
        elif msg.linear.x < 0:
            # Negative cmd_vel linear.x could mean reverse or brake. We will treat as brake here for simplicity.
            cmd.throttle_percent = 0.0
            cmd.brake_percent = min(abs(msg.linear.x / 2.0) * 100.0, 100.0)
        else:
            cmd.throttle_percent = 0.0
            cmd.brake_percent = 0.0

        # Cap throttle
        cmd.throttle_percent = max(min(cmd.throttle_percent, 100.0), 0.0)

        cmd.emergency_stop = False
        cmd.source = "teleop"

        self.publisher_.publish(cmd)

def main(args=None):
    rclpy.init(args=args)
    node = CmdVelToDbwNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
