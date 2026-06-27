// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from abaja_interfaces:msg/LaneMarking.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/lane_marking.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__LANE_MARKING__TRAITS_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__LANE_MARKING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "abaja_interfaces/msg/detail/lane_marking__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace abaja_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneMarking & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_lane_detected
  {
    out << "left_lane_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lane_detected, out);
    out << ", ";
  }

  // member: right_lane_detected
  {
    out << "right_lane_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lane_detected, out);
    out << ", ";
  }

  // member: left_lane_x
  {
    out << "left_lane_x: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lane_x, out);
    out << ", ";
  }

  // member: right_lane_x
  {
    out << "right_lane_x: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lane_x, out);
    out << ", ";
  }

  // member: lane_center_x
  {
    out << "lane_center_x: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_center_x, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneMarking & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_lane_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_lane_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lane_detected, out);
    out << "\n";
  }

  // member: right_lane_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_lane_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lane_detected, out);
    out << "\n";
  }

  // member: left_lane_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_lane_x: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lane_x, out);
    out << "\n";
  }

  // member: right_lane_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_lane_x: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lane_x, out);
    out << "\n";
  }

  // member: lane_center_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_center_x: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_center_x, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneMarking & msg, bool use_flow_style = false)
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
  const abaja_interfaces::msg::LaneMarking & msg,
  std::ostream & out, size_t indentation = 0)
{
  abaja_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use abaja_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const abaja_interfaces::msg::LaneMarking & msg)
{
  return abaja_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<abaja_interfaces::msg::LaneMarking>()
{
  return "abaja_interfaces::msg::LaneMarking";
}

template<>
inline const char * name<abaja_interfaces::msg::LaneMarking>()
{
  return "abaja_interfaces/msg/LaneMarking";
}

template<>
struct has_fixed_size<abaja_interfaces::msg::LaneMarking>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<abaja_interfaces::msg::LaneMarking>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<abaja_interfaces::msg::LaneMarking>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ABAJA_INTERFACES__MSG__DETAIL__LANE_MARKING__TRAITS_HPP_
