# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abaja_interfaces:msg/DbwStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DbwStatus(type):
    """Metaclass of message 'DbwStatus'."""

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
                'abaja_interfaces.msg.DbwStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dbw_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dbw_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dbw_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dbw_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dbw_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DbwStatus(metaclass=Metaclass_DbwStatus):
    """Message class 'DbwStatus'."""

    __slots__ = [
        '_dbw_enabled',
        '_throttle_enabled',
        '_brake_enabled',
        '_steering_enabled',
        '_fault_detected',
        '_fault_reason',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'dbw_enabled': 'boolean',
        'throttle_enabled': 'boolean',
        'brake_enabled': 'boolean',
        'steering_enabled': 'boolean',
        'fault_detected': 'boolean',
        'fault_reason': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.dbw_enabled = kwargs.get('dbw_enabled', bool())
        self.throttle_enabled = kwargs.get('throttle_enabled', bool())
        self.brake_enabled = kwargs.get('brake_enabled', bool())
        self.steering_enabled = kwargs.get('steering_enabled', bool())
        self.fault_detected = kwargs.get('fault_detected', bool())
        self.fault_reason = kwargs.get('fault_reason', str())

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
        if self.dbw_enabled != other.dbw_enabled:
            return False
        if self.throttle_enabled != other.throttle_enabled:
            return False
        if self.brake_enabled != other.brake_enabled:
            return False
        if self.steering_enabled != other.steering_enabled:
            return False
        if self.fault_detected != other.fault_detected:
            return False
        if self.fault_reason != other.fault_reason:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def dbw_enabled(self):
        """Message field 'dbw_enabled'."""
        return self._dbw_enabled

    @dbw_enabled.setter
    def dbw_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'dbw_enabled' field must be of type 'bool'"
        self._dbw_enabled = value

    @builtins.property
    def throttle_enabled(self):
        """Message field 'throttle_enabled'."""
        return self._throttle_enabled

    @throttle_enabled.setter
    def throttle_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'throttle_enabled' field must be of type 'bool'"
        self._throttle_enabled = value

    @builtins.property
    def brake_enabled(self):
        """Message field 'brake_enabled'."""
        return self._brake_enabled

    @brake_enabled.setter
    def brake_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'brake_enabled' field must be of type 'bool'"
        self._brake_enabled = value

    @builtins.property
    def steering_enabled(self):
        """Message field 'steering_enabled'."""
        return self._steering_enabled

    @steering_enabled.setter
    def steering_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'steering_enabled' field must be of type 'bool'"
        self._steering_enabled = value

    @builtins.property
    def fault_detected(self):
        """Message field 'fault_detected'."""
        return self._fault_detected

    @fault_detected.setter
    def fault_detected(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'fault_detected' field must be of type 'bool'"
        self._fault_detected = value

    @builtins.property
    def fault_reason(self):
        """Message field 'fault_reason'."""
        return self._fault_reason

    @fault_reason.setter
    def fault_reason(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'fault_reason' field must be of type 'str'"
        self._fault_reason = value
