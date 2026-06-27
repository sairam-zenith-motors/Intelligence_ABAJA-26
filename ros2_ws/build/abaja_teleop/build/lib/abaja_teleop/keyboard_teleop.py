#!/usr/bin/env python3
"""
keyboard_teleop.py - Keyboard Teleoperation Node for aBAJA Buggy

This ROS2 node allows you to control the aBAJA buggy using keyboard inputs.
It publishes geometry_msgs/Twist messages to the /cmd_vel topic.

Controls:
    W / w  : Increase forward speed (accelerate)
    S / s  : Decrease speed / reverse (brake/reverse)
    A / a  : Steer left (increase angular velocity)
    D / d  : Steer right (decrease angular velocity)
    SPACE  : Emergency stop (set all velocities to zero)
    Q / q  : Quit the teleop node

Speed Limits:
    Max linear speed:  2.0 m/s
    Max angular speed: 0.8 rad/s

Usage:
    ros2 run abaja_teleop keyboard_teleop

Note:
    This node uses the 'termios' module for raw keyboard input,
    so it must be run in a terminal (not from a launch file).
    The terminal settings are restored on exit.

Author: aBAJA Team, Sri Sairam Engineering College
"""

import sys
import termios
import tty
import select
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist


# =============================================================================
# CONFIGURATION - Speed limits and increments
# =============================================================================

# Maximum speeds
MAX_LINEAR_SPEED = 2.0    # m/s - max forward/backward speed
MAX_ANGULAR_SPEED = 0.8   # rad/s - max turning rate

# Speed increment per key press
LINEAR_SPEED_STEP = 0.1   # m/s per 'W' or 'S' press
ANGULAR_SPEED_STEP = 0.1  # rad/s per 'A' or 'D' press

# Publishing rate
PUBLISH_RATE_HZ = 10      # How often to publish cmd_vel (10 times per second)

# Keyboard input timeout
KEY_TIMEOUT = 0.1         # seconds to wait for key input


# =============================================================================
# HELP MESSAGE - Displayed when the node starts
# =============================================================================
HELP_MSG = """
╔══════════════════════════════════════════════════════╗
║         aBAJA Buggy - Keyboard Teleoperation         ║
║         Sairam Zenith Motors · eBAJA Team            ║
╠══════════════════════════════════════════════════════╣
║                                                      ║
║   Controls:                                          ║
║   ─────────                                          ║
║     W  :  Accelerate forward                         ║
║     S  :  Brake / Reverse                            ║
║     A  :  Steer left                                 ║
║     D  :  Steer right                                ║
║   SPACE:  Emergency STOP                             ║
║     Q  :  Quit                                       ║
║                                                      ║
║   Speed Limits:                                      ║
║     Linear:  {lin_max} m/s                           ║
║     Angular: {ang_max} rad/s                         ║
║                                                      ║
║   Step Size:                                         ║
║     Linear:  {lin_step} m/s per press                ║
║     Angular: {ang_step} rad/s per press              ║
║                                                      ║
╚══════════════════════════════════════════════════════╝
""".format(
    lin_max=MAX_LINEAR_SPEED,
    ang_max=MAX_ANGULAR_SPEED,
    lin_step=LINEAR_SPEED_STEP,
    ang_step=ANGULAR_SPEED_STEP
)


