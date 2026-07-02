# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target abaja_interfaces::abaja_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${abaja_interfaces_TARGETS}.
if(abaja_interfaces_TARGETS AND NOT TARGET abaja_interfaces::abaja_interfaces)
  add_library(abaja_interfaces::abaja_interfaces INTERFACE IMPORTED)
  set_target_properties(abaja_interfaces::abaja_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${abaja_interfaces_TARGETS}")
endif()
