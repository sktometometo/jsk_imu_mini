#ifndef _ROS_pddl_msgs_PDDLPlannerActionResult_h
#define _ROS_pddl_msgs_PDDLPlannerActionResult_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalStatus.h"
#include "pddl_msgs/PDDLPlannerResult.h"

namespace pddl_msgs
{

  class PDDLPlannerActionResult : public ros::Msg
  {
    public:
      std_msgs::Header header;
      actionlib_msgs::GoalStatus status;
      pddl_msgs::PDDLPlannerResult result;

    PDDLPlannerActionResult():
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

    const char * getType(){ return "pddl_msgs/PDDLPlannerActionResult"; };
    const char * getMD5(){ return "23505e01fe89e9bdbc26929cfac80648"; };

  };

}
#endif