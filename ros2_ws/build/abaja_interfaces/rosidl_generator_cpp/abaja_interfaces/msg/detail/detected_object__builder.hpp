// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abaja_interfaces:msg/DetectedObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/detected_object.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abaja_interfaces/msg/detail/detected_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abaja_interfaces
{

namespace msg
{

namespace builder
{

class Init_DetectedObject_y_max
{
public:
  explicit Init_DetectedObject_y_max(::abaja_interfaces::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  ::abaja_interfaces::msg::DetectedObject y_max(::abaja_interfaces::msg::DetectedObject::_y_max_type arg)
  {
    msg_.y_max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abaja_interfaces::msg::DetectedObject msg_;
};

class Init_DetectedObject_x_max
{
public:
  explicit Init_DetectedObject_x_max(::abaja_interfaces::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_y_max x_max(::abaja_interfaces::msg::DetectedObject::_x_max_type arg)
  {
    msg_.x_max = std::move(arg);
    return Init_DetectedObject_y_max(msg_);
  }

private:
  ::abaja_interfaces::msg::DetectedObject msg_;
};

class Init_DetectedObject_y_min
{
public:
  explicit Init_DetectedObject_y_min(::abaja_interfaces::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_x_max y_min(::abaja_interfaces::msg::DetectedObject::_y_min_type arg)
  {
    msg_.y_min = std::move(arg);
    return Init_DetectedObject_x_max(msg_);
  }

private:
  ::abaja_interfaces::msg::DetectedObject msg_;
};

class Init_DetectedObject_x_min
{
public:
  explicit Init_DetectedObject_x_min(::abaja_interfaces::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_y_min x_min(::abaja_interfaces::msg::DetectedObject::_x_min_type arg)
  {
    msg_.x_min = std::move(arg);
    return Init_DetectedObject_y_min(msg_);
  }

private:
  ::abaja_interfaces::msg::DetectedObject msg_;
};

class Init_DetectedObject_confidence
{
public:
  explicit Init_DetectedObject_confidence(::abaja_interfaces::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_x_min confidence(::abaja_interfaces::msg::DetectedObject::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_DetectedObject_x_min(msg_);
  }

private:
  ::abaja_interfaces::msg::DetectedObject msg_;
};

class Init_DetectedObject_class_name
{
public:
  Init_DetectedObject_class_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObject_confidence class_name(::abaja_interfaces::msg::DetectedObject::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_DetectedObject_confidence(msg_);
  }

private:
  ::abaja_interfaces::msg::DetectedObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abaja_interfaces::msg::DetectedObject>()
{
  return abaja_interfaces::msg::builder::Init_DetectedObject_class_name();
}

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_