class KeyboardTeleop(Node):
    """
    ROS2 Node for keyboard-based teleoperation of the aBAJA buggy.
    
    This node reads keyboard input from the terminal and publishes
    Twist messages to control the vehicle's linear and angular velocity.
    """

    def __init__(self):
        """Initialize the keyboard teleop node."""
        super().__init__('abaja_keyboard_teleop')
        
        # Create publisher for velocity commands
        # /cmd_vel is the standard topic for robot velocity control
        self.publisher = self.create_publisher(
            Twist,       # Message type
            '/cmd_vel',  # Topic name
            10           # QoS queue size
        )
        
        # Current velocity state
        self.linear_speed = 0.0   # Current forward/backward speed (m/s)
        self.angular_speed = 0.0  # Current turning rate (rad/s)
        
        # Create a timer to publish at a fixed rate
        self.timer = self.create_timer(
            1.0 / PUBLISH_RATE_HZ, 
            self.publish_cmd_vel
        )
        
        # Log startup
        self.get_logger().info('aBAJA Keyboard Teleop started!')
        self.get_logger().info(f'Publishing to /cmd_vel at {PUBLISH_RATE_HZ} Hz')
        self.get_logger().info(f'Linear speed limit: {MAX_LINEAR_SPEED} m/s')
        self.get_logger().info(f'Angular speed limit: {MAX_ANGULAR_SPEED} rad/s')

    def publish_cmd_vel(self):
        """
        Publish the current velocity command to /cmd_vel.
        
        This is called by the timer at PUBLISH_RATE_HZ frequency.
        It creates a Twist message with the current speed values
        and publishes it.
        """
        msg = Twist()
        msg.linear.x = self.linear_speed    # Forward/backward
        msg.linear.y = 0.0                  # No lateral movement
        msg.linear.z = 0.0                  # No vertical movement
        msg.angular.x = 0.0                 # No roll
        msg.angular.y = 0.0                 # No pitch
        msg.angular.z = self.angular_speed   # Yaw (steering)
        self.publisher.publish(msg)

    def process_key(self, key):
        """
        Process a single keyboard input and update velocity.
        
        Args:
            key: The character pressed on the keyboard
            
        Returns:
            bool: True to continue, False to quit
        """
        if key in ('w', 'W'):
            # Accelerate forward
            self.linear_speed = min(
                self.linear_speed + LINEAR_SPEED_STEP, 
                MAX_LINEAR_SPEED
            )
            
        elif key in ('s', 'S'):
            # Brake / Reverse
            self.linear_speed = max(
                self.linear_speed - LINEAR_SPEED_STEP, 
                -MAX_LINEAR_SPEED
            )
            
        elif key in ('a', 'A'):
            # Steer left (positive angular velocity in ROS = counter-clockwise)
            self.angular_speed = min(
                self.angular_speed + ANGULAR_SPEED_STEP, 
                MAX_ANGULAR_SPEED
            )
            
        elif key in ('d', 'D'):
            # Steer right (negative angular velocity in ROS = clockwise)
            self.angular_speed = max(
                self.angular_speed - ANGULAR_SPEED_STEP, 
                -MAX_ANGULAR_SPEED
            )
            
        elif key == ' ':
            # Emergency stop - zero all velocities
            self.linear_speed = 0.0
            self.angular_speed = 0.0
            self.get_logger().warn('EMERGENCY STOP!')
            
        elif key in ('q', 'Q'):
            # Quit - send stop command first
            self.linear_speed = 0.0
            self.angular_speed = 0.0
            self.publish_cmd_vel()  # Send final stop command
            self.get_logger().info('Quitting teleop. Goodbye!')
            return False
        
        return True

    def print_status(self):
        """Print the current velocity status to the terminal."""
        # Create a visual speed bar
        lin_bar_len = int(abs(self.linear_speed) / MAX_LINEAR_SPEED * 10)
        ang_bar_len = int(abs(self.angular_speed) / MAX_ANGULAR_SPEED * 10)
        
        lin_direction = '▶' if self.linear_speed >= 0 else '◀'
        ang_direction = '↺' if self.angular_speed >= 0 else '↻'
        
        lin_bar = '█' * lin_bar_len + '░' * (10 - lin_bar_len)
        ang_bar = '█' * ang_bar_len + '░' * (10 - ang_bar_len)
        
        # Use \r to overwrite the same line
        status = (
            f"\r  {lin_direction} Linear: {self.linear_speed:+.2f} m/s [{lin_bar}]  "
            f"  {ang_direction} Angular: {self.angular_speed:+.2f} rad/s [{ang_bar}]  "
        )
        sys.stdout.write(status)
        sys.stdout.flush()


def get_key(settings, timeout=KEY_TIMEOUT):
    """
    Read a single keypress from the terminal.
    
    This function puts the terminal into raw mode to read individual
    key presses without requiring Enter. It uses select() for 
    non-blocking reads with a timeout.
    
    Args:
        settings: Original terminal settings (for restoration)
        timeout: How long to wait for input (seconds)
        
    Returns:
        str: The key character pressed, or empty string if timeout
    """
    tty.setraw(sys.stdin.fileno())
    
    # Wait for input with timeout using select()
    ready, _, _ = select.select([sys.stdin], [], [], timeout)
    
    if ready:
        key = sys.stdin.read(1)
    else:
        key = ''
    
    # Restore terminal settings after each read
    termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
    
    return key


def main(args=None):
    """
    Main entry point for the keyboard teleop node.
    
    Sets up terminal for raw input, creates the ROS2 node,
    and runs the main control loop.
    """
    # Save original terminal settings so we can restore them later
    # This is important! Without restoration, the terminal will be broken
    settings = termios.tcgetattr(sys.stdin)
    
    # Initialize ROS2
    rclpy.init(args=args)
    
    # Create the teleop node
    node = KeyboardTeleop()
    
    # Print the help message
    print(HELP_MSG)
    
    try:
        # Main control loop
        while rclpy.ok():
            # Read keyboard input (non-blocking with timeout)
            key = get_key(settings)
            
            if key:
                # Process the key and check if we should quit
                should_continue = node.process_key(key)
                
                if not should_continue:
                    break
                
                # Print current status
                node.print_status()
            
            # Process any pending ROS2 callbacks (like the timer)
            rclpy.spin_once(node, timeout_sec=0.01)
    
    except KeyboardInterrupt:
        # Handle Ctrl+C gracefully
        print('\n\n  Ctrl+C detected! Sending stop command...')
        
        # Send a stop command before exiting
        node.linear_speed = 0.0
        node.angular_speed = 0.0
        node.publish_cmd_vel()
    
    except Exception as e:
        print(f'\n\n  Error: {e}')
    
    finally:
        # IMPORTANT: Always restore terminal settings!
        # If we don't do this, the terminal will be in raw mode
        # and the user won't be able to type normally.
        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
        
        # Clean up ROS2 resources
        node.destroy_node()
        rclpy.shutdown()
        
        print('\n  aBAJA Teleop shut down cleanly.\n')


if __name__ == '__main__':
    main()
