// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abaja_interfaces:msg/VehicleState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/vehicle_state.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abaja_interfaces/msg/detail/vehicle_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abaja_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleState & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed_mps
  {
    out << "speed_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_mps, out);
    out << ", ";
  }

  // member: steering_angle_deg
  {
    out << "steering_angle_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle_deg, out);
    out << ", ";
  }

  // member: brake_position
  {
    out << "brake_position: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_position, out);
    out << ", ";
  }

  // member: throttle_position
  {
    out << "throttle_position: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_position, out);
    out << ", ";
  }

  // member: battery_voltage
  {
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << ", ";
  }

  // member: autonomous_mode
  {
    out << "autonomous_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.autonomous_mode, out);
    out << ", ";
  }

  // member: manual_mode
  {
    out << "manual_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.manual_mode, out);
    out << ", ";
  }

  // member: lateral_enabled
  {
    out << "lateral_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_enabled, out);
    out << ", ";
  }

  // member: longitudinal_enabled
  {
    out << "longitudinal_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_enabled, out);
    out << ", ";
  }

  // member: emergency_stop
  {
    out << "emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop, out);
    out << ", ";
  }

  // member: status_text
  {
    out << "status_text: ";
    rosidl_generator_traits::value_to_yaml(msg.status_text, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_mps, out);
    out << "\n";
  }

  // member: steering_angle_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle_deg, out);
    out << "\n";
  }

  // member: brake_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_position: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_position, out);
    out << "\n";
  }

  // member: throttle_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_position: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_position, out);
    out << "\n";
  }

  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }

  // member: autonomous_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autonomous_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.autonomous_mode, out);
    out << "\n";
  }

  // member: manual_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manual_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.manual_mode, out);
    out << "\n";
  }

  // member: lateral_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_enabled, out);
    out << "\n";
  }

  // member: longitudinal_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.longitudinal_enabled, out);
    out << "\n";
  }

  // member: emergency_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop, out);
    out << "\n";
  }

  // member: status_text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_text: ";
    rosidl_generator_traits::value_to_yaml(msg.status_text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace abaja_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use abaja_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const abaja_interfaces::msg::VehicleState & msg,
  std::ostream & out, size_t indentation = 0)
{
  abaja_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abaja_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const abaja_interfaces::msg::VehicleState & msg)
{
  return abaja_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abaja_interfaces::msg::VehicleState>()
{
  return "abaja_interfaces::msg::VehicleState";
}

template<>
inline const char * name<abaja_interfaces::msg::VehicleState>()
{
  return "abaja_interfaces/msg/VehicleState";
}

template<>
struct has_fixed_size<abaja_interfaces::msg::VehicleState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<abaja_interfaces::msg::VehicleState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<abaja_interfaces::msg::VehicleState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABAJA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_
