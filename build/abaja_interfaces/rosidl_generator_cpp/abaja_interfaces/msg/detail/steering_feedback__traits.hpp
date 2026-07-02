// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abaja_interfaces:msg/SteeringFeedback.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/steering_feedback.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__STEERING_FEEDBACK__TRAITS_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__STEERING_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abaja_interfaces/msg/detail/steering_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abaja_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SteeringFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_angle_deg
  {
    out << "target_angle_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.target_angle_deg, out);
    out << ", ";
  }

  // member: actual_angle_deg
  {
    out << "actual_angle_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_angle_deg, out);
    out << ", ";
  }

  // member: error_deg
  {
    out << "error_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_deg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SteeringFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_angle_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_angle_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.target_angle_deg, out);
    out << "\n";
  }

  // member: actual_angle_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actual_angle_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_angle_deg, out);
    out << "\n";
  }

  // member: error_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_deg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SteeringFeedback & msg, bool use_flow_style = false)
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
  const abaja_interfaces::msg::SteeringFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  abaja_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abaja_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const abaja_interfaces::msg::SteeringFeedback & msg)
{
  return abaja_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abaja_interfaces::msg::SteeringFeedback>()
{
  return "abaja_interfaces::msg::SteeringFeedback";
}

template<>
inline const char * name<abaja_interfaces::msg::SteeringFeedback>()
{
  return "abaja_interfaces/msg/SteeringFeedback";
}

template<>
struct has_fixed_size<abaja_interfaces::msg::SteeringFeedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<abaja_interfaces::msg::SteeringFeedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<abaja_interfaces::msg::SteeringFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABAJA_INTERFACES__MSG__DETAIL__STEERING_FEEDBACK__TRAITS_HPP_
