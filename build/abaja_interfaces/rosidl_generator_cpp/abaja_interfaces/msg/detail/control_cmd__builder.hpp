// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abaja_interfaces:msg/ControlCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/control_cmd.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__CONTROL_CMD__BUILDER_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__CONTROL_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abaja_interfaces/msg/detail/control_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abaja_interfaces
{

namespace msg
{

namespace builder
{

class Init_ControlCmd_source
{
public:
  explicit Init_ControlCmd_source(::abaja_interfaces::msg::ControlCmd & msg)
  : msg_(msg)
  {}
  ::abaja_interfaces::msg::ControlCmd source(::abaja_interfaces::msg::ControlCmd::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abaja_interfaces::msg::ControlCmd msg_;
};

class Init_ControlCmd_emergency_stop
{
public:
  explicit Init_ControlCmd_emergency_stop(::abaja_interfaces::msg::ControlCmd & msg)
  : msg_(msg)
  {}
  Init_ControlCmd_source emergency_stop(::abaja_interfaces::msg::ControlCmd::_emergency_stop_type arg)
  {
    msg_.emergency_stop = std::move(arg);
    return Init_ControlCmd_source(msg_);
  }

private:
  ::abaja_interfaces::msg::ControlCmd msg_;
};

class Init_ControlCmd_brake_percent
{
public:
  explicit Init_ControlCmd_brake_percent(::abaja_interfaces::msg::ControlCmd & msg)
  : msg_(msg)
  {}
  Init_ControlCmd_emergency_stop brake_percent(::abaja_interfaces::msg::ControlCmd::_brake_percent_type arg)
  {
    msg_.brake_percent = std::move(arg);
    return Init_ControlCmd_emergency_stop(msg_);
  }

private:
  ::abaja_interfaces::msg::ControlCmd msg_;
};

class Init_ControlCmd_throttle_percent
{
public:
  explicit Init_ControlCmd_throttle_percent(::abaja_interfaces::msg::ControlCmd & msg)
  : msg_(msg)
  {}
  Init_ControlCmd_brake_percent throttle_percent(::abaja_interfaces::msg::ControlCmd::_throttle_percent_type arg)
  {
    msg_.throttle_percent = std::move(arg);
    return Init_ControlCmd_brake_percent(msg_);
  }

private:
  ::abaja_interfaces::msg::ControlCmd msg_;
};

class Init_ControlCmd_steering_angle_deg
{
public:
  explicit Init_ControlCmd_steering_angle_deg(::abaja_interfaces::msg::ControlCmd & msg)
  : msg_(msg)
  {}
  Init_ControlCmd_throttle_percent steering_angle_deg(::abaja_interfaces::msg::ControlCmd::_steering_angle_deg_type arg)
  {
    msg_.steering_angle_deg = std::move(arg);
    return Init_ControlCmd_throttle_percent(msg_);
  }

private:
  ::abaja_interfaces::msg::ControlCmd msg_;
};

class Init_ControlCmd_target_speed_mps
{
public:
  Init_ControlCmd_target_speed_mps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlCmd_steering_angle_deg target_speed_mps(::abaja_interfaces::msg::ControlCmd::_target_speed_mps_type arg)
  {
    msg_.target_speed_mps = std::move(arg);
    return Init_ControlCmd_steering_angle_deg(msg_);
  }

private:
  ::abaja_interfaces::msg::ControlCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abaja_interfaces::msg::ControlCmd>()
{
  return abaja_interfaces::msg::builder::Init_ControlCmd_target_speed_mps();
}

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__CONTROL_CMD__BUILDER_HPP_
