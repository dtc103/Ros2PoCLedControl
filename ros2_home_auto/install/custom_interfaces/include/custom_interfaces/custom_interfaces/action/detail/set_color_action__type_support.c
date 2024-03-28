// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interfaces:action/SetColorAction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interfaces/action/detail/set_color_action__rosidl_typesupport_introspection_c.h"
#include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interfaces/action/detail/set_color_action__functions.h"
#include "custom_interfaces/action/detail/set_color_action__struct.h"


// Include directives for member types
// Member `colors`
#include "custom_interfaces/msg/color.h"
// Member `colors`
#include "custom_interfaces/msg/detail/color__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__SetColorAction_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__action__SetColorAction_Goal__init(message_memory);
}

void custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__SetColorAction_Goal_fini_function(void * message_memory)
{
  custom_interfaces__action__SetColorAction_Goal__fini(message_memory);
}

size_t custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__size_function__SetColorAction_Goal__colors(
  const void * untyped_member)
{
  const custom_interfaces__msg__Color__Sequence * member =
    (const custom_interfaces__msg__Color__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__get_const_function__SetColorAction_Goal__colors(
  const void * untyped_member, size_t index)
{
  const custom_interfaces__msg__Color__Sequence * member =
    (const custom_interfaces__msg__Color__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__get_function__SetColorAction_Goal__colors(
  void * untyped_member, size_t index)
{
  custom_interfaces__msg__Color__Sequence * member =
    (custom_interfaces__msg__Color__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__fetch_function__SetColorAction_Goal__colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const custom_interfaces__msg__Color * item =
    ((const custom_interfaces__msg__Color *)
    custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__get_const_function__SetColorAction_Goal__colors(untyped_member, index));
  custom_interfaces__msg__Color * value =
    (custom_interfaces__msg__Color *)(untyped_value);
  *value = *item;
}

void custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__assign_function__SetColorAction_Goal__colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  custom_interfaces__msg__Color * item =
    ((custom_interfaces__msg__Color *)
    custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__get_function__SetColorAction_Goal__colors(untyped_member, index));
  const custom_interfaces__msg__Color * value =
    (const custom_interfaces__msg__Color *)(untyped_value);
  *item = *value;
}

bool custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__resize_function__SetColorAction_Goal__colors(
  void * untyped_member, size_t size)
{
  custom_interfaces__msg__Color__Sequence * member =
    (custom_interfaces__msg__Color__Sequence *)(untyped_member);
  custom_interfaces__msg__Color__Sequence__fini(member);
  return custom_interfaces__msg__Color__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__SetColorAction_Goal_message_member_array[1] = {
  {
    "colors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__action__SetColorAction_Goal, colors),  // bytes offset in struct
    NULL,  // default value
    custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__size_function__SetColorAction_Goal__colors,  // size() function pointer
    custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__get_const_function__SetColorAction_Goal__colors,  // get_const(index) function pointer
    custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__get_function__SetColorAction_Goal__colors,  // get(index) function pointer
    custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__fetch_function__SetColorAction_Goal__colors,  // fetch(index, &value) function pointer
    custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__assign_function__SetColorAction_Goal__colors,  // assign(index, value) function pointer
    custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__resize_function__SetColorAction_Goal__colors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__SetColorAction_Goal_message_members = {
  "custom_interfaces__action",  // message namespace
  "SetColorAction_Goal",  // message name
  1,  // number of fields
  sizeof(custom_interfaces__action__SetColorAction_Goal),
  custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__SetColorAction_Goal_message_member_array,  // message members
  custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__SetColorAction_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__SetColorAction_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__SetColorAction_Goal_message_type_support_handle = {
  0,
  &custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__SetColorAction_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_Goal)() {
  custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__SetColorAction_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, msg, Color)();
  if (!custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__SetColorAction_Goal_message_type_support_handle.typesupport_identifier) {
    custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__SetColorAction_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interfaces__action__SetColorAction_Goal__rosidl_typesupport_introspection_c__SetColorAction_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interfaces/action/detail/set_color_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interfaces/action/detail/set_color_action__functions.h"
// already included above
// #include "custom_interfaces/action/detail/set_color_action__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void custom_interfaces__action__SetColorAction_Result__rosidl_typesupport_introspection_c__SetColorAction_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__action__SetColorAction_Result__init(message_memory);
}

void custom_interfaces__action__SetColorAction_Result__rosidl_typesupport_introspection_c__SetColorAction_Result_fini_function(void * message_memory)
{
  custom_interfaces__action__SetColorAction_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_interfaces__action__SetColorAction_Result__rosidl_typesupport_introspection_c__SetColorAction_Result_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__action__SetColorAction_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interfaces__action__SetColorAction_Result__rosidl_typesupport_introspection_c__SetColorAction_Result_message_members = {
  "custom_interfaces__action",  // message namespace
  "SetColorAction_Result",  // message name
  1,  // number of fields
  sizeof(custom_interfaces__action__SetColorAction_Result),
  custom_interfaces__action__SetColorAction_Result__rosidl_typesupport_introspection_c__SetColorAction_Result_message_member_array,  // message members
  custom_interfaces__action__SetColorAction_Result__rosidl_typesupport_introspection_c__SetColorAction_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interfaces__action__SetColorAction_Result__rosidl_typesupport_introspection_c__SetColorAction_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interfaces__action__SetColorAction_Result__rosidl_typesupport_introspection_c__SetColorAction_Result_message_type_support_handle = {
  0,
  &custom_interfaces__action__SetColorAction_Result__rosidl_typesupport_introspection_c__SetColorAction_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_Result)() {
  if (!custom_interfaces__action__SetColorAction_Result__rosidl_typesupport_introspection_c__SetColorAction_Result_message_type_support_handle.typesupport_identifier) {
    custom_interfaces__action__SetColorAction_Result__rosidl_typesupport_introspection_c__SetColorAction_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interfaces__action__SetColorAction_Result__rosidl_typesupport_introspection_c__SetColorAction_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interfaces/action/detail/set_color_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interfaces/action/detail/set_color_action__functions.h"
// already included above
// #include "custom_interfaces/action/detail/set_color_action__struct.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_interfaces__action__SetColorAction_Feedback__rosidl_typesupport_introspection_c__SetColorAction_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__action__SetColorAction_Feedback__init(message_memory);
}

void custom_interfaces__action__SetColorAction_Feedback__rosidl_typesupport_introspection_c__SetColorAction_Feedback_fini_function(void * message_memory)
{
  custom_interfaces__action__SetColorAction_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_interfaces__action__SetColorAction_Feedback__rosidl_typesupport_introspection_c__SetColorAction_Feedback_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__action__SetColorAction_Feedback, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interfaces__action__SetColorAction_Feedback__rosidl_typesupport_introspection_c__SetColorAction_Feedback_message_members = {
  "custom_interfaces__action",  // message namespace
  "SetColorAction_Feedback",  // message name
  1,  // number of fields
  sizeof(custom_interfaces__action__SetColorAction_Feedback),
  custom_interfaces__action__SetColorAction_Feedback__rosidl_typesupport_introspection_c__SetColorAction_Feedback_message_member_array,  // message members
  custom_interfaces__action__SetColorAction_Feedback__rosidl_typesupport_introspection_c__SetColorAction_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interfaces__action__SetColorAction_Feedback__rosidl_typesupport_introspection_c__SetColorAction_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interfaces__action__SetColorAction_Feedback__rosidl_typesupport_introspection_c__SetColorAction_Feedback_message_type_support_handle = {
  0,
  &custom_interfaces__action__SetColorAction_Feedback__rosidl_typesupport_introspection_c__SetColorAction_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_Feedback)() {
  if (!custom_interfaces__action__SetColorAction_Feedback__rosidl_typesupport_introspection_c__SetColorAction_Feedback_message_type_support_handle.typesupport_identifier) {
    custom_interfaces__action__SetColorAction_Feedback__rosidl_typesupport_introspection_c__SetColorAction_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interfaces__action__SetColorAction_Feedback__rosidl_typesupport_introspection_c__SetColorAction_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interfaces/action/detail/set_color_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interfaces/action/detail/set_color_action__functions.h"
// already included above
// #include "custom_interfaces/action/detail/set_color_action__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "custom_interfaces/action/set_color_action.h"
// Member `goal`
// already included above
// #include "custom_interfaces/action/detail/set_color_action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_interfaces__action__SetColorAction_SendGoal_Request__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__action__SetColorAction_SendGoal_Request__init(message_memory);
}

void custom_interfaces__action__SetColorAction_SendGoal_Request__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Request_fini_function(void * message_memory)
{
  custom_interfaces__action__SetColorAction_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_interfaces__action__SetColorAction_SendGoal_Request__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__action__SetColorAction_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__action__SetColorAction_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interfaces__action__SetColorAction_SendGoal_Request__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Request_message_members = {
  "custom_interfaces__action",  // message namespace
  "SetColorAction_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(custom_interfaces__action__SetColorAction_SendGoal_Request),
  custom_interfaces__action__SetColorAction_SendGoal_Request__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Request_message_member_array,  // message members
  custom_interfaces__action__SetColorAction_SendGoal_Request__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interfaces__action__SetColorAction_SendGoal_Request__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interfaces__action__SetColorAction_SendGoal_Request__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Request_message_type_support_handle = {
  0,
  &custom_interfaces__action__SetColorAction_SendGoal_Request__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_SendGoal_Request)() {
  custom_interfaces__action__SetColorAction_SendGoal_Request__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  custom_interfaces__action__SetColorAction_SendGoal_Request__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_Goal)();
  if (!custom_interfaces__action__SetColorAction_SendGoal_Request__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    custom_interfaces__action__SetColorAction_SendGoal_Request__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interfaces__action__SetColorAction_SendGoal_Request__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interfaces/action/detail/set_color_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interfaces/action/detail/set_color_action__functions.h"
// already included above
// #include "custom_interfaces/action/detail/set_color_action__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_interfaces__action__SetColorAction_SendGoal_Response__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__action__SetColorAction_SendGoal_Response__init(message_memory);
}

void custom_interfaces__action__SetColorAction_SendGoal_Response__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Response_fini_function(void * message_memory)
{
  custom_interfaces__action__SetColorAction_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_interfaces__action__SetColorAction_SendGoal_Response__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__action__SetColorAction_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__action__SetColorAction_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interfaces__action__SetColorAction_SendGoal_Response__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Response_message_members = {
  "custom_interfaces__action",  // message namespace
  "SetColorAction_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(custom_interfaces__action__SetColorAction_SendGoal_Response),
  custom_interfaces__action__SetColorAction_SendGoal_Response__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Response_message_member_array,  // message members
  custom_interfaces__action__SetColorAction_SendGoal_Response__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interfaces__action__SetColorAction_SendGoal_Response__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interfaces__action__SetColorAction_SendGoal_Response__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Response_message_type_support_handle = {
  0,
  &custom_interfaces__action__SetColorAction_SendGoal_Response__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_SendGoal_Response)() {
  custom_interfaces__action__SetColorAction_SendGoal_Response__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!custom_interfaces__action__SetColorAction_SendGoal_Response__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    custom_interfaces__action__SetColorAction_SendGoal_Response__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interfaces__action__SetColorAction_SendGoal_Response__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "custom_interfaces/action/detail/set_color_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers custom_interfaces__action__detail__set_color_action__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_service_members = {
  "custom_interfaces__action",  // service namespace
  "SetColorAction_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // custom_interfaces__action__detail__set_color_action__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // custom_interfaces__action__detail__set_color_action__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t custom_interfaces__action__detail__set_color_action__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_service_type_support_handle = {
  0,
  &custom_interfaces__action__detail__set_color_action__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_SendGoal)() {
  if (!custom_interfaces__action__detail__set_color_action__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_service_type_support_handle.typesupport_identifier) {
    custom_interfaces__action__detail__set_color_action__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)custom_interfaces__action__detail__set_color_action__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_SendGoal_Response)()->data;
  }

  return &custom_interfaces__action__detail__set_color_action__rosidl_typesupport_introspection_c__SetColorAction_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interfaces/action/detail/set_color_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interfaces/action/detail/set_color_action__functions.h"
// already included above
// #include "custom_interfaces/action/detail/set_color_action__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_interfaces__action__SetColorAction_GetResult_Request__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__action__SetColorAction_GetResult_Request__init(message_memory);
}

void custom_interfaces__action__SetColorAction_GetResult_Request__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Request_fini_function(void * message_memory)
{
  custom_interfaces__action__SetColorAction_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_interfaces__action__SetColorAction_GetResult_Request__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__action__SetColorAction_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interfaces__action__SetColorAction_GetResult_Request__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Request_message_members = {
  "custom_interfaces__action",  // message namespace
  "SetColorAction_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(custom_interfaces__action__SetColorAction_GetResult_Request),
  custom_interfaces__action__SetColorAction_GetResult_Request__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Request_message_member_array,  // message members
  custom_interfaces__action__SetColorAction_GetResult_Request__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interfaces__action__SetColorAction_GetResult_Request__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interfaces__action__SetColorAction_GetResult_Request__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Request_message_type_support_handle = {
  0,
  &custom_interfaces__action__SetColorAction_GetResult_Request__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_GetResult_Request)() {
  custom_interfaces__action__SetColorAction_GetResult_Request__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!custom_interfaces__action__SetColorAction_GetResult_Request__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    custom_interfaces__action__SetColorAction_GetResult_Request__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interfaces__action__SetColorAction_GetResult_Request__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interfaces/action/detail/set_color_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interfaces/action/detail/set_color_action__functions.h"
// already included above
// #include "custom_interfaces/action/detail/set_color_action__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "custom_interfaces/action/set_color_action.h"
// Member `result`
// already included above
// #include "custom_interfaces/action/detail/set_color_action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_interfaces__action__SetColorAction_GetResult_Response__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__action__SetColorAction_GetResult_Response__init(message_memory);
}

void custom_interfaces__action__SetColorAction_GetResult_Response__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Response_fini_function(void * message_memory)
{
  custom_interfaces__action__SetColorAction_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_interfaces__action__SetColorAction_GetResult_Response__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__action__SetColorAction_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__action__SetColorAction_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interfaces__action__SetColorAction_GetResult_Response__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Response_message_members = {
  "custom_interfaces__action",  // message namespace
  "SetColorAction_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(custom_interfaces__action__SetColorAction_GetResult_Response),
  custom_interfaces__action__SetColorAction_GetResult_Response__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Response_message_member_array,  // message members
  custom_interfaces__action__SetColorAction_GetResult_Response__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interfaces__action__SetColorAction_GetResult_Response__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interfaces__action__SetColorAction_GetResult_Response__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Response_message_type_support_handle = {
  0,
  &custom_interfaces__action__SetColorAction_GetResult_Response__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_GetResult_Response)() {
  custom_interfaces__action__SetColorAction_GetResult_Response__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_Result)();
  if (!custom_interfaces__action__SetColorAction_GetResult_Response__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    custom_interfaces__action__SetColorAction_GetResult_Response__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interfaces__action__SetColorAction_GetResult_Response__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "custom_interfaces/action/detail/set_color_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers custom_interfaces__action__detail__set_color_action__rosidl_typesupport_introspection_c__SetColorAction_GetResult_service_members = {
  "custom_interfaces__action",  // service namespace
  "SetColorAction_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // custom_interfaces__action__detail__set_color_action__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // custom_interfaces__action__detail__set_color_action__rosidl_typesupport_introspection_c__SetColorAction_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t custom_interfaces__action__detail__set_color_action__rosidl_typesupport_introspection_c__SetColorAction_GetResult_service_type_support_handle = {
  0,
  &custom_interfaces__action__detail__set_color_action__rosidl_typesupport_introspection_c__SetColorAction_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_GetResult)() {
  if (!custom_interfaces__action__detail__set_color_action__rosidl_typesupport_introspection_c__SetColorAction_GetResult_service_type_support_handle.typesupport_identifier) {
    custom_interfaces__action__detail__set_color_action__rosidl_typesupport_introspection_c__SetColorAction_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)custom_interfaces__action__detail__set_color_action__rosidl_typesupport_introspection_c__SetColorAction_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_GetResult_Response)()->data;
  }

  return &custom_interfaces__action__detail__set_color_action__rosidl_typesupport_introspection_c__SetColorAction_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interfaces/action/detail/set_color_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interfaces/action/detail/set_color_action__functions.h"
// already included above
// #include "custom_interfaces/action/detail/set_color_action__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "custom_interfaces/action/set_color_action.h"
// Member `feedback`
// already included above
// #include "custom_interfaces/action/detail/set_color_action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_interfaces__action__SetColorAction_FeedbackMessage__rosidl_typesupport_introspection_c__SetColorAction_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__action__SetColorAction_FeedbackMessage__init(message_memory);
}

void custom_interfaces__action__SetColorAction_FeedbackMessage__rosidl_typesupport_introspection_c__SetColorAction_FeedbackMessage_fini_function(void * message_memory)
{
  custom_interfaces__action__SetColorAction_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_interfaces__action__SetColorAction_FeedbackMessage__rosidl_typesupport_introspection_c__SetColorAction_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__action__SetColorAction_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__action__SetColorAction_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interfaces__action__SetColorAction_FeedbackMessage__rosidl_typesupport_introspection_c__SetColorAction_FeedbackMessage_message_members = {
  "custom_interfaces__action",  // message namespace
  "SetColorAction_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(custom_interfaces__action__SetColorAction_FeedbackMessage),
  custom_interfaces__action__SetColorAction_FeedbackMessage__rosidl_typesupport_introspection_c__SetColorAction_FeedbackMessage_message_member_array,  // message members
  custom_interfaces__action__SetColorAction_FeedbackMessage__rosidl_typesupport_introspection_c__SetColorAction_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interfaces__action__SetColorAction_FeedbackMessage__rosidl_typesupport_introspection_c__SetColorAction_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interfaces__action__SetColorAction_FeedbackMessage__rosidl_typesupport_introspection_c__SetColorAction_FeedbackMessage_message_type_support_handle = {
  0,
  &custom_interfaces__action__SetColorAction_FeedbackMessage__rosidl_typesupport_introspection_c__SetColorAction_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_FeedbackMessage)() {
  custom_interfaces__action__SetColorAction_FeedbackMessage__rosidl_typesupport_introspection_c__SetColorAction_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  custom_interfaces__action__SetColorAction_FeedbackMessage__rosidl_typesupport_introspection_c__SetColorAction_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, action, SetColorAction_Feedback)();
  if (!custom_interfaces__action__SetColorAction_FeedbackMessage__rosidl_typesupport_introspection_c__SetColorAction_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    custom_interfaces__action__SetColorAction_FeedbackMessage__rosidl_typesupport_introspection_c__SetColorAction_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interfaces__action__SetColorAction_FeedbackMessage__rosidl_typesupport_introspection_c__SetColorAction_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
