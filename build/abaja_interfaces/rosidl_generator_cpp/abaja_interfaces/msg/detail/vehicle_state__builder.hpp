// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abaja_interfaces:msg/VehicleState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/vehicle_state.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abaja_interfaces/msg/detail/vehicle_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abaja_interfaces
{

namespace msg
{

namespace builder
{

class Init_VehicleState_status_text
{
public:
  explicit Init_VehicleState_status_text(::abaja_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  ::abaja_interfaces::msg::VehicleState status_text(::abaja_interfaces::msg::VehicleState::_status_text_type arg)
  {
    msg_.status_text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abaja_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_emergency_stop
{
public:
  explicit Init_VehicleState_emergency_stop(::abaja_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_status_text emergency_stop(::abaja_interfaces::msg::VehicleState::_emergency_stop_type arg)
  {
    msg_.emergency_stop = std::move(arg);
    return Init_VehicleState_status_text(msg_);
  }

private:
  ::abaja_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_longitudinal_enabled
{
public:
  explicit Init_VehicleState_longitudinal_enabled(::abaja_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_emergency_stop longitudinal_enabled(::abaja_interfaces::msg::VehicleState::_longitudinal_enabled_type arg)
  {
    msg_.longitudinal_enabled = std::move(arg);
    return Init_VehicleState_emergency_stop(msg_);
  }

private:
  ::abaja_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_lateral_enabled
{
public:
  explicit Init_VehicleState_lateral_enabled(::abaja_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_longitudinal_enabled lateral_enabled(::abaja_interfaces::msg::VehicleState::_lateral_enabled_type arg)
  {
    msg_.lateral_enabled = std::move(arg);
    return Init_VehicleState_longitudinal_enabled(msg_);
  }

private:
  ::abaja_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_manual_mode
{
public:
  explicit Init_VehicleState_manual_mode(::abaja_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_lateral_enabled manual_mode(::abaja_interfaces::msg::VehicleState::_manual_mode_type arg)
  {
    msg_.manual_mode = std::move(arg);
    return Init_VehicleState_lateral_enabled(msg_);
  }

private:
  ::abaja_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_autonomous_mode
{
public:
  explicit Init_VehicleState_autonomous_mode(::abaja_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_manual_mode autonomous_mode(::abaja_interfaces::msg::VehicleState::_autonomous_mode_type arg)
  {
    msg_.autonomous_mode = std::move(arg);
    return Init_VehicleState_manual_mode(msg_);
  }

private:
  ::abaja_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_battery_voltage
{
public:
  explicit Init_VehicleState_battery_voltage(::abaja_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_autonomous_mode battery_voltage(::abaja_interfaces::msg::VehicleState::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_VehicleState_autonomous_mode(msg_);
  }

private:
  ::abaja_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_throttle_position
{
public:
  explicit Init_VehicleState_throttle_position(::abaja_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_battery_voltage throttle_position(::abaja_interfaces::msg::VehicleState::_throttle_position_type arg)
  {
    msg_.throttle_position = std::move(arg);
    return Init_VehicleState_battery_voltage(msg_);
  }

private:
  ::abaja_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_brake_position
{
public:
  explicit Init_VehicleState_brake_position(::abaja_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_throttle_position brake_position(::abaja_interfaces::msg::VehicleState::_brake_position_type arg)
  {
    msg_.brake_position = std::move(arg);
    return Init_VehicleState_throttle_position(msg_);
  }

private:
  ::abaja_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_steering_angle_deg
{
public:
  explicit Init_VehicleState_steering_angle_deg(::abaja_interfaces::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_brake_position steering_angle_deg(::abaja_interfaces::msg::VehicleState::_steering_angle_deg_type arg)
  {
    msg_.steering_angle_deg = std::move(arg);
    return Init_VehicleState_brake_position(msg_);
  }

private:
  ::abaja_interfaces::msg::VehicleState msg_;
};

class Init_VehicleState_speed_mps
{
public:
  Init_VehicleState_speed_mps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleState_steering_angle_deg speed_mps(::abaja_interfaces::msg::VehicleState::_speed_mps_type arg)
  {
    msg_.speed_mps = std::move(arg);
    return Init_VehicleState_steering_angle_deg(msg_);
  }

private:
  ::abaja_interfaces::msg::VehicleState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abaja_interfaces::msg::VehicleState>()
{
  return abaja_interfaces::msg::builder::Init_VehicleState_speed_mps();
}

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
