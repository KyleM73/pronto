# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from pronto_msgs/BipedForceTorqueSensors.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class BipedForceTorqueSensors(genpy.Message):
  _md5sum = "608f43cae98f77f5fb6cfbbbfa4c9253"
  _type = "pronto_msgs/BipedForceTorqueSensors"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """# Atlas force torque sensors for the wrists and ankles
Header header

geometry_msgs/Wrench l_foot
geometry_msgs/Wrench r_foot
geometry_msgs/Wrench l_hand
geometry_msgs/Wrench r_hand

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: geometry_msgs/Wrench
# This represents force in free space, separated into
# its linear and angular parts.
Vector3  force
Vector3  torque

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z"""
  __slots__ = ['header','l_foot','r_foot','l_hand','r_hand']
  _slot_types = ['std_msgs/Header','geometry_msgs/Wrench','geometry_msgs/Wrench','geometry_msgs/Wrench','geometry_msgs/Wrench']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,l_foot,r_foot,l_hand,r_hand

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(BipedForceTorqueSensors, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.l_foot is None:
        self.l_foot = geometry_msgs.msg.Wrench()
      if self.r_foot is None:
        self.r_foot = geometry_msgs.msg.Wrench()
      if self.l_hand is None:
        self.l_hand = geometry_msgs.msg.Wrench()
      if self.r_hand is None:
        self.r_hand = geometry_msgs.msg.Wrench()
    else:
      self.header = std_msgs.msg.Header()
      self.l_foot = geometry_msgs.msg.Wrench()
      self.r_foot = geometry_msgs.msg.Wrench()
      self.l_hand = geometry_msgs.msg.Wrench()
      self.r_hand = geometry_msgs.msg.Wrench()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_24d().pack(_x.l_foot.force.x, _x.l_foot.force.y, _x.l_foot.force.z, _x.l_foot.torque.x, _x.l_foot.torque.y, _x.l_foot.torque.z, _x.r_foot.force.x, _x.r_foot.force.y, _x.r_foot.force.z, _x.r_foot.torque.x, _x.r_foot.torque.y, _x.r_foot.torque.z, _x.l_hand.force.x, _x.l_hand.force.y, _x.l_hand.force.z, _x.l_hand.torque.x, _x.l_hand.torque.y, _x.l_hand.torque.z, _x.r_hand.force.x, _x.r_hand.force.y, _x.r_hand.force.z, _x.r_hand.torque.x, _x.r_hand.torque.y, _x.r_hand.torque.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.l_foot is None:
        self.l_foot = geometry_msgs.msg.Wrench()
      if self.r_foot is None:
        self.r_foot = geometry_msgs.msg.Wrench()
      if self.l_hand is None:
        self.l_hand = geometry_msgs.msg.Wrench()
      if self.r_hand is None:
        self.r_hand = geometry_msgs.msg.Wrench()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 192
      (_x.l_foot.force.x, _x.l_foot.force.y, _x.l_foot.force.z, _x.l_foot.torque.x, _x.l_foot.torque.y, _x.l_foot.torque.z, _x.r_foot.force.x, _x.r_foot.force.y, _x.r_foot.force.z, _x.r_foot.torque.x, _x.r_foot.torque.y, _x.r_foot.torque.z, _x.l_hand.force.x, _x.l_hand.force.y, _x.l_hand.force.z, _x.l_hand.torque.x, _x.l_hand.torque.y, _x.l_hand.torque.z, _x.r_hand.force.x, _x.r_hand.force.y, _x.r_hand.force.z, _x.r_hand.torque.x, _x.r_hand.torque.y, _x.r_hand.torque.z,) = _get_struct_24d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_24d().pack(_x.l_foot.force.x, _x.l_foot.force.y, _x.l_foot.force.z, _x.l_foot.torque.x, _x.l_foot.torque.y, _x.l_foot.torque.z, _x.r_foot.force.x, _x.r_foot.force.y, _x.r_foot.force.z, _x.r_foot.torque.x, _x.r_foot.torque.y, _x.r_foot.torque.z, _x.l_hand.force.x, _x.l_hand.force.y, _x.l_hand.force.z, _x.l_hand.torque.x, _x.l_hand.torque.y, _x.l_hand.torque.z, _x.r_hand.force.x, _x.r_hand.force.y, _x.r_hand.force.z, _x.r_hand.torque.x, _x.r_hand.torque.y, _x.r_hand.torque.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.l_foot is None:
        self.l_foot = geometry_msgs.msg.Wrench()
      if self.r_foot is None:
        self.r_foot = geometry_msgs.msg.Wrench()
      if self.l_hand is None:
        self.l_hand = geometry_msgs.msg.Wrench()
      if self.r_hand is None:
        self.r_hand = geometry_msgs.msg.Wrench()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 192
      (_x.l_foot.force.x, _x.l_foot.force.y, _x.l_foot.force.z, _x.l_foot.torque.x, _x.l_foot.torque.y, _x.l_foot.torque.z, _x.r_foot.force.x, _x.r_foot.force.y, _x.r_foot.force.z, _x.r_foot.torque.x, _x.r_foot.torque.y, _x.r_foot.torque.z, _x.l_hand.force.x, _x.l_hand.force.y, _x.l_hand.force.z, _x.l_hand.torque.x, _x.l_hand.torque.y, _x.l_hand.torque.z, _x.r_hand.force.x, _x.r_hand.force.y, _x.r_hand.force.z, _x.r_hand.torque.x, _x.r_hand.torque.y, _x.r_hand.torque.z,) = _get_struct_24d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_24d = None
def _get_struct_24d():
    global _struct_24d
    if _struct_24d is None:
        _struct_24d = struct.Struct("<24d")
    return _struct_24d
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I