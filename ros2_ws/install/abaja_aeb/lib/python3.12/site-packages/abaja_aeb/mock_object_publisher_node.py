#!/usr/bin/env python3
"""
mock_object_publisher_node.py — Simulated Obstacle Publisher for AEB Testing

PURPOSE:
  Publishes fake DetectedObjectArray messages so the AEB pipeline
  (object_distance_estimator → ttc_calculator → aeb_controller → control_mux)
  can be tested in simulation WITHOUT a real camera or YOLOv8 model.

TOPICS PUBLISHED:
  /detections  [abaja_interfaces/msg/DetectedObjectArray]

PARAMETERS:
  object_distance_m  (float, default 20.0) — simulated obstacle distance in meters
  object_class       (str,   default 'car') — COCO class name of the obstacle
  publish_hz         (float, default 10.0)  — publish rate
  enabled            (bool,  default True)  — set False to pause publishing

USAGE (ROS 2):
  # No obstacle (safe — AEB inactive):
  ros2 run abaja_aeb mock_object_publisher_node

  # Close obstacle → AEB warning:
  ros2 run abaja_aeb mock_object_publisher_node --ros-args -p object_distance_m:=7.0

  # Emergency distance → AEB full brake:
  ros2 run abaja_aeb mock_object_publisher_node --ros-args -p object_distance_m:=3.0

NOTES:
  - SIMULATION ONLY. Remove from production launch files.
  - Pixel bounding box is computed from the distance and assumed object height
    using the pinhole model (inverse of object_distance_estimator_node.py):
      pixel_height = (real_height * focal_length) / distance
"""

import rclpy
from rclpy.node import Node
from abaja_interfaces.msg import DetectedObject, DetectedObjectArray
from std_msgs.msg import Header


# Pinhole camera model constants (must match object_distance_estimator_node.py)
FOCAL_LENGTH_PX = 500.0
IMAGE_WIDTH = 640
IMAGE_HEIGHT = 480

ASSUMED_HEIGHTS = {
    'person':     1.7,
    'car':        1.5,
    'truck':      3.0,
    'bicycle':    1.0,
    'stop sign':  0.8,
}


class MockObjectPublisherNode(Node):
    """Publishes simulated DetectedObjectArray for AEB pipeline testing."""

    def __init__(self):
        super().__init__('mock_object_publisher_node')

        # Parameters
        self.declare_parameter('object_distance_m', 20.0)
        self.declare_parameter('object_class', 'car')
        self.declare_parameter('publish_hz', 10.0)
        self.declare_parameter('enabled', True)

        self.distance_m = self.get_parameter('object_distance_m').value
        self.obj_class  = self.get_parameter('object_class').value
        self.hz         = self.get_parameter('publish_hz').value
        self.enabled    = self.get_parameter('enabled').value

        # Publisher
        self.pub = self.create_publisher(DetectedObjectArray, '/detections', 10)

        # Timer
        self.timer = self.create_timer(1.0 / self.hz, self.timer_callback)

        self.get_logger().info(
            f'[SIMULATION ONLY] Mock Object Publisher started.\n'
            f'  Publishing "{self.obj_class}" at {self.distance_m:.1f} m '
            f'@ {self.hz:.0f} Hz → /detections\n'
            f'  Change distance: ros2 param set /mock_object_publisher_node object_distance_m <value>'
        )

    def timer_callback(self):
        # Allow runtime parameter updates
        self.distance_m = self.get_parameter('object_distance_m').value
        self.obj_class  = self.get_parameter('object_class').value
        self.enabled    = self.get_parameter('enabled').value

        if not self.enabled:
            # Publish empty array (no obstacles) when disabled
            msg = DetectedObjectArray()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.header.frame_id = 'camera_optical_frame'
            self.pub.publish(msg)
            return

        # Compute pixel bounding box from distance using pinhole model
        real_h = ASSUMED_HEIGHTS.get(self.obj_class, 1.0)
        if self.distance_m > 0.01:
            pixel_h = (real_h * FOCAL_LENGTH_PX) / self.distance_m
        else:
            pixel_h = IMAGE_HEIGHT  # fills frame if extremely close

        pixel_h = min(pixel_h, IMAGE_HEIGHT)

        # Centre the box in the image
        cx = IMAGE_WIDTH // 2
        cy = IMAGE_HEIGHT // 2
        y_min = int(cy - pixel_h / 2)
        y_max = int(cy + pixel_h / 2)
        x_min = int(cx - pixel_h * 0.4)   # approximate aspect ratio
        x_max = int(cx + pixel_h * 0.4)

        # Clamp to image bounds
        y_min = max(0, y_min)
        y_max = min(IMAGE_HEIGHT, y_max)
        x_min = max(0, x_min)
        x_max = min(IMAGE_WIDTH, x_max)

        obj = DetectedObject()
        obj.class_name  = self.obj_class
        obj.confidence  = 0.95
        obj.x_min = x_min
        obj.y_min = y_min
        obj.x_max = x_max
        obj.y_max = y_max

        msg = DetectedObjectArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = 'camera_optical_frame'
        msg.objects.append(obj)

        self.pub.publish(msg)

        self.get_logger().debug(
            f'Published mock "{self.obj_class}" @ {self.distance_m:.1f} m '
            f'(box: {x_min},{y_min} → {x_max},{y_max})'
        )


def main(args=None):
    rclpy.init(args=args)
    node = MockObjectPublisherNode()
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
