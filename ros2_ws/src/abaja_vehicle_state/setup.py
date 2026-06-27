from setuptools import find_packages, setup

package_name = 'abaja_vehicle_state'

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
            'vehicle_state_node = abaja_vehicle_state.vehicle_state_node:main',
            'wheel_speed_node = abaja_vehicle_state.wheel_speed_node:main',
            'steering_feedback_node = abaja_vehicle_state.steering_feedback_node:main',
            'battery_monitor_node = abaja_vehicle_state.battery_monitor_node:main',
            'mode_status_node = abaja_vehicle_state.mode_status_node:main',
            'vehicle_dashboard_node = abaja_vehicle_state.vehicle_dashboard_node:main',
        ],
    },
)
