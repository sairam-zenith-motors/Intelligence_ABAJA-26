// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abaja_interfaces:msg/SteeringFeedback.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/steering_feedback.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__STEERING_FEEDBACK__BUILDER_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__STEERING_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abaja_interfaces/msg/detail/steering_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abaja_interfaces
{

namespace msg
{

namespace builder
{

class Init_SteeringFeedback_error_deg
{
public:
  explicit Init_SteeringFeedback_error_deg(::abaja_interfaces::msg::SteeringFeedback & msg)
  : msg_(msg)
  {}
  ::abaja_interfaces::msg::SteeringFeedback error_deg(::abaja_interfaces::msg::SteeringFeedback::_error_deg_type arg)
  {
    msg_.error_deg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abaja_interfaces::msg::SteeringFeedback msg_;
};

class Init_SteeringFeedback_actual_angle_deg
{
public:
  explicit Init_SteeringFeedback_actual_angle_deg(::abaja_interfaces::msg::SteeringFeedback & msg)
  : msg_(msg)
  {}
  Init_SteeringFeedback_error_deg actual_angle_deg(::abaja_interfaces::msg::SteeringFeedback::_actual_angle_deg_type arg)
  {
    msg_.actual_angle_deg = std::move(arg);
    return Init_SteeringFeedback_error_deg(msg_);
  }

private:
  ::abaja_interfaces::msg::SteeringFeedback msg_;
};

class Init_SteeringFeedback_target_angle_deg
{
public:
  Init_SteeringFeedback_target_angle_deg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringFeedback_actual_angle_deg target_angle_deg(::abaja_interfaces::msg::SteeringFeedback::_target_angle_deg_type arg)
  {
    msg_.target_angle_deg = std::move(arg);
    return Init_SteeringFeedback_actual_angle_deg(msg_);
  }

private:
  ::abaja_interfaces::msg::SteeringFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abaja_interfaces::msg::SteeringFeedback>()
{
  return abaja_interfaces::msg::builder::Init_SteeringFeedback_target_angle_deg();
}

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__STEERING_FEEDBACK__BUILDER_HPP_
