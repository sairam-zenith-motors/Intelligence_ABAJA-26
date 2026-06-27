// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abaja_interfaces:msg/LaneMarking.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/lane_marking.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__LANE_MARKING__BUILDER_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__LANE_MARKING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abaja_interfaces/msg/detail/lane_marking__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abaja_interfaces
{

namespace msg
{

namespace builder
{

class Init_LaneMarking_confidence
{
public:
  explicit Init_LaneMarking_confidence(::abaja_interfaces::msg::LaneMarking & msg)
  : msg_(msg)
  {}
  ::abaja_interfaces::msg::LaneMarking confidence(::abaja_interfaces::msg::LaneMarking::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abaja_interfaces::msg::LaneMarking msg_;
};

class Init_LaneMarking_lane_center_x
{
public:
  explicit Init_LaneMarking_lane_center_x(::abaja_interfaces::msg::LaneMarking & msg)
  : msg_(msg)
  {}
  Init_LaneMarking_confidence lane_center_x(::abaja_interfaces::msg::LaneMarking::_lane_center_x_type arg)
  {
    msg_.lane_center_x = std::move(arg);
    return Init_LaneMarking_confidence(msg_);
  }

private:
  ::abaja_interfaces::msg::LaneMarking msg_;
};

class Init_LaneMarking_right_lane_x
{
public:
  explicit Init_LaneMarking_right_lane_x(::abaja_interfaces::msg::LaneMarking & msg)
  : msg_(msg)
  {}
  Init_LaneMarking_lane_center_x right_lane_x(::abaja_interfaces::msg::LaneMarking::_right_lane_x_type arg)
  {
    msg_.right_lane_x = std::move(arg);
    return Init_LaneMarking_lane_center_x(msg_);
  }

private:
  ::abaja_interfaces::msg::LaneMarking msg_;
};

class Init_LaneMarking_left_lane_x
{
public:
  explicit Init_LaneMarking_left_lane_x(::abaja_interfaces::msg::LaneMarking & msg)
  : msg_(msg)
  {}
  Init_LaneMarking_right_lane_x left_lane_x(::abaja_interfaces::msg::LaneMarking::_left_lane_x_type arg)
  {
    msg_.left_lane_x = std::move(arg);
    return Init_LaneMarking_right_lane_x(msg_);
  }

private:
  ::abaja_interfaces::msg::LaneMarking msg_;
};

class Init_LaneMarking_right_lane_detected
{
public:
  explicit Init_LaneMarking_right_lane_detected(::abaja_interfaces::msg::LaneMarking & msg)
  : msg_(msg)
  {}
  Init_LaneMarking_left_lane_x right_lane_detected(::abaja_interfaces::msg::LaneMarking::_right_lane_detected_type arg)
  {
    msg_.right_lane_detected = std::move(arg);
    return Init_LaneMarking_left_lane_x(msg_);
  }

private:
  ::abaja_interfaces::msg::LaneMarking msg_;
};

class Init_LaneMarking_left_lane_detected
{
public:
  Init_LaneMarking_left_lane_detected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneMarking_right_lane_detected left_lane_detected(::abaja_interfaces::msg::LaneMarking::_left_lane_detected_type arg)
  {
    msg_.left_lane_detected = std::move(arg);
    return Init_LaneMarking_right_lane_detected(msg_);
  }

private:
  ::abaja_interfaces::msg::LaneMarking msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abaja_interfaces::msg::LaneMarking>()
{
  return abaja_interfaces::msg::builder::Init_LaneMarking_left_lane_detected();
}

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__LANE_MARKING__BUILDER_HPP_
