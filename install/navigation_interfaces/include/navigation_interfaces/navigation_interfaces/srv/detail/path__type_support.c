// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from navigation_interfaces:srv/Path.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "navigation_interfaces/srv/detail/path__rosidl_typesupport_introspection_c.h"
#include "navigation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "navigation_interfaces/srv/detail/path__functions.h"
#include "navigation_interfaces/srv/detail/path__struct.h"


// Include directives for member types
// Member `positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__Path_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  navigation_interfaces__srv__Path_Request__init(message_memory);
}

void navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__Path_Request_fini_function(void * message_memory)
{
  navigation_interfaces__srv__Path_Request__fini(message_memory);
}

size_t navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__size_function__Path_Request__positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__get_const_function__Path_Request__positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__get_function__Path_Request__positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__fetch_function__Path_Request__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__get_const_function__Path_Request__positions(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__assign_function__Path_Request__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__get_function__Path_Request__positions(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__resize_function__Path_Request__positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__Path_Request_message_member_array[1] = {
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigation_interfaces__srv__Path_Request, positions),  // bytes offset in struct
    NULL,  // default value
    navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__size_function__Path_Request__positions,  // size() function pointer
    navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__get_const_function__Path_Request__positions,  // get_const(index) function pointer
    navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__get_function__Path_Request__positions,  // get(index) function pointer
    navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__fetch_function__Path_Request__positions,  // fetch(index, &value) function pointer
    navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__assign_function__Path_Request__positions,  // assign(index, value) function pointer
    navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__resize_function__Path_Request__positions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__Path_Request_message_members = {
  "navigation_interfaces__srv",  // message namespace
  "Path_Request",  // message name
  1,  // number of fields
  sizeof(navigation_interfaces__srv__Path_Request),
  navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__Path_Request_message_member_array,  // message members
  navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__Path_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__Path_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__Path_Request_message_type_support_handle = {
  0,
  &navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__Path_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_navigation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, srv, Path_Request)() {
  if (!navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__Path_Request_message_type_support_handle.typesupport_identifier) {
    navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__Path_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &navigation_interfaces__srv__Path_Request__rosidl_typesupport_introspection_c__Path_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "navigation_interfaces/srv/detail/path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "navigation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "navigation_interfaces/srv/detail/path__functions.h"
// already included above
// #include "navigation_interfaces/srv/detail/path__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void navigation_interfaces__srv__Path_Response__rosidl_typesupport_introspection_c__Path_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  navigation_interfaces__srv__Path_Response__init(message_memory);
}

void navigation_interfaces__srv__Path_Response__rosidl_typesupport_introspection_c__Path_Response_fini_function(void * message_memory)
{
  navigation_interfaces__srv__Path_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember navigation_interfaces__srv__Path_Response__rosidl_typesupport_introspection_c__Path_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigation_interfaces__srv__Path_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers navigation_interfaces__srv__Path_Response__rosidl_typesupport_introspection_c__Path_Response_message_members = {
  "navigation_interfaces__srv",  // message namespace
  "Path_Response",  // message name
  1,  // number of fields
  sizeof(navigation_interfaces__srv__Path_Response),
  navigation_interfaces__srv__Path_Response__rosidl_typesupport_introspection_c__Path_Response_message_member_array,  // message members
  navigation_interfaces__srv__Path_Response__rosidl_typesupport_introspection_c__Path_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  navigation_interfaces__srv__Path_Response__rosidl_typesupport_introspection_c__Path_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t navigation_interfaces__srv__Path_Response__rosidl_typesupport_introspection_c__Path_Response_message_type_support_handle = {
  0,
  &navigation_interfaces__srv__Path_Response__rosidl_typesupport_introspection_c__Path_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_navigation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, srv, Path_Response)() {
  if (!navigation_interfaces__srv__Path_Response__rosidl_typesupport_introspection_c__Path_Response_message_type_support_handle.typesupport_identifier) {
    navigation_interfaces__srv__Path_Response__rosidl_typesupport_introspection_c__Path_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &navigation_interfaces__srv__Path_Response__rosidl_typesupport_introspection_c__Path_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "navigation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "navigation_interfaces/srv/detail/path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers navigation_interfaces__srv__detail__path__rosidl_typesupport_introspection_c__Path_service_members = {
  "navigation_interfaces__srv",  // service namespace
  "Path",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // navigation_interfaces__srv__detail__path__rosidl_typesupport_introspection_c__Path_Request_message_type_support_handle,
  NULL  // response message
  // navigation_interfaces__srv__detail__path__rosidl_typesupport_introspection_c__Path_Response_message_type_support_handle
};

static rosidl_service_type_support_t navigation_interfaces__srv__detail__path__rosidl_typesupport_introspection_c__Path_service_type_support_handle = {
  0,
  &navigation_interfaces__srv__detail__path__rosidl_typesupport_introspection_c__Path_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, srv, Path_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, srv, Path_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_navigation_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, srv, Path)() {
  if (!navigation_interfaces__srv__detail__path__rosidl_typesupport_introspection_c__Path_service_type_support_handle.typesupport_identifier) {
    navigation_interfaces__srv__detail__path__rosidl_typesupport_introspection_c__Path_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)navigation_interfaces__srv__detail__path__rosidl_typesupport_introspection_c__Path_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, srv, Path_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, srv, Path_Response)()->data;
  }

  return &navigation_interfaces__srv__detail__path__rosidl_typesupport_introspection_c__Path_service_type_support_handle;
}
