// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abaja_interfaces:msg/WheelSpeed.idl
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
#include "abaja_interfaces/msg/detail/wheel_speed__struct.h"
#include "abaja_interfaces/msg/detail/wheel_speed__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool abaja_interfaces__msg__wheel_speed__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("abaja_interfaces.msg._wheel_speed.WheelSpeed", full_classname_dest, 44) == 0);
  }
  abaja_interfaces__msg__WheelSpeed * ros_message = _ros_message;
  {  // front_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_left = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_right = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_left = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_right = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // average_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "average_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->average_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abaja_interfaces__msg__wheel_speed__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WheelSpeed */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abaja_interfaces.msg._wheel_speed");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WheelSpeed");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abaja_interfaces__msg__WheelSpeed * ros_message = (abaja_interfaces__msg__WheelSpeed *)raw_ros_message;
  {  // front_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // average_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->average_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "average_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
