#ifndef _ROS_pddl_msgs_PDDLPlannerResult_h
#define _ROS_pddl_msgs_PDDLPlannerResult_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "pddl_msgs/PDDLStep.h"

namespace pddl_msgs
{

  class PDDLPlannerResult : public ros::Msg
  {
    public:
      uint8_t data_length;
      char* st_data;
      char* * data;
      bool use_durative_action;
      uint8_t sequence_length;
      pddl_msgs::PDDLStep st_sequence;
      pddl_msgs::PDDLStep * sequence;

    PDDLPlannerResult():
      data_length(0), data(NULL),
      use_durative_action(0),
      sequence_length(0), sequence(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset++) = data_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < data_length; i++){
      uint32_t length_datai = strlen(this->data[i]);
      memcpy(outbuffer + offset, &length_datai, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->data[i], length_datai);
      offset += length_datai;
      }
      union {
        bool real;
        uint8_t base;
      } u_use_durative_action;
      u_use_durative_action.real = this->use_durative_action;
      *(outbuffer + offset + 0) = (u_use_durative_action.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->use_durative_action);
      *(outbuffer + offset++) = sequence_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < sequence_length; i++){
      offset += this->sequence[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint8_t data_lengthT = *(inbuffer + offset++);
      if(data_lengthT > data_length)
        this->data = (char**)realloc(this->data, data_lengthT * sizeof(char*));
      offset += 3;
      data_length = data_lengthT;
      for( uint8_t i = 0; i < data_length; i++){
      uint32_t length_st_data;
      memcpy(&length_st_data, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_data; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_data-1]=0;
      this->st_data = (char *)(inbuffer + offset-1);
      offset += length_st_data;
        memcpy( &(this->data[i]), &(this->st_data), sizeof(char*));
      }
      union {
        bool real;
        uint8_t base;
      } u_use_durative_action;
      u_use_durative_action.base = 0;
      u_use_durative_action.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->use_durative_action = u_use_durative_action.real;
      offset += sizeof(this->use_durative_action);
      uint8_t sequence_lengthT = *(inbuffer + offset++);
      if(sequence_lengthT > sequence_length)
        this->sequence = (pddl_msgs::PDDLStep*)realloc(this->sequence, sequence_lengthT * sizeof(pddl_msgs::PDDLStep));
      offset += 3;
      sequence_length = sequence_lengthT;
      for( uint8_t i = 0; i < sequence_length; i++){
      offset += this->st_sequence.deserialize(inbuffer + offset);
        memcpy( &(this->sequence[i]), &(this->st_sequence), sizeof(pddl_msgs::PDDLStep));
      }
     return offset;
    }

    const char * getType(){ return "pddl_msgs/PDDLPlannerResult"; };
    const char * getMD5(){ return "9220276db431d308099ea5d53fef9a9b"; };

  };

}
#endif