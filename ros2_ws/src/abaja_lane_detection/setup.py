from setuptools import find_packages, setup

package_name = 'abaja_lane_detection'

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
            'lane_detection_node = abaja_lane_detection.lane_detection_node:main',
            'lane_tracker_node = abaja_lane_detection.lane_tracker_node:main',
            'lka_controller_node = abaja_lane_detection.lka_controller_node:main',
        ],
    },
)
