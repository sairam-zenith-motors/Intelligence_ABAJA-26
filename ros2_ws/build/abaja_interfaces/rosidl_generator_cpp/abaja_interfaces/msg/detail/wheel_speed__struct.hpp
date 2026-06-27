// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abaja_interfaces:msg/WheelSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/wheel_speed.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__WHEEL_SPEED__STRUCT_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__WHEEL_SPEED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abaja_interfaces__msg__WheelSpeed __attribute__((deprecated))
#else
# define DEPRECATED__abaja_interfaces__msg__WheelSpeed __declspec(deprecated)
#endif

namespace abaja_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelSpeed_
{
  using Type = WheelSpeed_<ContainerAllocator>;

  explicit WheelSpeed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_left = 0.0f;
      this->front_right = 0.0f;
      this->rear_left = 0.0f;
      this->rear_right = 0.0f;
      this->average_speed = 0.0f;
    }
  }

  explicit WheelSpeed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_left = 0.0f;
      this->front_right = 0.0f;
      this->rear_left = 0.0f;
      this->rear_right = 0.0f;
      this->average_speed = 0.0f;
    }
  }

  // field types and members
  using _front_left_type =
    float;
  _front_left_type front_left;
  using _front_right_type =
    float;
  _front_right_type front_right;
  using _rear_left_type =
    float;
  _rear_left_type rear_left;
  using _rear_right_type =
    float;
  _rear_right_type rear_right;
  using _average_speed_type =
    float;
  _average_speed_type average_speed;

  // setters for named parameter idiom
  Type & set__front_left(
    const float & _arg)
  {
    this->front_left = _arg;
    return *this;
  }
  Type & set__front_right(
    const float & _arg)
  {
    this->front_right = _arg;
    return *this;
  }
  Type & set__rear_left(
    const float & _arg)
  {
    this->rear_left = _arg;
    return *this;
  }
  Type & set__rear_right(
    const float & _arg)
  {
    this->rear_right = _arg;
    return *this;
  }
  Type & set__average_speed(
    const float & _arg)
  {
    this->average_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abaja_interfaces::msg::WheelSpeed_<ContainerAllocator> *;
  using ConstRawPtr =
    const abaja_interfaces::msg::WheelSpeed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abaja_interfaces::msg::WheelSpeed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abaja_interfaces::msg::WheelSpeed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::WheelSpeed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::WheelSpeed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::WheelSpeed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::WheelSpeed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abaja_interfaces::msg::WheelSpeed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abaja_interfaces::msg::WheelSpeed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abaja_interfaces__msg__WheelSpeed
    std::shared_ptr<abaja_interfaces::msg::WheelSpeed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abaja_interfaces__msg__WheelSpeed
    std::shared_ptr<abaja_interfaces::msg::WheelSpeed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelSpeed_ & other) const
  {
    if (this->front_left != other.front_left) {
      return false;
    }
    if (this->front_right != other.front_right) {
      return false;
    }
    if (this->rear_left != other.rear_left) {
      return false;
    }
    if (this->rear_right != other.rear_right) {
      return false;
    }
    if (this->average_speed != other.average_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelSpeed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelSpeed_

// alias to use template instance with default allocator
using WheelSpeed =
  abaja_interfaces::msg::WheelSpeed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__WHEEL_SPEED__STRUCT_HPP_
