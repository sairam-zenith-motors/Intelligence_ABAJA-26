// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abaja_interfaces:msg/DbwCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/dbw_cmd.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__DBW_CMD__TRAITS_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__DBW_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abaja_interfaces/msg/detail/dbw_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abaja_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DbwCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_speed_mps
  {
    out << "target_speed_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.target_speed_mps, out);
    out << ", ";
  }

  // member: steering_angle_deg
  {
    out << "steering_angle_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle_deg, out);
    out << ", ";
  }

  // member: throttle_percent
  {
    out << "throttle_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_percent, out);
    out << ", ";
  }

  // member: brake_percent
  {
    out << "brake_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_percent, out);
    out << ", ";
  }

  // member: enable_throttle
  {
    out << "enable_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_throttle, out);
    out << ", ";
  }

  // member: enable_brake
  {
    out << "enable_brake: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_brake, out);
    out << ", ";
  }

  // member: enable_steering
  {
    out << "enable_steering: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_steering, out);
    out << ", ";
  }

  // member: emergency_stop
  {
    out << "emergency_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.emergency_stop, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DbwCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_speed_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_speed_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.target_speed_mps, out);
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

  // member: throttle_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_percent, out);
    out << "\n";
  }

  // member: brake_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_percent, out);
    out << "\n";
  }

  // member: enable_throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_throttle, out);
    out << "\n";
  }

  // member: enable_brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_brake: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_brake, out);
    out << "\n";
  }

  // member: enable_steering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_steering: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_steering, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DbwCmd & msg, bool use_flow_style = false)
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
  const abaja_interfaces::msg::DbwCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  abaja_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abaja_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const abaja_interfaces::msg::DbwCmd & msg)
{
  return abaja_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abaja_interfaces::msg::DbwCmd>()
{
  return "abaja_interfaces::msg::DbwCmd";
}

template<>
inline const char * name<abaja_interfaces::msg::DbwCmd>()
{
  return "abaja_interfaces/msg/DbwCmd";
}

template<>
struct has_fixed_size<abaja_interfaces::msg::DbwCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<abaja_interfaces::msg::DbwCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<abaja_interfaces::msg::DbwCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABAJA_INTERFACES__MSG__DETAIL__DBW_CMD__TRAITS_HPP_
