from setuptools import find_packages, setup

package_name = 'abaja_aeb'

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
            'object_distance_estimator_node = abaja_aeb.object_distance_estimator_node:main',
            'ttc_calculator_node = abaja_aeb.ttc_calculator_node:main',
            'aeb_controller_node = abaja_aeb.aeb_controller_node:main',
            'mock_object_publisher_node = abaja_aeb.mock_object_publisher_node:main',
        ],
    },
)
