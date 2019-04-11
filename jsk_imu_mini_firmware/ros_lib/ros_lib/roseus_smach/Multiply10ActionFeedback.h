#ifndef _ROS_roseus_smach_Multiply10ActionFeedback_h
#define _ROS_roseus_smach_Multiply10ActionFeedback_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalStatus.h"
#include "roseus_smach/Multiply10Feedback.h"

namespace roseus_smach
{

  class Multiply10ActionFeedback : public ros::Msg
  {
    public:
      std_msgs::Header header;
      actionlib_msgs::GoalStatus status;
      roseus_smach::Multiply10Feedback feedback;

    Multiply10ActionFeedback():
      header(),
      status(),
      feedback()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->status.serialize(outbuffer + offset);
      offset += this->feedback.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->status.deserialize(inbuffer + offset);
      offset += this->feedback.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "roseus_smach/Multiply10ActionFeedback"; };
    const char * getMD5(){ return "ce7bcc860ef310bc2edbb3a3a2388663"; };

  };

}
#endif