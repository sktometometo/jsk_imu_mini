#ifndef _ROS_roseus_smach_Multiply10ActionGoal_h
#define _ROS_roseus_smach_Multiply10ActionGoal_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalID.h"
#include "roseus_smach/Multiply10Goal.h"

namespace roseus_smach
{

  class Multiply10ActionGoal : public ros::Msg
  {
    public:
      std_msgs::Header header;
      actionlib_msgs::GoalID goal_id;
      roseus_smach::Multiply10Goal goal;

    Multiply10ActionGoal():
      header(),
      goal_id(),
      goal()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->goal_id.serialize(outbuffer + offset);
      offset += this->goal.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->goal_id.deserialize(inbuffer + offset);
      offset += this->goal.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "roseus_smach/Multiply10ActionGoal"; };
    const char * getMD5(){ return "dc1a763911ac8fed593b103b6d986502"; };

  };

}
#endif