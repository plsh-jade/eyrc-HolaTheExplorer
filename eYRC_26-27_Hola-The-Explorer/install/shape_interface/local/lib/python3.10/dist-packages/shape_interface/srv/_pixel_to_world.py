# generated from rosidl_generator_py/resource/_idl.py.em
# with input from shape_interface:srv/PixelToWorld.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PixelToWorld_Request(type):
    """Metaclass of message 'PixelToWorld_Request'."""

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
            module = import_type_support('shape_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'shape_interface.srv.PixelToWorld_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pixel_to_world__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pixel_to_world__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pixel_to_world__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pixel_to_world__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pixel_to_world__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PixelToWorld_Request(metaclass=Metaclass_PixelToWorld_Request):
    """Message class 'PixelToWorld_Request'."""

    __slots__ = [
        '_pixel_x',
        '_pixel_y',
    ]

    _fields_and_field_types = {
        'pixel_x': 'double',
        'pixel_y': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pixel_x = kwargs.get('pixel_x', float())
        self.pixel_y = kwargs.get('pixel_y', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.pixel_x != other.pixel_x:
            return False
        if self.pixel_y != other.pixel_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pixel_x(self):
        """Message field 'pixel_x'."""
        return self._pixel_x

    @pixel_x.setter
    def pixel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pixel_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pixel_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pixel_x = value

    @builtins.property
    def pixel_y(self):
        """Message field 'pixel_y'."""
        return self._pixel_y

    @pixel_y.setter
    def pixel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pixel_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pixel_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pixel_y = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_PixelToWorld_Response(type):
    """Metaclass of message 'PixelToWorld_Response'."""

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
            module = import_type_support('shape_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'shape_interface.srv.PixelToWorld_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pixel_to_world__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pixel_to_world__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pixel_to_world__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pixel_to_world__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pixel_to_world__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PixelToWorld_Response(metaclass=Metaclass_PixelToWorld_Response):
    """Message class 'PixelToWorld_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_world_x',
        '_world_y',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'world_x': 'double',
        'world_y': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.world_x = kwargs.get('world_x', float())
        self.world_y = kwargs.get('world_y', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        if self.world_x != other.world_x:
            return False
        if self.world_y != other.world_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def world_x(self):
        """Message field 'world_x'."""
        return self._world_x

    @world_x.setter
    def world_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'world_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'world_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._world_x = value

    @builtins.property
    def world_y(self):
        """Message field 'world_y'."""
        return self._world_y

    @world_y.setter
    def world_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'world_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'world_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._world_y = value


class Metaclass_PixelToWorld(type):
    """Metaclass of service 'PixelToWorld'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('shape_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'shape_interface.srv.PixelToWorld')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__pixel_to_world

            from shape_interface.srv import _pixel_to_world
            if _pixel_to_world.Metaclass_PixelToWorld_Request._TYPE_SUPPORT is None:
                _pixel_to_world.Metaclass_PixelToWorld_Request.__import_type_support__()
            if _pixel_to_world.Metaclass_PixelToWorld_Response._TYPE_SUPPORT is None:
                _pixel_to_world.Metaclass_PixelToWorld_Response.__import_type_support__()


class PixelToWorld(metaclass=Metaclass_PixelToWorld):
    from shape_interface.srv._pixel_to_world import PixelToWorld_Request as Request
    from shape_interface.srv._pixel_to_world import PixelToWorld_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
