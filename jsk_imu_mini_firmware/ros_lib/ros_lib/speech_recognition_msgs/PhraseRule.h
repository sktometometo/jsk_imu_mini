#ifndef _ROS_speech_recognition_msgs_PhraseRule_h
#define _ROS_speech_recognition_msgs_PhraseRule_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace speech_recognition_msgs
{

  class PhraseRule : public ros::Msg
  {
    public:
      const char* symbol;
      uint8_t definition_length;
      char* st_definition;
      char* * definition;

    PhraseRule():
      symbol(""),
      definition_length(0), definition(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_symbol = strlen(this->symbol);
      memcpy(outbuffer + offset, &length_symbol, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->symbol, length_symbol);
      offset += length_symbol;
      *(outbuffer + offset++) = definition_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < definition_length; i++){
      uint32_t length_definitioni = strlen(this->definition[i]);
      memcpy(outbuffer + offset, &length_definitioni, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->definition[i], length_definitioni);
      offset += length_definitioni;
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_symbol;
      memcpy(&length_symbol, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_symbol; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_symbol-1]=0;
      this->symbol = (char *)(inbuffer + offset-1);
      offset += length_symbol;
      uint8_t definition_lengthT = *(inbuffer + offset++);
      if(definition_lengthT > definition_length)
        this->definition = (char**)realloc(this->definition, definition_lengthT * sizeof(char*));
      offset += 3;
      definition_length = definition_lengthT;
      for( uint8_t i = 0; i < definition_length; i++){
      uint32_t length_st_definition;
      memcpy(&length_st_definition, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_definition; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_definition-1]=0;
      this->st_definition = (char *)(inbuffer + offset-1);
      offset += length_st_definition;
        memcpy( &(this->definition[i]), &(this->st_definition), sizeof(char*));
      }
     return offset;
    }

    const char * getType(){ return "speech_recognition_msgs/PhraseRule"; };
    const char * getMD5(){ return "8184f0f93fdc3a6768ac26cd56040fdd"; };

  };

}
#endif