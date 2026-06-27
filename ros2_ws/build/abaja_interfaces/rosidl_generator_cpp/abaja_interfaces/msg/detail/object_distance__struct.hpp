// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abaja_interfaces:msg/ObjectDistance.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/object_distance.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abaja_interfaces__msg__ObjectDistance __attribute__((deprecated))
#else
# define DEPRECATED__abaja_interfaces__msg__ObjectDistance __declspec(deprecated)
#endif

namespace abaja_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectDistance_
{
  using Type = ObjectDistance_<ContainerAllocator>;

  explicit ObjectDistance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_name = "";
      this->confidence = 0.0f;
      this->distance_m = 0.0f;
      this->x_min = 0l;
      this->y_min = 0l;
      this->x_max = 0l;
      this->y_max = 0l;
    }
  }

  explicit ObjectDistance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : class_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_name = "";
      this->confidence = 0.0f;
      this->distance_m = 0.0f;
      this->x_min = 0l;
      this->y_min = 0l;
      this->x_max = 0l;
      this->y_max = 0l;
    }
  }

  // field types and members
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_name_type class_name;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _distance_m_type =
    float;
  _distance_m_type distance_m;
  using _x_min_type =
    int32_t;
  _x_min_type x_min;
  using _y_min_type =
    int32_t;
  _y_min_type y_min;
  using _x_max_type =
    int32_t;
  _x_max_type x_max;
  using _y_max_type =
    int32_t;
  _y_max_type y_max;

  // setters for named parameter idiom
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__distance_m(
    const float & _arg)
  {
    this->distance_m = _arg;
    return *this;
  }
  Type & set__x_min(
    const int32_t & _arg)
  {
    this->x_min = _arg;
    return *this;
  }
  Type & set__y_min(
    const int32_t & _arg)
  {
    this->y_min = _arg;
    return *this;
  }
  Type & set__x_max(
    const int32_t & _arg)
  {
    this->x_max = _arg;
    return *this;
  }
  Type & set__y_max(
    const int32_t & _arg)
  {
    this->y_max = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abaja_interfaces::msg::ObjectDistance_<ContainerAllocator> *;
  using ConstRawPtr =
    const abaja_interfaces::msg::ObjectDistance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abaja_interfaces::msg::ObjectDistance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abaja_interfaces::msg::ObjectDistance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::ObjectDistance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::ObjectDistance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abaja_interfaces::msg::ObjectDistance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abaja_interfaces::msg::ObjectDistance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abaja_interfaces::msg::ObjectDistance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abaja_interfaces::msg::ObjectDistance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abaja_interfaces__msg__ObjectDistance
    std::shared_ptr<abaja_interfaces::msg::ObjectDistance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abaja_interfaces__msg__ObjectDistance
    std::shared_ptr<abaja_interfaces::msg::ObjectDistance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectDistance_ & other) const
  {
    if (this->class_name != other.class_name) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->distance_m != other.distance_m) {
      return false;
    }
    if (this->x_min != other.x_min) {
      return false;
    }
    if (this->y_min != other.y_min) {
      return false;
    }
    if (this->x_max != other.x_max) {
      return false;
    }
    if (this->y_max != other.y_max) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectDistance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectDistance_

// alias to use template instance with default allocator
using ObjectDistance =
  abaja_interfaces::msg::ObjectDistance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__OBJECT_DISTANCE__STRUCT_HPP_
