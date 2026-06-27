# ==============================================================================
# CMakeLists.txt for abaja_description
# 
# This is a CMake-based ROS2 package that installs URDF/XACRO model files,
# launch files, RViz config, and mesh placeholders for the aBAJA buggy.
# ==============================================================================
cmake_minimum_required(VERSION 3.8)
project(abaja_description)

# Find ament_cmake build system
find_package(ament_cmake REQUIRED)

# ==============================================================================
# Install directories - these make the files available after 'colcon build'
# ==============================================================================

# Install URDF/XACRO model files
install(DIRECTORY urdf/
  DESTINATION share/${PROJECT_NAME}/urdf
)

# Install launch files
install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

# Install RViz configuration files
install(DIRECTORY rviz/
  DESTINATION share/${PROJECT_NAME}/rviz
)

# Install mesh files (placeholder for future custom meshes)
install(DIRECTORY meshes/
  DESTINATION share/${PROJECT_NAME}/meshes
)

# ==============================================================================
# Finalize ament package
# ==============================================================================
ament_package()
