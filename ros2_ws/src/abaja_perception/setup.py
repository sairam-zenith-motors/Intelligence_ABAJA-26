from setuptools import find_packages, setup

package_name = 'abaja_perception'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='pavithra',
    maintainer_email='pavithra@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            # Real hardware USB/laptop camera (DO NOT run in simulation)
            'camera_node = abaja_perception.camera_node:main',
            # Object detection with YOLO (disabled until trained model available)
            'object_detection_node = abaja_perception.object_detection_node:main',
            # Display annotated detections (used with object_detection_node)
            'detection_display_node = abaja_perception.detection_display_node:main',
            'detection_recorder_node = abaja_perception.detection_recorder_node:main',
            # Simulation camera viewer: subscribes to /camera/image_raw from Gazebo
            # Does NOT open any webcam. Use this during Gazebo simulation.
            'sim_camera_viewer_node = abaja_perception.sim_camera_viewer_node:main',
        ],
    },
)
