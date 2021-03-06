// Generated by gencpp from file pronto_msgs/QuadrupedForceTorqueSensors.msg
// DO NOT EDIT!


#ifndef PRONTO_MSGS_MESSAGE_QUADRUPEDFORCETORQUESENSORS_H
#define PRONTO_MSGS_MESSAGE_QUADRUPEDFORCETORQUESENSORS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Wrench.h>
#include <geometry_msgs/Wrench.h>
#include <geometry_msgs/Wrench.h>
#include <geometry_msgs/Wrench.h>

namespace pronto_msgs
{
template <class ContainerAllocator>
struct QuadrupedForceTorqueSensors_
{
  typedef QuadrupedForceTorqueSensors_<ContainerAllocator> Type;

  QuadrupedForceTorqueSensors_()
    : header()
    , lf()
    , rf()
    , lh()
    , rh()  {
    }
  QuadrupedForceTorqueSensors_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , lf(_alloc)
    , rf(_alloc)
    , lh(_alloc)
    , rh(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Wrench_<ContainerAllocator>  _lf_type;
  _lf_type lf;

   typedef  ::geometry_msgs::Wrench_<ContainerAllocator>  _rf_type;
  _rf_type rf;

   typedef  ::geometry_msgs::Wrench_<ContainerAllocator>  _lh_type;
  _lh_type lh;

   typedef  ::geometry_msgs::Wrench_<ContainerAllocator>  _rh_type;
  _rh_type rh;





  typedef boost::shared_ptr< ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator> const> ConstPtr;

}; // struct QuadrupedForceTorqueSensors_

typedef ::pronto_msgs::QuadrupedForceTorqueSensors_<std::allocator<void> > QuadrupedForceTorqueSensors;

typedef boost::shared_ptr< ::pronto_msgs::QuadrupedForceTorqueSensors > QuadrupedForceTorqueSensorsPtr;
typedef boost::shared_ptr< ::pronto_msgs::QuadrupedForceTorqueSensors const> QuadrupedForceTorqueSensorsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator1> & lhs, const ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.lf == rhs.lf &&
    lhs.rf == rhs.rf &&
    lhs.lh == rhs.lh &&
    lhs.rh == rhs.rh;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator1> & lhs, const ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pronto_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator> >
{
  static const char* value()
  {
    return "493101afbbcce5b658c33739603c5c3e";
  }

  static const char* value(const ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x493101afbbcce5b6ULL;
  static const uint64_t static_value2 = 0x58c33739603c5c3eULL;
};

template<class ContainerAllocator>
struct DataType< ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pronto_msgs/QuadrupedForceTorqueSensors";
  }

  static const char* value(const ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Atlas force torque sensors for the wrists and ankles\n"
"Header header\n"
"\n"
"geometry_msgs/Wrench lf\n"
"geometry_msgs/Wrench rf\n"
"geometry_msgs/Wrench lh\n"
"geometry_msgs/Wrench rh\n"
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
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Wrench\n"
"# This represents force in free space, separated into\n"
"# its linear and angular parts.\n"
"Vector3  force\n"
"Vector3  torque\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.lf);
      stream.next(m.rf);
      stream.next(m.lh);
      stream.next(m.rh);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct QuadrupedForceTorqueSensors_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pronto_msgs::QuadrupedForceTorqueSensors_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "lf: ";
    s << std::endl;
    Printer< ::geometry_msgs::Wrench_<ContainerAllocator> >::stream(s, indent + "  ", v.lf);
    s << indent << "rf: ";
    s << std::endl;
    Printer< ::geometry_msgs::Wrench_<ContainerAllocator> >::stream(s, indent + "  ", v.rf);
    s << indent << "lh: ";
    s << std::endl;
    Printer< ::geometry_msgs::Wrench_<ContainerAllocator> >::stream(s, indent + "  ", v.lh);
    s << indent << "rh: ";
    s << std::endl;
    Printer< ::geometry_msgs::Wrench_<ContainerAllocator> >::stream(s, indent + "  ", v.rh);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PRONTO_MSGS_MESSAGE_QUADRUPEDFORCETORQUESENSORS_H
