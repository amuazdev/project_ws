// Generated by gencpp from file cartographer_ros_msgs/SensorTopics.msg
// DO NOT EDIT!


#ifndef CARTOGRAPHER_ROS_MSGS_MESSAGE_SENSORTOPICS_H
#define CARTOGRAPHER_ROS_MSGS_MESSAGE_SENSORTOPICS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cartographer_ros_msgs
{
template <class ContainerAllocator>
struct SensorTopics_
{
  typedef SensorTopics_<ContainerAllocator> Type;

  SensorTopics_()
    : laser_scan_topic()
    , multi_echo_laser_scan_topic()
    , point_cloud2_topic()
    , imu_topic()
    , odometry_topic()
    , nav_sat_fix_topic()
    , landmark_topic()  {
    }
  SensorTopics_(const ContainerAllocator& _alloc)
    : laser_scan_topic(_alloc)
    , multi_echo_laser_scan_topic(_alloc)
    , point_cloud2_topic(_alloc)
    , imu_topic(_alloc)
    , odometry_topic(_alloc)
    , nav_sat_fix_topic(_alloc)
    , landmark_topic(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _laser_scan_topic_type;
  _laser_scan_topic_type laser_scan_topic;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _multi_echo_laser_scan_topic_type;
  _multi_echo_laser_scan_topic_type multi_echo_laser_scan_topic;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _point_cloud2_topic_type;
  _point_cloud2_topic_type point_cloud2_topic;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _imu_topic_type;
  _imu_topic_type imu_topic;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _odometry_topic_type;
  _odometry_topic_type odometry_topic;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _nav_sat_fix_topic_type;
  _nav_sat_fix_topic_type nav_sat_fix_topic;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _landmark_topic_type;
  _landmark_topic_type landmark_topic;





  typedef boost::shared_ptr< ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator> const> ConstPtr;

}; // struct SensorTopics_

typedef ::cartographer_ros_msgs::SensorTopics_<std::allocator<void> > SensorTopics;

typedef boost::shared_ptr< ::cartographer_ros_msgs::SensorTopics > SensorTopicsPtr;
typedef boost::shared_ptr< ::cartographer_ros_msgs::SensorTopics const> SensorTopicsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cartographer_ros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'cartographer_ros_msgs': ['/home/amz/carros_ws/src/cartographer_ros/cartographer_ros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bafbff7d66e3eeeb8d4a9195096cba08";
  }

  static const char* value(const ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbafbff7d66e3eeebULL;
  static const uint64_t static_value2 = 0x8d4a9195096cba08ULL;
};

template<class ContainerAllocator>
struct DataType< ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cartographer_ros_msgs/SensorTopics";
  }

  static const char* value(const ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Copyright 2016 The Cartographer Authors\n\
#\n\
# Licensed under the Apache License, Version 2.0 (the \"License\");\n\
# you may not use this file except in compliance with the License.\n\
# You may obtain a copy of the License at\n\
#\n\
#      http://www.apache.org/licenses/LICENSE-2.0\n\
#\n\
# Unless required by applicable law or agreed to in writing, software\n\
# distributed under the License is distributed on an \"AS IS\" BASIS,\n\
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n\
# See the License for the specific language governing permissions and\n\
# limitations under the License.\n\
\n\
string laser_scan_topic\n\
string multi_echo_laser_scan_topic\n\
string point_cloud2_topic\n\
string imu_topic\n\
string odometry_topic\n\
string nav_sat_fix_topic\n\
string landmark_topic\n\
";
  }

  static const char* value(const ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.laser_scan_topic);
      stream.next(m.multi_echo_laser_scan_topic);
      stream.next(m.point_cloud2_topic);
      stream.next(m.imu_topic);
      stream.next(m.odometry_topic);
      stream.next(m.nav_sat_fix_topic);
      stream.next(m.landmark_topic);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SensorTopics_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cartographer_ros_msgs::SensorTopics_<ContainerAllocator>& v)
  {
    s << indent << "laser_scan_topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.laser_scan_topic);
    s << indent << "multi_echo_laser_scan_topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.multi_echo_laser_scan_topic);
    s << indent << "point_cloud2_topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.point_cloud2_topic);
    s << indent << "imu_topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.imu_topic);
    s << indent << "odometry_topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.odometry_topic);
    s << indent << "nav_sat_fix_topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.nav_sat_fix_topic);
    s << indent << "landmark_topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.landmark_topic);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARTOGRAPHER_ROS_MSGS_MESSAGE_SENSORTOPICS_H
