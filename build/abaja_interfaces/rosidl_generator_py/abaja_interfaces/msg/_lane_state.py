# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abaja_interfaces:msg/LaneState.idl
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


class Metaclass_LaneState(type):
    """Metaclass of message 'LaneState'."""

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
                'abaja_interfaces.msg.LaneState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneState(metaclass=Metaclass_LaneState):
    """Message class 'LaneState'."""

    __slots__ = [
        '_lane_available',
        '_lateral_error_m',
        '_heading_error_deg',
        '_lane_confidence',
        '_status_text',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'lane_available': 'boolean',
        'lateral_error_m': 'float',
        'heading_error_deg': 'float',
        'lane_confidence': 'float',
        'status_text': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.lane_available = kwargs.get('lane_available', bool())
        self.lateral_error_m = kwargs.get('lateral_error_m', float())
        self.heading_error_deg = kwargs.get('heading_error_deg', float())
        self.lane_confidence = kwargs.get('lane_confidence', float())
        self.status_text = kwargs.get('status_text', str())

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
        if self.lane_available != other.lane_available:
            return False
        if self.lateral_error_m != other.lateral_error_m:
            return False
        if self.heading_error_deg != other.heading_error_deg:
            return False
        if self.lane_confidence != other.lane_confidence:
            return False
        if self.status_text != other.status_text:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lane_available(self):
        """Message field 'lane_available'."""
        return self._lane_available

    @lane_available.setter
    def lane_available(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'lane_available' field must be of type 'bool'"
        self._lane_available = value

    @builtins.property
    def lateral_error_m(self):
        """Message field 'lateral_error_m'."""
        return self._lateral_error_m

    @lateral_error_m.setter
    def lateral_error_m(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'lateral_error_m' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lateral_error_m' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lateral_error_m = value

    @builtins.property
    def heading_error_deg(self):
        """Message field 'heading_error_deg'."""
        return self._heading_error_deg

    @heading_error_deg.setter
    def heading_error_deg(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'heading_error_deg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_error_deg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_error_deg = value

    @builtins.property
    def lane_confidence(self):
        """Message field 'lane_confidence'."""
        return self._lane_confidence

    @lane_confidence.setter
    def lane_confidence(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'lane_confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lane_confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lane_confidence = value

    @builtins.property
    def status_text(self):
        """Message field 'status_text'."""
        return self._status_text

    @status_text.setter
    def status_text(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'status_text' field must be of type 'str'"
        self._status_text = value
