#ifndef _ROS_roseus_smach_Multiply10ActionResult_h
#define _ROS_roseus_smach_Multiply10ActionResult_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalStatus.h"
#include "roseus_smach/Multiply10Result.h"

namespace roseus_smach
{

  class Multiply10ActionResult : public ros::Msg
  {
    public:
      std_msgs::Header header;
      actionlib_msgs::GoalStatus status;
      roseus_smach::Multiply10Result result;

    Multiply10ActionResult():
      header(),
      status(),
      result()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->status.serialize(outbuffer + offset);
      offset += this->result.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->status.deserialize(inbuffer + offset);
      offset += this->result.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "roseus_smach/Multiply10ActionResult"; };
    const char * getMD5(){ return "9599baaab13952d63dd1c52591805a79"; };

  };

}
#endif