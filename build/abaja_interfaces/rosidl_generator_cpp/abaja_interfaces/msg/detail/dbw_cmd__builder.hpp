// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abaja_interfaces:msg/DbwCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/dbw_cmd.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__DBW_CMD__BUILDER_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__DBW_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abaja_interfaces/msg/detail/dbw_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abaja_interfaces
{

namespace msg
{

namespace builder
{

class Init_DbwCmd_emergency_stop
{
public:
  explicit Init_DbwCmd_emergency_stop(::abaja_interfaces::msg::DbwCmd & msg)
  : msg_(msg)
  {}
  ::abaja_interfaces::msg::DbwCmd emergency_stop(::abaja_interfaces::msg::DbwCmd::_emergency_stop_type arg)
  {
    msg_.emergency_stop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abaja_interfaces::msg::DbwCmd msg_;
};

class Init_DbwCmd_enable_steering
{
public:
  explicit Init_DbwCmd_enable_steering(::abaja_interfaces::msg::DbwCmd & msg)
  : msg_(msg)
  {}
  Init_DbwCmd_emergency_stop enable_steering(::abaja_interfaces::msg::DbwCmd::_enable_steering_type arg)
  {
    msg_.enable_steering = std::move(arg);
    return Init_DbwCmd_emergency_stop(msg_);
  }

private:
  ::abaja_interfaces::msg::DbwCmd msg_;
};

class Init_DbwCmd_enable_brake
{
public:
  explicit Init_DbwCmd_enable_brake(::abaja_interfaces::msg::DbwCmd & msg)
  : msg_(msg)
  {}
  Init_DbwCmd_enable_steering enable_brake(::abaja_interfaces::msg::DbwCmd::_enable_brake_type arg)
  {
    msg_.enable_brake = std::move(arg);
    return Init_DbwCmd_enable_steering(msg_);
  }

private:
  ::abaja_interfaces::msg::DbwCmd msg_;
};

class Init_DbwCmd_enable_throttle
{
public:
  explicit Init_DbwCmd_enable_throttle(::abaja_interfaces::msg::DbwCmd & msg)
  : msg_(msg)
  {}
  Init_DbwCmd_enable_brake enable_throttle(::abaja_interfaces::msg::DbwCmd::_enable_throttle_type arg)
  {
    msg_.enable_throttle = std::move(arg);
    return Init_DbwCmd_enable_brake(msg_);
  }

private:
  ::abaja_interfaces::msg::DbwCmd msg_;
};

class Init_DbwCmd_brake_percent
{
public:
  explicit Init_DbwCmd_brake_percent(::abaja_interfaces::msg::DbwCmd & msg)
  : msg_(msg)
  {}
  Init_DbwCmd_enable_throttle brake_percent(::abaja_interfaces::msg::DbwCmd::_brake_percent_type arg)
  {
    msg_.brake_percent = std::move(arg);
    return Init_DbwCmd_enable_throttle(msg_);
  }

private:
  ::abaja_interfaces::msg::DbwCmd msg_;
};

class Init_DbwCmd_throttle_percent
{
public:
  explicit Init_DbwCmd_throttle_percent(::abaja_interfaces::msg::DbwCmd & msg)
  : msg_(msg)
  {}
  Init_DbwCmd_brake_percent throttle_percent(::abaja_interfaces::msg::DbwCmd::_throttle_percent_type arg)
  {
    msg_.throttle_percent = std::move(arg);
    return Init_DbwCmd_brake_percent(msg_);
  }

private:
  ::abaja_interfaces::msg::DbwCmd msg_;
};

class Init_DbwCmd_steering_angle_deg
{
public:
  explicit Init_DbwCmd_steering_angle_deg(::abaja_interfaces::msg::DbwCmd & msg)
  : msg_(msg)
  {}
  Init_DbwCmd_throttle_percent steering_angle_deg(::abaja_interfaces::msg::DbwCmd::_steering_angle_deg_type arg)
  {
    msg_.steering_angle_deg = std::move(arg);
    return Init_DbwCmd_throttle_percent(msg_);
  }

private:
  ::abaja_interfaces::msg::DbwCmd msg_;
};

class Init_DbwCmd_target_speed_mps
{
public:
  Init_DbwCmd_target_speed_mps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DbwCmd_steering_angle_deg target_speed_mps(::abaja_interfaces::msg::DbwCmd::_target_speed_mps_type arg)
  {
    msg_.target_speed_mps = std::move(arg);
    return Init_DbwCmd_steering_angle_deg(msg_);
  }

private:
  ::abaja_interfaces::msg::DbwCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abaja_interfaces::msg::DbwCmd>()
{
  return abaja_interfaces::msg::builder::Init_DbwCmd_target_speed_mps();
}

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__DBW_CMD__BUILDER_HPP_
