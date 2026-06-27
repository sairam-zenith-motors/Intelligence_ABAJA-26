# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abaja_interfaces:msg/LaneMarking.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneMarking(type):
    """Metaclass of message 'LaneMarking'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('abaja_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'abaja_interfaces.msg.LaneMarking')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_marking
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_marking
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_marking
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_marking
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_marking

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneMarking(metaclass=Metaclass_LaneMarking):
    """Message class 'LaneMarking'."""

    __slots__ = [
        '_left_lane_detected',
        '_right_lane_detected',
        '_left_lane_x',
        '_right_lane_x',
        '_lane_center_x',
        '_confidence',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'left_lane_detected': 'boolean',
        'right_lane_detected': 'boolean',
        'left_lane_x': 'float',
        'right_lane_x': 'float',
        'lane_center_x': 'float',
        'confidence': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_lane_detected = kwargs.get('left_lane_detected', bool())
        self.right_lane_detected = kwargs.get('right_lane_detected', bool())
        self.left_lane_x = kwargs.get('left_lane_x', float())
        self.right_lane_x = kwargs.get('right_lane_x', float())
        self.lane_center_x = kwargs.get('lane_center_x', float())
        self.confidence = kwargs.get('confidence', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.left_lane_detected != other.left_lane_detected:
            return False
        if self.right_lane_detected != other.right_lane_detected:
            return False
        if self.left_lane_x != other.left_lane_x:
            return False
        if self.right_lane_x != other.right_lane_x:
            return False
        if self.lane_center_x != other.lane_center_x:
            return False
        if self.confidence != other.confidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_lane_detected(self):
        """Message field 'left_lane_detected'."""
        return self._left_lane_detected

    @left_lane_detected.setter
    def left_lane_detected(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'left_lane_detected' field must be of type 'bool'"
        self._left_lane_detected = value

    @builtins.property
    def right_lane_detected(self):
        """Message field 'right_lane_detected'."""
        return self._right_lane_detected

    @right_lane_detected.setter
    def right_lane_detected(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'right_lane_detected' field must be of type 'bool'"
        self._right_lane_detected = value

    @builtins.property
    def left_lane_x(self):
        """Message field 'left_lane_x'."""
        return self._left_lane_x

    @left_lane_x.setter
    def left_lane_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'left_lane_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_lane_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_lane_x = value

    @builtins.property
    def right_lane_x(self):
        """Message field 'right_lane_x'."""
        return self._right_lane_x

    @right_lane_x.setter
    def right_lane_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'right_lane_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_lane_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_lane_x = value

    @builtins.property
    def lane_center_x(self):
        """Message field 'lane_center_x'."""
        return self._lane_center_x

    @lane_center_x.setter
    def lane_center_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'lane_center_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lane_center_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lane_center_x = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._confidence = value
