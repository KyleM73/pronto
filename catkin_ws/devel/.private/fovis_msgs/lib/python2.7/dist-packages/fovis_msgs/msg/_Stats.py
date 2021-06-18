# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from fovis_msgs/Stats.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class Stats(genpy.Message):
  _md5sum = "dbaf83c8b3afd2954f468abc4e36c223"
  _type = "fovis_msgs/Stats"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """# state of fovis
# same as fovis::stats_t lcm message
Header header

int32 num_matches
int32 num_inliers
int32 num_detected_keypoints
int32 num_reprojection_failures

# keypoints after pruning
int32 num_keypoints

float64 mean_reprojection_error
float64 fast_threshold

uint8 STATUS_CODE_NO_DATA = 0
uint8 STATUS_CODE_SUCCESS = 1
uint8 STATUS_CODE_INSUFFICIENT_INLIERS = 2
uint8 STATUS_CODE_OPTIMIZATION_FAILURE = 3
uint8 STATUS_CODE_REPROJECTION_ERROR = 4

uint8 status

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
"""
  # Pseudo-constants
  STATUS_CODE_NO_DATA = 0
  STATUS_CODE_SUCCESS = 1
  STATUS_CODE_INSUFFICIENT_INLIERS = 2
  STATUS_CODE_OPTIMIZATION_FAILURE = 3
  STATUS_CODE_REPROJECTION_ERROR = 4

  __slots__ = ['header','num_matches','num_inliers','num_detected_keypoints','num_reprojection_failures','num_keypoints','mean_reprojection_error','fast_threshold','status']
  _slot_types = ['std_msgs/Header','int32','int32','int32','int32','int32','float64','float64','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,num_matches,num_inliers,num_detected_keypoints,num_reprojection_failures,num_keypoints,mean_reprojection_error,fast_threshold,status

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Stats, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.num_matches is None:
        self.num_matches = 0
      if self.num_inliers is None:
        self.num_inliers = 0
      if self.num_detected_keypoints is None:
        self.num_detected_keypoints = 0
      if self.num_reprojection_failures is None:
        self.num_reprojection_failures = 0
      if self.num_keypoints is None:
        self.num_keypoints = 0
      if self.mean_reprojection_error is None:
        self.mean_reprojection_error = 0.
      if self.fast_threshold is None:
        self.fast_threshold = 0.
      if self.status is None:
        self.status = 0
    else:
      self.header = std_msgs.msg.Header()
      self.num_matches = 0
      self.num_inliers = 0
      self.num_detected_keypoints = 0
      self.num_reprojection_failures = 0
      self.num_keypoints = 0
      self.mean_reprojection_error = 0.
      self.fast_threshold = 0.
      self.status = 0

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
      buff.write(_get_struct_5i2dB().pack(_x.num_matches, _x.num_inliers, _x.num_detected_keypoints, _x.num_reprojection_failures, _x.num_keypoints, _x.mean_reprojection_error, _x.fast_threshold, _x.status))
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
      end += 37
      (_x.num_matches, _x.num_inliers, _x.num_detected_keypoints, _x.num_reprojection_failures, _x.num_keypoints, _x.mean_reprojection_error, _x.fast_threshold, _x.status,) = _get_struct_5i2dB().unpack(str[start:end])
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
      buff.write(_get_struct_5i2dB().pack(_x.num_matches, _x.num_inliers, _x.num_detected_keypoints, _x.num_reprojection_failures, _x.num_keypoints, _x.mean_reprojection_error, _x.fast_threshold, _x.status))
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
      end += 37
      (_x.num_matches, _x.num_inliers, _x.num_detected_keypoints, _x.num_reprojection_failures, _x.num_keypoints, _x.mean_reprojection_error, _x.fast_threshold, _x.status,) = _get_struct_5i2dB().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_5i2dB = None
def _get_struct_5i2dB():
    global _struct_5i2dB
    if _struct_5i2dB is None:
        _struct_5i2dB = struct.Struct("<5i2dB")
    return _struct_5i2dB