// Generated by gencpp from file robot_msgs/ChangeColorRequest.msg
// DO NOT EDIT!


#ifndef ROBOT_MSGS_MESSAGE_CHANGECOLORREQUEST_H
#define ROBOT_MSGS_MESSAGE_CHANGECOLORREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/ColorRGBA.h>

namespace robot_msgs
{
template <class ContainerAllocator>
struct ChangeColorRequest_
{
  typedef ChangeColorRequest_<ContainerAllocator> Type;

  ChangeColorRequest_()
    : color()  {
    }
  ChangeColorRequest_(const ContainerAllocator& _alloc)
    : color(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _color_type;
  _color_type color;





  typedef boost::shared_ptr< ::robot_msgs::ChangeColorRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_msgs::ChangeColorRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ChangeColorRequest_

typedef ::robot_msgs::ChangeColorRequest_<std::allocator<void> > ChangeColorRequest;

typedef boost::shared_ptr< ::robot_msgs::ChangeColorRequest > ChangeColorRequestPtr;
typedef boost::shared_ptr< ::robot_msgs::ChangeColorRequest const> ChangeColorRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_msgs::ChangeColorRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_msgs::ChangeColorRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_msgs::ChangeColorRequest_<ContainerAllocator1> & lhs, const ::robot_msgs::ChangeColorRequest_<ContainerAllocator2> & rhs)
{
  return lhs.color == rhs.color;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_msgs::ChangeColorRequest_<ContainerAllocator1> & lhs, const ::robot_msgs::ChangeColorRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::ChangeColorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_msgs::ChangeColorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::ChangeColorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_msgs::ChangeColorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::ChangeColorRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_msgs::ChangeColorRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_msgs::ChangeColorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3e04b62b1b39cd97e873789f0bb130e7";
  }

  static const char* value(const ::robot_msgs::ChangeColorRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3e04b62b1b39cd97ULL;
  static const uint64_t static_value2 = 0xe873789f0bb130e7ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_msgs::ChangeColorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_msgs/ChangeColorRequest";
  }

  static const char* value(const ::robot_msgs::ChangeColorRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_msgs::ChangeColorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/ColorRGBA color\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/ColorRGBA\n"
"float32 r\n"
"float32 g\n"
"float32 b\n"
"float32 a\n"
;
  }

  static const char* value(const ::robot_msgs::ChangeColorRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_msgs::ChangeColorRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.color);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ChangeColorRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_msgs::ChangeColorRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_msgs::ChangeColorRequest_<ContainerAllocator>& v)
  {
    s << indent << "color: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.color);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_MSGS_MESSAGE_CHANGECOLORREQUEST_H