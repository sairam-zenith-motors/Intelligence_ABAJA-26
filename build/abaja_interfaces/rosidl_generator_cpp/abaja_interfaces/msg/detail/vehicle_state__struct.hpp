// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abaja_interfaces:msg/VehicleState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/vehicle_state.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abaja_interfaces__msg__VehicleState __attribute__((deprecated))
#else
# define DEPRECATED__abaja_interfaces__msg__VehicleState __declspec(deprecated)
#endif

namespace abaja_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleState_
{
  using Type = VehicleState_<ContainerAllocator>;

  explicit VehicleState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_mps = 0.0f;
      this->steering_angle_deg = 0.0f;
      this->brake_position = 0.0f;
      this->throttle_position = 0.0f;
      this->battery_voltage = 0.0f;
      this->autonomous_mode = false;
      this->manual_mode = false;
      this->lateral_enabled = false;
      this->longitudinal_enabled = false;
      this->emergency_stop = false;
      this->status_text = "";
    }
  }

  explicit VehicleState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status_text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_mps = 0.0f;
      this->steering_angle_deg = 0.0f;
      this->brake_position = 0.0f;
      this->throttle_position = 0.0f;
      this->battery_voltage = 0.0f;
      this->autonomous_mode = false;
      this->manual_mode = false;
      this->lateral_enabled = false;
      this->longitudinal_enabled = false;
      this->emergency_stop = false;
      this->status_text = "";
    }
  }

  // field types and members
  using _speed_mps_type =
    float;
  _speed_mps_type speed_mps;
  using _steering_angle_deg_type =
    float;
  _steering_angle_deg_type steering_angle_deg;
  using _brake_position_type =
    float;
  _brake_position_type brake_position;
  using _throttle_position_type =
    float;
  _throttle_position_type throttle_position;
  using _battery_voltage_type =
    float;
  _battery_voltage_type battery_voltage;
  using _autonomous_mode_type =
    bool;
  _autonomous_mode_type autonomous_mode;
  using _manual_mode_type =
    bool;
  _manual_mode_type manual_mode;
  using _lateral_enabled_type =
    bool;
  _lateral_enabled_type lateral_enabled;
  using _longitudinal_enabled_type =
    bool;
  _longitudinal_enabled_type longitudinal_enabled;
  using _emergency_stop_type =
    bool;
  _emergency_stop_type emergency_stop;
  using _status_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_text_type status_text;

  // setters for named parameter idiom
  Type & set__speed_mps(
    const float & _arg)
  {
    this->speed_mps = _arg;
    return *this;
  }
  Type & set__steering_angle_deg(
    const float & _arg)
  {
    this->steering_angle_deg = _arg;
    return *this;
  }
  Type & set__brake_position(
    const float & _arg)
  {
    this->brake_position = _arg;
    return *this;
  }
  Type & set__throttle_position(
    const float & _arg)
  {
    this->throttle_position = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const float & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__autonomous_mode(
    const bool & _arg)
  {
    this->autonomous_mode = _arg;
    return *this;
  }
  Type & set__manual_mode(
    const bool & _arg)
  {
    this->manual_mode = _arg;
    return *this;
  }
  Type & set__lateral_enabled(
    const bool & _arg)
  {
    this->lateral_enabled = _arg;
    return *this;
  }
  Type & set__longitudinal_enabled(
    const bool & _arg)
  {
    this->longitudinal_enabled = _arg;
    return *this;
  }
  Type & set__emergency_stop(
    const bool & _arg)
  {
    this->emergency_stop = _arg;
    return *this;
  }
  Type & set__status_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status_text = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abaja_interfaces::msg::VehicleState_<ContainerAllocator> *;
  using ConstRawPtr =
    const abaja_interfaces::msg::VehicleState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abaja_interfaces::msg::VehicleState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abaja_interfaces::msg::VehicleState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::VehicleState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::VehicleState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::VehicleState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::VehicleState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abaja_interfaces::msg::VehicleState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abaja_interfaces::msg::VehicleState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abaja_interfaces__msg__VehicleState
    std::shared_ptr<abaja_interfaces::msg::VehicleState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abaja_interfaces__msg__VehicleState
    std::shared_ptr<abaja_interfaces::msg::VehicleState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleState_ & other) const
  {
    if (this->speed_mps != other.speed_mps) {
      return false;
    }
    if (this->steering_angle_deg != other.steering_angle_deg) {
      return false;
    }
    if (this->brake_position != other.brake_position) {
      return false;
    }
    if (this->throttle_position != other.throttle_position) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->autonomous_mode != other.autonomous_mode) {
      return false;
    }
    if (this->manual_mode != other.manual_mode) {
      return false;
    }
    if (this->lateral_enabled != other.lateral_enabled) {
      return false;
    }
    if (this->longitudinal_enabled != other.longitudinal_enabled) {
      return false;
    }
    if (this->emergency_stop != other.emergency_stop) {
      return false;
    }
    if (this->status_text != other.status_text) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleState_

// alias to use template instance with default allocator
using VehicleState =
  abaja_interfaces::msg::VehicleState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_
