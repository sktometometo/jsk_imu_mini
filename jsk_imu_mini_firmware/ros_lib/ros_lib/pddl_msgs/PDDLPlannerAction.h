#ifndef _ROS_pddl_msgs_PDDLPlannerAction_h
#define _ROS_pddl_msgs_PDDLPlannerAction_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "pddl_msgs/PDDLPlannerActionGoal.h"
#include "pddl_msgs/PDDLPlannerActionResult.h"
#include "pddl_msgs/PDDLPlannerActionFeedback.h"

namespace pddl_msgs
{

  class PDDLPlannerAction : public ros::Msg
  {
    public:
      pddl_msgs::PDDLPlannerActionGoal action_goal;
      pddl_msgs::PDDLPlannerActionResult action_result;
      pddl_msgs::PDDLPlannerActionFeedback action_feedback;

    PDDLPlannerAction():
      action_goal(),
      action_result(),
      action_feedback()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->action_goal.serialize(outbuffer + offset);
      offset += this->action_result.serialize(outbuffer + offset);
      offset += this->action_feedback.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->action_goal.deserialize(inbuffer + offset);
      offset += this->action_result.deserialize(inbuffer + offset);
      offset += this->action_feedback.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "pddl_msgs/PDDLPlannerAction"; };
    const char * getMD5(){ return "77b3c8dbf9f4ca1d7b7f0779c5cedfe9"; };

  };

}
#endif