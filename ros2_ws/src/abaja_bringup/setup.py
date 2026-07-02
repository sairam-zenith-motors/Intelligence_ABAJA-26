import os
from glob import glob
from setuptools import setup

package_name = 'abaja_bringup'

setup(
    name=package_name,
    version='0.2.0',
    packages=[package_name],
    data_files=[
        # Register package with ament index
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        # Install package.xml
        ('share/' + package_name, ['package.xml']),
        # Install all launch files
        (os.path.join('share', package_name, 'launch'),
            glob('launch/*.launch.py')),
        # Install all config/YAML files (slam, nav2, waypoints, traffic signal)
        (os.path.join('share', package_name, 'config'),
            glob('config/*.yaml')),
        # Install maps directory (for saved SLAM maps)
        (os.path.join('share', package_name, 'maps'),
            glob('maps/*') if os.path.exists('maps') else []),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='aBAJA Team',
    maintainer_email='team@abaja.com',
    description='Bringup launch files for the aBAJA autonomous buggy',
    license='MIT',
    entry_points={
        'console_scripts': [],
    },
)
