# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abaja_interfaces:msg/SafetyState.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SafetyState(type):
    """Metaclass of message 'SafetyState'."""

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
                'abaja_interfaces.msg.SafetyState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__safety_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__safety_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__safety_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__safety_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__safety_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SafetyState(metaclass=Metaclass_SafetyState):
    """Message class 'SafetyState'."""

    __slots__ = [
        '_safe_to_drive',
        '_emergency_stop',
        '_dbw_allowed',
        '_perception_ok',
        '_lane_ok',
        '_aeb_ok',
        '_reason',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'safe_to_drive': 'boolean',
        'emergency_stop': 'boolean',
        'dbw_allowed': 'boolean',
        'perception_ok': 'boolean',
        'lane_ok': 'boolean',
        'aeb_ok': 'boolean',
        'reason': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.safe_to_drive = kwargs.get('safe_to_drive', bool())
        self.emergency_stop = kwargs.get('emergency_stop', bool())
        self.dbw_allowed = kwargs.get('dbw_allowed', bool())
        self.perception_ok = kwargs.get('perception_ok', bool())
        self.lane_ok = kwargs.get('lane_ok', bool())
        self.aeb_ok = kwargs.get('aeb_ok', bool())
        self.reason = kwargs.get('reason', str())

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
        if self.safe_to_drive != other.safe_to_drive:
            return False
        if self.emergency_stop != other.emergency_stop:
            return False
        if self.dbw_allowed != other.dbw_allowed:
            return False
        if self.perception_ok != other.perception_ok:
            return False
        if self.lane_ok != other.lane_ok:
            return False
        if self.aeb_ok != other.aeb_ok:
            return False
        if self.reason != other.reason:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def safe_to_drive(self):
        """Message field 'safe_to_drive'."""
        return self._safe_to_drive

    @safe_to_drive.setter
    def safe_to_drive(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'safe_to_drive' field must be of type 'bool'"
        self._safe_to_drive = value

    @builtins.property
    def emergency_stop(self):
        """Message field 'emergency_stop'."""
        return self._emergency_stop

    @emergency_stop.setter
    def emergency_stop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'emergency_stop' field must be of type 'bool'"
        self._emergency_stop = value

    @builtins.property
    def dbw_allowed(self):
        """Message field 'dbw_allowed'."""
        return self._dbw_allowed

    @dbw_allowed.setter
    def dbw_allowed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'dbw_allowed' field must be of type 'bool'"
        self._dbw_allowed = value

    @builtins.property
    def perception_ok(self):
        """Message field 'perception_ok'."""
        return self._perception_ok

    @perception_ok.setter
    def perception_ok(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'perception_ok' field must be of type 'bool'"
        self._perception_ok = value

    @builtins.property
    def lane_ok(self):
        """Message field 'lane_ok'."""
        return self._lane_ok

    @lane_ok.setter
    def lane_ok(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'lane_ok' field must be of type 'bool'"
        self._lane_ok = value

    @builtins.property
    def aeb_ok(self):
        """Message field 'aeb_ok'."""
        return self._aeb_ok

    @aeb_ok.setter
    def aeb_ok(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'aeb_ok' field must be of type 'bool'"
        self._aeb_ok = value

    @builtins.property
    def reason(self):
        """Message field 'reason'."""
        return self._reason

    @reason.setter
    def reason(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'reason' field must be of type 'str'"
        self._reason = value
