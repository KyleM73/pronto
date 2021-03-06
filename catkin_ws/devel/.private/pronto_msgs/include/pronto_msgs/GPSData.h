// Generated by gencpp from file pronto_msgs/GPSData.msg
// DO NOT EDIT!


#ifndef PRONTO_MSGS_MESSAGE_GPSDATA_H
#define PRONTO_MSGS_MESSAGE_GPSDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace pronto_msgs
{
template <class ContainerAllocator>
struct GPSData_
{
  typedef GPSData_<ContainerAllocator> Type;

  GPSData_()
    : header()
    , utime(0)
    , gps_lock(0)
    , longitude(0.0)
    , latitude(0.0)
    , elev(0.0)
    , horizontal_accuracy(0.0)
    , vertical_accuracy(0.0)
    , num_satellites(0)
    , speed(0.0)
    , heading(0.0)
    , xyz_pos()
    , gps_time(0.0)  {
      xyz_pos.assign(0.0);
  }
  GPSData_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , utime(0)
    , gps_lock(0)
    , longitude(0.0)
    , latitude(0.0)
    , elev(0.0)
    , horizontal_accuracy(0.0)
    , vertical_accuracy(0.0)
    , num_satellites(0)
    , speed(0.0)
    , heading(0.0)
    , xyz_pos()
    , gps_time(0.0)  {
  (void)_alloc;
      xyz_pos.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint64_t _utime_type;
  _utime_type utime;

   typedef int32_t _gps_lock_type;
  _gps_lock_type gps_lock;

   typedef double _longitude_type;
  _longitude_type longitude;

   typedef double _latitude_type;
  _latitude_type latitude;

   typedef double _elev_type;
  _elev_type elev;

   typedef double _horizontal_accuracy_type;
  _horizontal_accuracy_type horizontal_accuracy;

   typedef double _vertical_accuracy_type;
  _vertical_accuracy_type vertical_accuracy;

   typedef uint32_t _num_satellites_type;
  _num_satellites_type num_satellites;

   typedef double _speed_type;
  _speed_type speed;

   typedef double _heading_type;
  _heading_type heading;

   typedef boost::array<double, 3>  _xyz_pos_type;
  _xyz_pos_type xyz_pos;

   typedef double _gps_time_type;
  _gps_time_type gps_time;





  typedef boost::shared_ptr< ::pronto_msgs::GPSData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pronto_msgs::GPSData_<ContainerAllocator> const> ConstPtr;

}; // struct GPSData_

typedef ::pronto_msgs::GPSData_<std::allocator<void> > GPSData;

typedef boost::shared_ptr< ::pronto_msgs::GPSData > GPSDataPtr;
typedef boost::shared_ptr< ::pronto_msgs::GPSData const> GPSDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pronto_msgs::GPSData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pronto_msgs::GPSData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pronto_msgs::GPSData_<ContainerAllocator1> & lhs, const ::pronto_msgs::GPSData_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.utime == rhs.utime &&
    lhs.gps_lock == rhs.gps_lock &&
    lhs.longitude == rhs.longitude &&
    lhs.latitude == rhs.latitude &&
    lhs.elev == rhs.elev &&
    lhs.horizontal_accuracy == rhs.horizontal_accuracy &&
    lhs.vertical_accuracy == rhs.vertical_accuracy &&
    lhs.num_satellites == rhs.num_satellites &&
    lhs.speed == rhs.speed &&
    lhs.heading == rhs.heading &&
    lhs.xyz_pos == rhs.xyz_pos &&
    lhs.gps_time == rhs.gps_time;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pronto_msgs::GPSData_<ContainerAllocator1> & lhs, const ::pronto_msgs::GPSData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pronto_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pronto_msgs::GPSData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pronto_msgs::GPSData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pronto_msgs::GPSData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pronto_msgs::GPSData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pronto_msgs::GPSData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pronto_msgs::GPSData_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pronto_msgs::GPSData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "79674b2d1f8526159c0504accff3f259";
  }

  static const char* value(const ::pronto_msgs::GPSData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x79674b2d1f852615ULL;
  static const uint64_t static_value2 = 0x9c0504accff3f259ULL;
};

template<class ContainerAllocator>
struct DataType< ::pronto_msgs::GPSData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pronto_msgs/GPSData";
  }

  static const char* value(const ::pronto_msgs::GPSData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pronto_msgs::GPSData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"uint64 utime\n"
"int32 gps_lock\n"
"float64 longitude\n"
"float64 latitude\n"
"float64 elev\n"
"float64 horizontal_accuracy\n"
"float64 vertical_accuracy\n"
"uint32 num_satellites\n"
"float64 speed\n"
"float64 heading\n"
"float64[3] xyz_pos\n"
"float64 gps_time\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::pronto_msgs::GPSData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pronto_msgs::GPSData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.utime);
      stream.next(m.gps_lock);
      stream.next(m.longitude);
      stream.next(m.latitude);
      stream.next(m.elev);
      stream.next(m.horizontal_accuracy);
      stream.next(m.vertical_accuracy);
      stream.next(m.num_satellites);
      stream.next(m.speed);
      stream.next(m.heading);
      stream.next(m.xyz_pos);
      stream.next(m.gps_time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GPSData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pronto_msgs::GPSData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pronto_msgs::GPSData_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "utime: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.utime);
    s << indent << "gps_lock: ";
    Printer<int32_t>::stream(s, indent + "  ", v.gps_lock);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "elev: ";
    Printer<double>::stream(s, indent + "  ", v.elev);
    s << indent << "horizontal_accuracy: ";
    Printer<double>::stream(s, indent + "  ", v.horizontal_accuracy);
    s << indent << "vertical_accuracy: ";
    Printer<double>::stream(s, indent + "  ", v.vertical_accuracy);
    s << indent << "num_satellites: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.num_satellites);
    s << indent << "speed: ";
    Printer<double>::stream(s, indent + "  ", v.speed);
    s << indent << "heading: ";
    Printer<double>::stream(s, indent + "  ", v.heading);
    s << indent << "xyz_pos[]" << std::endl;
    for (size_t i = 0; i < v.xyz_pos.size(); ++i)
    {
      s << indent << "  xyz_pos[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.xyz_pos[i]);
    }
    s << indent << "gps_time: ";
    Printer<double>::stream(s, indent + "  ", v.gps_time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PRONTO_MSGS_MESSAGE_GPSDATA_H
