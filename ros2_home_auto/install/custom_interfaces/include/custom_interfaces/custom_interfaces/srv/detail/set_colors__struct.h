// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:srv/SetColors.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__SET_COLORS__STRUCT_H_
#define CUSTOM_INTERFACES__SRV__DETAIL__SET_COLORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'colors'
#include "custom_interfaces/msg/detail/color__struct.h"

/// Struct defined in srv/SetColors in the package custom_interfaces.
typedef struct custom_interfaces__srv__SetColors_Request
{
  custom_interfaces__msg__Color__Sequence colors;
} custom_interfaces__srv__SetColors_Request;

// Struct for a sequence of custom_interfaces__srv__SetColors_Request.
typedef struct custom_interfaces__srv__SetColors_Request__Sequence
{
  custom_interfaces__srv__SetColors_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__SetColors_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetColors in the package custom_interfaces.
typedef struct custom_interfaces__srv__SetColors_Response
{
  bool success;
} custom_interfaces__srv__SetColors_Response;

// Struct for a sequence of custom_interfaces__srv__SetColors_Response.
typedef struct custom_interfaces__srv__SetColors_Response__Sequence
{
  custom_interfaces__srv__SetColors_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__srv__SetColors_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__SET_COLORS__STRUCT_H_
