#ifndef _ROS_pddl_msgs_PDDLStep_h
#define _ROS_pddl_msgs_PDDLStep_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace pddl_msgs
{

  class PDDLStep : public ros::Msg
  {
    public:
      const char* action;
      uint8_t args_length;
      char* st_args;
      char* * args;
      const char* start_time;
      const char* action_duration;

    PDDLStep():
      action(""),
      args_length(0), args(NULL),
      start_time(""),
      action_duration("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_action = strlen(this->action);
      memcpy(outbuffer + offset, &length_action, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->action, length_action);
      offset += length_action;
      *(outbuffer + offset++) = args_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < args_length; i++){
      uint32_t length_argsi = strlen(this->args[i]);
      memcpy(outbuffer + offset, &length_argsi, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->args[i], length_argsi);
      offset += length_argsi;
      }
      uint32_t length_start_time = strlen(this->start_time);
      memcpy(outbuffer + offset, &length_start_time, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->start_time, length_start_time);
      offset += length_start_time;
      uint32_t length_action_duration = strlen(this->action_duration);
      memcpy(outbuffer + offset, &length_action_duration, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->action_duration, length_action_duration);
      offset += length_action_duration;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_action;
      memcpy(&length_action, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_action; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_action-1]=0;
      this->action = (char *)(inbuffer + offset-1);
      offset += length_action;
      uint8_t args_lengthT = *(inbuffer + offset++);
      if(args_lengthT > args_length)
        this->args = (char**)realloc(this->args, args_lengthT * sizeof(char*));
      offset += 3;
      args_length = args_lengthT;
      for( uint8_t i = 0; i < args_length; i++){
      uint32_t length_st_args;
      memcpy(&length_st_args, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_args; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_args-1]=0;
      this->st_args = (char *)(inbuffer + offset-1);
      offset += length_st_args;
        memcpy( &(this->args[i]), &(this->st_args), sizeof(char*));
      }
      uint32_t length_start_time;
      memcpy(&length_start_time, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_start_time; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_start_time-1]=0;
      this->start_time = (char *)(inbuffer + offset-1);
      offset += length_start_time;
      uint32_t length_action_duration;
      memcpy(&length_action_duration, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_action_duration; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_action_duration-1]=0;
      this->action_duration = (char *)(inbuffer + offset-1);
      offset += length_action_duration;
     return offset;
    }

    const char * getType(){ return "pddl_msgs/PDDLStep"; };
    const char * getMD5(){ return "d79a0663dfa206e7ac7a0755c6d1e154"; };

  };

}
#endif