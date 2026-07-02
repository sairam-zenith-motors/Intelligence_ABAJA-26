// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abaja_interfaces:msg/AEBStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/aeb_status.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__AEB_STATUS__STRUCT_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__AEB_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abaja_interfaces__msg__AEBStatus __attribute__((deprecated))
#else
# define DEPRECATED__abaja_interfaces__msg__AEBStatus __declspec(deprecated)
#endif

namespace abaja_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AEBStatus_
{
  using Type = AEBStatus_<ContainerAllocator>;

  explicit AEBStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->aeb_active = false;
      this->warning_active = false;
      this->emergency_braking = false;
      this->commanded_brake_percent = 0.0f;
      this->commanded_throttle_percent = 0.0f;
      this->reason = "";
    }
  }

  explicit AEBStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->aeb_active = false;
      this->warning_active = false;
      this->emergency_braking = false;
      this->commanded_brake_percent = 0.0f;
      this->commanded_throttle_percent = 0.0f;
      this->reason = "";
    }
  }

  // field types and members
  using _aeb_active_type =
    bool;
  _aeb_active_type aeb_active;
  using _warning_active_type =
    bool;
  _warning_active_type warning_active;
  using _emergency_braking_type =
    bool;
  _emergency_braking_type emergency_braking;
  using _commanded_brake_percent_type =
    float;
  _commanded_brake_percent_type commanded_brake_percent;
  using _commanded_throttle_percent_type =
    float;
  _commanded_throttle_percent_type commanded_throttle_percent;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;

  // setters for named parameter idiom
  Type & set__aeb_active(
    const bool & _arg)
  {
    this->aeb_active = _arg;
    return *this;
  }
  Type & set__warning_active(
    const bool & _arg)
  {
    this->warning_active = _arg;
    return *this;
  }
  Type & set__emergency_braking(
    const bool & _arg)
  {
    this->emergency_braking = _arg;
    return *this;
  }
  Type & set__commanded_brake_percent(
    const float & _arg)
  {
    this->commanded_brake_percent = _arg;
    return *this;
  }
  Type & set__commanded_throttle_percent(
    const float & _arg)
  {
    this->commanded_throttle_percent = _arg;
    return *this;
  }
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abaja_interfaces::msg::AEBStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const abaja_interfaces::msg::AEBStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abaja_interfaces::msg::AEBStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abaja_interfaces::msg::AEBStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::AEBStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::AEBStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::AEBStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::AEBStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abaja_interfaces::msg::AEBStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abaja_interfaces::msg::AEBStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abaja_interfaces__msg__AEBStatus
    std::shared_ptr<abaja_interfaces::msg::AEBStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abaja_interfaces__msg__AEBStatus
    std::shared_ptr<abaja_interfaces::msg::AEBStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AEBStatus_ & other) const
  {
    if (this->aeb_active != other.aeb_active) {
      return false;
    }
    if (this->warning_active != other.warning_active) {
      return false;
    }
    if (this->emergency_braking != other.emergency_braking) {
      return false;
    }
    if (this->commanded_brake_percent != other.commanded_brake_percent) {
      return false;
    }
    if (this->commanded_throttle_percent != other.commanded_throttle_percent) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const AEBStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AEBStatus_

// alias to use template instance with default allocator
using AEBStatus =
  abaja_interfaces::msg::AEBStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__AEB_STATUS__STRUCT_HPP_
