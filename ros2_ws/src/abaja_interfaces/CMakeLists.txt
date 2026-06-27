cmake_minimum_required(VERSION 3.8)
project(abaja_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/ControlCmd.msg"
  "msg/VehicleState.msg"
  "msg/WheelSpeed.msg"
  "msg/SteeringFeedback.msg"
  "msg/BatteryStatus.msg"
  "msg/ModeStatus.msg"
  "msg/DbwCmd.msg"
  "msg/DbwStatus.msg"
  "msg/DetectedObject.msg"
  "msg/DetectedObjectArray.msg"
  "msg/LaneMarking.msg"
  "msg/LaneState.msg"
  "msg/ObjectDistance.msg"
  "msg/ObjectDistanceArray.msg"
  "msg/TTCStatus.msg"
  "msg/AEBStatus.msg"
  "msg/SafetyState.msg"
  DEPENDENCIES std_msgs
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
