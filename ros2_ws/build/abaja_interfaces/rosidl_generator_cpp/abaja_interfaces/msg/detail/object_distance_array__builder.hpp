// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abaja_interfaces:msg/ObjectDistanceArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "abaja_interfaces/msg/object_distance_array.hpp"


#ifndef ABAJA_INTERFACES__MSG__DETAIL__OBJECT_DISTANCE_ARRAY__BUILDER_HPP_
#define ABAJA_INTERFACES__MSG__DETAIL__OBJECT_DISTANCE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abaja_interfaces/msg/detail/object_distance_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abaja_interfaces
{

namespace msg
{

namespace builder
{

class Init_ObjectDistanceArray_objects
{
public:
  explicit Init_ObjectDistanceArray_objects(::abaja_interfaces::msg::ObjectDistanceArray & msg)
  : msg_(msg)
  {}
  ::abaja_interfaces::msg::ObjectDistanceArray objects(::abaja_interfaces::msg::ObjectDistanceArray::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abaja_interfaces::msg::ObjectDistanceArray msg_;
};

class Init_ObjectDistanceArray_header
{
public:
  Init_ObjectDistanceArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectDistanceArray_objects header(::abaja_interfaces::msg::ObjectDistanceArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectDistanceArray_objects(msg_);
  }

private:
  ::abaja_interfaces::msg::ObjectDistanceArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abaja_interfaces::msg::ObjectDistanceArray>()
{
  return abaja_interfaces::msg::builder::Init_ObjectDistanceArray_header();
}

}  // namespace abaja_interfaces

#endif  // ABAJA_INTERFACES__MSG__DETAIL__OBJECT_DISTANCE_ARRAY__BUILDER_HPP_
