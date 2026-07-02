#!/usr/bin/env python3
"""
sim_camera_viewer_node.py - A simple image viewer for Gazebo simulation

This node subscribes to /camera/image_raw (which comes from Gazebo)
and displays it in a window using OpenCV.

It does NOT use cv2.VideoCapture() and does NOT attempt to open the
laptop's webcam. It is solely a viewer for the ROS image topic.

Usage:
  ros2 run abaja_perception sim_camera_viewer_node
"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
import cv2
from cv_bridge import CvBridge

class SimCameraViewerNode(Node):
    def __init__(self):
        super().__init__('sim_camera_viewer_node')
        
        # We only subscribe to the image topic
        self.sub = self.create_subscription(
            Image,
            '/camera/image_raw',
            self.image_callback,
            10
        )
        self.bridge = CvBridge()
        self.window_name = "aBAJA Simulated Camera View"
        
        self.get_logger().info("Simulated camera viewer started. Waiting for /camera/image_raw...")

    def image_callback(self, msg):
        try:
            # Convert ROS Image message to OpenCV format
            cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            
            # Display the image
            cv2.imshow(self.window_name, cv_image)
            cv2.waitKey(1)
        except Exception as e:
            self.get_logger().error(f"Error converting image: {e}")

    def destroy_node(self):
        cv2.destroyAllWindows()
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    node = SimCameraViewerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == '__main__':
    main()
