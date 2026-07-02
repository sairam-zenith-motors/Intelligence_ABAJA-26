"""
stage4_perception.launch.py - Perception Pipeline Launch

SIMULATION MODE (default):
  - Uses Gazebo vehicle-mounted camera via ros_gz_bridge → /camera/image_raw
  - Does NOT launch camera_node (no laptop/USB webcam)
  - Does NOT launch object_detection_node (no YOLO - model not yet trained)
  - Launches sim_camera_viewer_node to display the Gazebo camera feed

REAL HARDWARE MODE (explicit args required):
  - ros2 launch ... use_sim_camera:=false use_usb_camera:=true enable_object_detection:=true

LAUNCH ARGUMENTS:
  use_sim_time             (default: true)  - Use Gazebo clock
  use_sim_camera           (default: true)  - Use Gazebo camera (bridge provides /camera/image_raw)
  use_usb_camera           (default: false) - Launch camera_node to open USB/laptop webcam
  enable_object_detection  (default: false) - Launch object_detection_node with YOLO
  enable_camera_viewer     (default: true)  - Launch sim_camera_viewer_node to show camera feed

EXAMPLES:
  # Default simulation (Gazebo camera, no YOLO, shows camera viewer):
  ros2 launch abaja_bringup stage4_perception.launch.py

  # Enable YOLO when model is ready (still using Gazebo camera):
  ros2 launch abaja_bringup stage4_perception.launch.py enable_object_detection:=true

  # Real hardware with USB camera + YOLO:
  ros2 launch abaja_bringup stage4_perception.launch.py \\
    use_sim_camera:=false use_usb_camera:=true \\
    enable_object_detection:=true use_sim_time:=false
"""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():

    # =========================================================================
    # Launch Arguments
    # =========================================================================
    declare_use_sim_time = DeclareLaunchArgument(
        'use_sim_time', default_value='true',
        description='Use Gazebo simulation clock'
    )
    declare_use_sim_camera = DeclareLaunchArgument(
        'use_sim_camera', default_value='true',
        description='Use Gazebo vehicle-mounted camera (no webcam). '
                    'Set false only for real hardware.'
    )
    declare_use_usb_camera = DeclareLaunchArgument(
        'use_usb_camera', default_value='false',
        description='Launch camera_node to open USB/laptop webcam. '
                    'SIMULATION: must be false. HARDWARE: set true.'
    )
    declare_enable_object_detection = DeclareLaunchArgument(
        'enable_object_detection', default_value='false',
        description='Launch object_detection_node with YOLO. '
                    'Keep false until a trained model is available.'
    )
    declare_enable_camera_viewer = DeclareLaunchArgument(
        'enable_camera_viewer', default_value='true',
        description='Launch sim_camera_viewer_node to display /camera/image_raw'
    )

    use_sim_time             = LaunchConfiguration('use_sim_time')
    use_usb_camera           = LaunchConfiguration('use_usb_camera')
    enable_object_detection  = LaunchConfiguration('enable_object_detection')
    enable_camera_viewer     = LaunchConfiguration('enable_camera_viewer')

    sim_params = [{'use_sim_time': use_sim_time}]

    # =========================================================================
    # USB/Laptop Camera Node
    # DISABLED by default. ONLY runs when use_usb_camera:=true.
    # Do NOT enable during Gazebo simulation — opens /dev/video0 (laptop cam).
    # For real hardware deployment only.
    # =========================================================================
    usb_camera_node = Node(
        package='abaja_perception',
        executable='camera_node',
        name='camera_node',
        parameters=[{'camera_index': 0, 'use_sim_time': use_sim_time}],
        condition=IfCondition(use_usb_camera),
        output='screen'
    )

    # =========================================================================
    # Object Detection Node (YOLO)
    # DISABLED by default. No trained model available yet.
    # Enable with enable_object_detection:=true when model is ready.
    # =========================================================================
    object_detection_node = Node(
        package='abaja_perception',
        executable='object_detection_node',
        name='object_detection_node',
        parameters=[{'confidence_threshold': 0.5, 'use_sim_time': use_sim_time}],
        condition=IfCondition(enable_object_detection),
        output='screen'
    )

    # =========================================================================
    # Simulated Camera Viewer
    # Subscribes to /camera/image_raw (from Gazebo via ros_gz_bridge)
    # Displays in OpenCV window. Does NOT open any webcam.
    # =========================================================================
    sim_camera_viewer_node = Node(
        package='abaja_perception',
        executable='sim_camera_viewer_node',
        name='sim_camera_viewer_node',
        parameters=sim_params,
        condition=IfCondition(enable_camera_viewer),
        output='screen'
    )

    return LaunchDescription([
        declare_use_sim_time,
        declare_use_sim_camera,
        declare_use_usb_camera,
        declare_enable_object_detection,
        declare_enable_camera_viewer,

        # Laptop/USB webcam — OFF by default (simulation uses Gazebo camera)
        usb_camera_node,

        # YOLO object detection — OFF until trained model available
        object_detection_node,

        # Simulated camera viewer — ON by default
        sim_camera_viewer_node,
    ])
