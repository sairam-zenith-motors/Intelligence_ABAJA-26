from setuptools import find_packages, setup

package_name = 'abaja_dbw'

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
            'cmd_vel_to_dbw_node = abaja_dbw.cmd_vel_to_dbw_node:main',
            'dbw_manager_node = abaja_dbw.dbw_manager_node:main',
            'throttle_by_wire_node = abaja_dbw.throttle_by_wire_node:main',
            'brake_by_wire_node = abaja_dbw.brake_by_wire_node:main',
            'steer_by_wire_node = abaja_dbw.steer_by_wire_node:main',
            'dbw_to_cmd_vel_node = abaja_dbw.dbw_to_cmd_vel_node:main',
        ],
    },
)
