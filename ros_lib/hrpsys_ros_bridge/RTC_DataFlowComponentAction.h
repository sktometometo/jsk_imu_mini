#ifndef _ROS_hrpsys_ros_bridge_RTC_DataFlowComponentAction_h
#define _ROS_hrpsys_ros_bridge_RTC_DataFlowComponentAction_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace hrpsys_ros_bridge
{

  class RTC_DataFlowComponentAction : public ros::Msg
  {
    public:

    RTC_DataFlowComponentAction()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
     return offset;
    }

    const char * getType(){ return "hrpsys_ros_bridge/RTC_DataFlowComponentAction"; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

}
#endif