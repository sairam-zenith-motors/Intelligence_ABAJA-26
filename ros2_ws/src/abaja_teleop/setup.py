from setuptools import setup

package_name = 'abaja_teleop'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    data_files=[
        # Register package with ament index
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        # Install package.xml
        ('share/' + package_name, ['package.xml']),
        # Install launch files
        ('share/' + package_name + '/launch', ['launch/teleop.launch.py']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='aBAJA Team',
    maintainer_email='team@abaja.com',
    description='Keyboard teleoperation node for the aBAJA autonomous buggy',
    license='MIT',
    entry_points={
        'console_scripts': [
            # This creates the 'keyboard_teleop' command that you can run with:
            # ros2 run abaja_teleop keyboard_teleop
            'keyboard_teleop = abaja_teleop.keyboard_teleop:main',
            # Simulation controller to translate /cmd_vel to /joint_states
            'sim_controller = abaja_teleop.sim_controller:main',
        ],
    },
)
