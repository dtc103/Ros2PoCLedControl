// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/SetColor.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__SET_COLOR__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__SET_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/set_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetColor_Request_color
{
public:
  Init_SetColor_Request_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::SetColor_Request color(::custom_interfaces::srv::SetColor_Request::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::SetColor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::SetColor_Request>()
{
  return custom_interfaces::srv::builder::Init_SetColor_Request_color();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::SetColor_Response>()
{
  return ::custom_interfaces::srv::SetColor_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__SET_COLOR__BUILDER_HPP_
