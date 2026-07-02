// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abaja_interfaces:msg/SafetyState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/safety_state.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__SAFETY_STATE__STRUCT_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__SAFETY_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abaja_interfaces__msg__SafetyState __attribute__((deprecated))
#else
# define DEPRECATED__abaja_interfaces__msg__SafetyState __declspec(deprecated)
#endif

namespace abaja_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SafetyState_
{
  using Type = SafetyState_<ContainerAllocator>;

  explicit SafetyState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->safe_to_drive = false;
      this->emergency_stop = false;
      this->dbw_allowed = false;
      this->perception_ok = false;
      this->lane_ok = false;
      this->aeb_ok = false;
      this->reason = "";
    }
  }

  explicit SafetyState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->safe_to_drive = false;
      this->emergency_stop = false;
      this->dbw_allowed = false;
      this->perception_ok = false;
      this->lane_ok = false;
      this->aeb_ok = false;
      this->reason = "";
    }
  }

  // field types and members
  using _safe_to_drive_type =
    bool;
  _safe_to_drive_type safe_to_drive;
  using _emergency_stop_type =
    bool;
  _emergency_stop_type emergency_stop;
  using _dbw_allowed_type =
    bool;
  _dbw_allowed_type dbw_allowed;
  using _perception_ok_type =
    bool;
  _perception_ok_type perception_ok;
  using _lane_ok_type =
    bool;
  _lane_ok_type lane_ok;
  using _aeb_ok_type =
    bool;
  _aeb_ok_type aeb_ok;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;

  // setters for named parameter idiom
  Type & set__safe_to_drive(
    const bool & _arg)
  {
    this->safe_to_drive = _arg;
    return *this;
  }
  Type & set__emergency_stop(
    const bool & _arg)
  {
    this->emergency_stop = _arg;
    return *this;
  }
  Type & set__dbw_allowed(
    const bool & _arg)
  {
    this->dbw_allowed = _arg;
    return *this;
  }
  Type & set__perception_ok(
    const bool & _arg)
  {
    this->perception_ok = _arg;
    return *this;
  }
  Type & set__lane_ok(
    const bool & _arg)
  {
    this->lane_ok = _arg;
    return *this;
  }
  Type & set__aeb_ok(
    const bool & _arg)
  {
    this->aeb_ok = _arg;
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
    abaja_interfaces::msg::SafetyState_<ContainerAllocator> *;
  using ConstRawPtr =
    const abaja_interfaces::msg::SafetyState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abaja_interfaces::msg::SafetyState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abaja_interfaces::msg::SafetyState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::SafetyState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::SafetyState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::SafetyState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::SafetyState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abaja_interfaces::msg::SafetyState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abaja_interfaces::msg::SafetyState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abaja_interfaces__msg__SafetyState
    std::shared_ptr<abaja_interfaces::msg::SafetyState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abaja_interfaces__msg__SafetyState
    std::shared_ptr<abaja_interfaces::msg::SafetyState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SafetyState_ & other) const
  {
    if (this->safe_to_drive != other.safe_to_drive) {
      return false;
    }
    if (this->emergency_stop != other.emergency_stop) {
      return false;
    }
    if (this->dbw_allowed != other.dbw_allowed) {
      return false;
    }
    if (this->perception_ok != other.perception_ok) {
      return false;
    }
    if (this->lane_ok != other.lane_ok) {
      return false;
    }
    if (this->aeb_ok != other.aeb_ok) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const SafetyState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SafetyState_

// alias to use template instance with default allocator
using SafetyState =
  abaja_interfaces::msg::SafetyState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__SAFETY_STATE__STRUCT_HPP_
