// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from abaja_interfaces:msg/LaneMarking.idl
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
#include "abaja_interfaces/msg/detail/lane_marking__struct.h"
#include "abaja_interfaces/msg/detail/lane_marking__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool abaja_interfaces__msg__lane_marking__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("abaja_interfaces.msg._lane_marking.LaneMarking", full_classname_dest, 46) == 0);
  }
  abaja_interfaces__msg__LaneMarking * ros_message = _ros_message;
  {  // left_lane_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_lane_detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->left_lane_detected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // right_lane_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_lane_detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->right_lane_detected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // left_lane_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_lane_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_lane_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_lane_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_lane_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_lane_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lane_center_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_center_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lane_center_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->confidence = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * abaja_interfaces__msg__lane_marking__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LaneMarking */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("abaja_interfaces.msg._lane_marking");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaneMarking");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  abaja_interfaces__msg__LaneMarking * ros_message = (abaja_interfaces__msg__LaneMarking *)raw_ros_message;
  {  // left_lane_detected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->left_lane_detected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_lane_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_lane_detected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->right_lane_detected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_lane_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_lane_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_lane_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_lane_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_lane_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_lane_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_lane_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_center_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lane_center_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_center_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confidence
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
