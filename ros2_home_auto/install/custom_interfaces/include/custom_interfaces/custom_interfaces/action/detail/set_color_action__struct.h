// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:action/SetColorAction.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__ACTION__DETAIL__SET_COLOR_ACTION__STRUCT_H_
#define CUSTOM_INTERFACES__ACTION__DETAIL__SET_COLOR_ACTION__STRUCT_H_

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

/// Struct defined in action/SetColorAction in the package custom_interfaces.
typedef struct custom_interfaces__action__SetColorAction_Goal
{
  custom_interfaces__msg__Color__Sequence colors;
} custom_interfaces__action__SetColorAction_Goal;

// Struct for a sequence of custom_interfaces__action__SetColorAction_Goal.
typedef struct custom_interfaces__action__SetColorAction_Goal__Sequence
{
  custom_interfaces__action__SetColorAction_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__SetColorAction_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/SetColorAction in the package custom_interfaces.
typedef struct custom_interfaces__action__SetColorAction_Result
{
  bool success;
} custom_interfaces__action__SetColorAction_Result;

// Struct for a sequence of custom_interfaces__action__SetColorAction_Result.
typedef struct custom_interfaces__action__SetColorAction_Result__Sequence
{
  custom_interfaces__action__SetColorAction_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__SetColorAction_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/SetColorAction in the package custom_interfaces.
typedef struct custom_interfaces__action__SetColorAction_Feedback
{
  rosidl_runtime_c__String status;
} custom_interfaces__action__SetColorAction_Feedback;

// Struct for a sequence of custom_interfaces__action__SetColorAction_Feedback.
typedef struct custom_interfaces__action__SetColorAction_Feedback__Sequence
{
  custom_interfaces__action__SetColorAction_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__SetColorAction_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "custom_interfaces/action/detail/set_color_action__struct.h"

/// Struct defined in action/SetColorAction in the package custom_interfaces.
typedef struct custom_interfaces__action__SetColorAction_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  custom_interfaces__action__SetColorAction_Goal goal;
} custom_interfaces__action__SetColorAction_SendGoal_Request;

// Struct for a sequence of custom_interfaces__action__SetColorAction_SendGoal_Request.
typedef struct custom_interfaces__action__SetColorAction_SendGoal_Request__Sequence
{
  custom_interfaces__action__SetColorAction_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__SetColorAction_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SetColorAction in the package custom_interfaces.
typedef struct custom_interfaces__action__SetColorAction_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} custom_interfaces__action__SetColorAction_SendGoal_Response;

// Struct for a sequence of custom_interfaces__action__SetColorAction_SendGoal_Response.
typedef struct custom_interfaces__action__SetColorAction_SendGoal_Response__Sequence
{
  custom_interfaces__action__SetColorAction_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__SetColorAction_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SetColorAction in the package custom_interfaces.
typedef struct custom_interfaces__action__SetColorAction_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} custom_interfaces__action__SetColorAction_GetResult_Request;

// Struct for a sequence of custom_interfaces__action__SetColorAction_GetResult_Request.
typedef struct custom_interfaces__action__SetColorAction_GetResult_Request__Sequence
{
  custom_interfaces__action__SetColorAction_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__SetColorAction_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "custom_interfaces/action/detail/set_color_action__struct.h"

/// Struct defined in action/SetColorAction in the package custom_interfaces.
typedef struct custom_interfaces__action__SetColorAction_GetResult_Response
{
  int8_t status;
  custom_interfaces__action__SetColorAction_Result result;
} custom_interfaces__action__SetColorAction_GetResult_Response;

// Struct for a sequence of custom_interfaces__action__SetColorAction_GetResult_Response.
typedef struct custom_interfaces__action__SetColorAction_GetResult_Response__Sequence
{
  custom_interfaces__action__SetColorAction_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__SetColorAction_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "custom_interfaces/action/detail/set_color_action__struct.h"

/// Struct defined in action/SetColorAction in the package custom_interfaces.
typedef struct custom_interfaces__action__SetColorAction_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  custom_interfaces__action__SetColorAction_Feedback feedback;
} custom_interfaces__action__SetColorAction_FeedbackMessage;

// Struct for a sequence of custom_interfaces__action__SetColorAction_FeedbackMessage.
typedef struct custom_interfaces__action__SetColorAction_FeedbackMessage__Sequence
{
  custom_interfaces__action__SetColorAction_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__action__SetColorAction_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__ACTION__DETAIL__SET_COLOR_ACTION__STRUCT_H_
