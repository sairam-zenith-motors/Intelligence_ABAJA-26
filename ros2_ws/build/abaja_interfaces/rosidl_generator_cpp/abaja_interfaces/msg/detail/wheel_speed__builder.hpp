// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abaja_interfaces:msg/WheelSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/wheel_speed.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__WHEEL_SPEED__BUILDER_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__WHEEL_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abaja_interfaces/msg/detail/wheel_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abaja_interfaces
{

namespace msg
{

namespace builder
{

class Init_WheelSpeed_average_speed
{
public:
  explicit Init_WheelSpeed_average_speed(::abaja_interfaces::msg::WheelSpeed & msg)
  : msg_(msg)
  {}
  ::abaja_interfaces::msg::WheelSpeed average_speed(::abaja_interfaces::msg::WheelSpeed::_average_speed_type arg)
  {
    msg_.average_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abaja_interfaces::msg::WheelSpeed msg_;
};

class Init_WheelSpeed_rear_right
{
public:
  explicit Init_WheelSpeed_rear_right(::abaja_interfaces::msg::WheelSpeed & msg)
  : msg_(msg)
  {}
  Init_WheelSpeed_average_speed rear_right(::abaja_interfaces::msg::WheelSpeed::_rear_right_type arg)
  {
    msg_.rear_right = std::move(arg);
    return Init_WheelSpeed_average_speed(msg_);
  }

private:
  ::abaja_interfaces::msg::WheelSpeed msg_;
};

class Init_WheelSpeed_rear_left
{
public:
  explicit Init_WheelSpeed_rear_left(::abaja_interfaces::msg::WheelSpeed & msg)
  : msg_(msg)
  {}
  Init_WheelSpeed_rear_right rear_left(::abaja_interfaces::msg::WheelSpeed::_rear_left_type arg)
  {
    msg_.rear_left = std::move(arg);
    return Init_WheelSpeed_rear_right(msg_);
  }

private:
  ::abaja_interfaces::msg::WheelSpeed msg_;
};

class Init_WheelSpeed_front_right
{
public:
  explicit Init_WheelSpeed_front_right(::abaja_interfaces::msg::WheelSpeed & msg)
  : msg_(msg)
  {}
  Init_WheelSpeed_rear_left front_right(::abaja_interfaces::msg::WheelSpeed::_front_right_type arg)
  {
    msg_.front_right = std::move(arg);
    return Init_WheelSpeed_rear_left(msg_);
  }

private:
  ::abaja_interfaces::msg::WheelSpeed msg_;
};

class Init_WheelSpeed_front_left
{
public:
  Init_WheelSpeed_front_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelSpeed_front_right front_left(::abaja_interfaces::msg::WheelSpeed::_front_left_type arg)
  {
    msg_.front_left = std::move(arg);
    return Init_WheelSpeed_front_right(msg_);
  }

private:
  ::abaja_interfaces::msg::WheelSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abaja_interfaces::msg::WheelSpeed>()
{
  return abaja_interfaces::msg::builder::Init_WheelSpeed_front_left();
}

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__WHEEL_SPEED__BUILDER_HPP_
