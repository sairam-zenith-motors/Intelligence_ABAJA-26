import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'abaja_planning'

setup(
    name=package_name,
    version='0.1.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='aBAJA Team',
    maintainer_email='team@abaja.com',
    description='Path planning, Nav2 integration, waypoint following, traffic signal logic',
    license='MIT',
    extras_require={
        'test': ['pytest'],
    },
    entry_points={
        'console_scripts': [
            # Existing
            'path_planner_node = abaja_planning.path_planner_node:main',
            # Nav2 bridge: converts Nav2 /cmd_vel_nav → /nav_control_cmd (ControlCmd)
            'nav_cmd_to_control_cmd_node = abaja_planning.nav_cmd_to_control_cmd_node:main',
            # Waypoint mission: loads YAML waypoints, sends to Nav2 /follow_waypoints
            'waypoint_mission_node = abaja_planning.waypoint_mission_node:main',
            # Traffic light simulation: publishes GREEN/YELLOW/RED cycle
            'traffic_light_sim_node = abaja_planning.traffic_light_sim_node:main',
            # Traffic signal logic: subscribes /odom + /traffic_light_state → /traffic_signal_stop
            'traffic_signal_logic_node = abaja_planning.traffic_signal_logic_node:main',
        ],
    },
)
