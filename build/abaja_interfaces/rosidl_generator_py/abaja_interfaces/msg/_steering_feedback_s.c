// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abaja_interfaces:msg/SteeringFeedback.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "abaja_interfaces/msg/detail/steering_feedback__struct.h"
#include "abaja_interfaces/msg/detail/steering_feedback__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool abaja_interfaces__msg__steering_feedback__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("abaja_interfaces.msg._steering_feedback.SteeringFeedback", full_classname_dest, 56) == 0);
  }
  abaja_interfaces__msg__SteeringFeedback * ros_message = _ros_message;
  {  // target_angle_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_angle_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_angle_deg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // actual_angle_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "actual_angle_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->actual_angle_deg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // error_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->error_deg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abaja_interfaces__msg__steering_feedback__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SteeringFeedback */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abaja_interfaces.msg._steering_feedback");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SteeringFeedback");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abaja_interfaces__msg__SteeringFeedback * ros_message = (abaja_interfaces__msg__SteeringFeedback *)raw_ros_message;
  {  // target_angle_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_angle_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_angle_deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actual_angle_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->actual_angle_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actual_angle_deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->error_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
