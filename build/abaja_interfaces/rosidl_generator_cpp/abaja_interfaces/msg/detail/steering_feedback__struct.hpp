// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abaja_interfaces:msg/SteeringFeedback.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/steering_feedback.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__STEERING_FEEDBACK__STRUCT_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__STEERING_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abaja_interfaces__msg__SteeringFeedback __attribute__((deprecated))
#else
# define DEPRECATED__abaja_interfaces__msg__SteeringFeedback __declspec(deprecated)
#endif

namespace abaja_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SteeringFeedback_
{
  using Type = SteeringFeedback_<ContainerAllocator>;

  explicit SteeringFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_angle_deg = 0.0f;
      this->actual_angle_deg = 0.0f;
      this->error_deg = 0.0f;
    }
  }

  explicit SteeringFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_angle_deg = 0.0f;
      this->actual_angle_deg = 0.0f;
      this->error_deg = 0.0f;
    }
  }

  // field types and members
  using _target_angle_deg_type =
    float;
  _target_angle_deg_type target_angle_deg;
  using _actual_angle_deg_type =
    float;
  _actual_angle_deg_type actual_angle_deg;
  using _error_deg_type =
    float;
  _error_deg_type error_deg;

  // setters for named parameter idiom
  Type & set__target_angle_deg(
    const float & _arg)
  {
    this->target_angle_deg = _arg;
    return *this;
  }
  Type & set__actual_angle_deg(
    const float & _arg)
  {
    this->actual_angle_deg = _arg;
    return *this;
  }
  Type & set__error_deg(
    const float & _arg)
  {
    this->error_deg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abaja_interfaces::msg::SteeringFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const abaja_interfaces::msg::SteeringFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abaja_interfaces::msg::SteeringFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abaja_interfaces::msg::SteeringFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::SteeringFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::SteeringFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::SteeringFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::SteeringFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abaja_interfaces::msg::SteeringFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abaja_interfaces::msg::SteeringFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abaja_interfaces__msg__SteeringFeedback
    std::shared_ptr<abaja_interfaces::msg::SteeringFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abaja_interfaces__msg__SteeringFeedback
    std::shared_ptr<abaja_interfaces::msg::SteeringFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SteeringFeedback_ & other) const
  {
    if (this->target_angle_deg != other.target_angle_deg) {
      return false;
    }
    if (this->actual_angle_deg != other.actual_angle_deg) {
      return false;
    }
    if (this->error_deg != other.error_deg) {
      return false;
    }
    return true;
  }
  bool operator!=(const SteeringFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SteeringFeedback_

// alias to use template instance with default allocator
using SteeringFeedback =
  abaja_interfaces::msg::SteeringFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__STEERING_FEEDBACK__STRUCT_HPP_
