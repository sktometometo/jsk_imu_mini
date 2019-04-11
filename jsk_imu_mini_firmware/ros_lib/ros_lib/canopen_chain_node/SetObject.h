#ifndef _ROS_SERVICE_SetObject_h
#define _ROS_SERVICE_SetObject_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace canopen_chain_node
{

static const char SETOBJECT[] = "canopen_chain_node/SetObject";

  class SetObjectRequest : public ros::Msg
  {
    public:
      const char* node;
      const char* object;
      const char* value;
      bool cached;

    SetObjectRequest():
      node(""),
      object(""),
      value(""),
      cached(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_node = strlen(this->node);
      memcpy(outbuffer + offset, &length_node, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->node, length_node);
      offset += length_node;
      uint32_t length_object = strlen(this->object);
      memcpy(outbuffer + offset, &length_object, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->object, length_object);
      offset += length_object;
      uint32_t length_value = strlen(this->value);
      memcpy(outbuffer + offset, &length_value, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->value, length_value);
      offset += length_value;
      union {
        bool real;
        uint8_t base;
      } u_cached;
      u_cached.real = this->cached;
      *(outbuffer + offset + 0) = (u_cached.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->cached);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_node;
      memcpy(&length_node, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_node; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_node-1]=0;
      this->node = (char *)(inbuffer + offset-1);
      offset += length_node;
      uint32_t length_object;
      memcpy(&length_object, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_object; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_object-1]=0;
      this->object = (char *)(inbuffer + offset-1);
      offset += length_object;
      uint32_t length_value;
      memcpy(&length_value, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_value; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_value-1]=0;
      this->value = (char *)(inbuffer + offset-1);
      offset += length_value;
      union {
        bool real;
        uint8_t base;
      } u_cached;
      u_cached.base = 0;
      u_cached.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->cached = u_cached.real;
      offset += sizeof(this->cached);
     return offset;
    }

    const char * getType(){ return SETOBJECT; };
    const char * getMD5(){ return "4ecd0744a1b58ba666b2fdce9cfb8eb1"; };

  };

  class SetObjectResponse : public ros::Msg
  {
    public:
      bool success;
      const char* message;

    SetObjectResponse():
      success(0),
      message("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.real = this->success;
      *(outbuffer + offset + 0) = (u_success.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->success);
      uint32_t length_message = strlen(this->message);
      memcpy(outbuffer + offset, &length_message, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->message, length_message);
      offset += length_message;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.base = 0;
      u_success.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->success = u_success.real;
      offset += sizeof(this->success);
      uint32_t length_message;
      memcpy(&length_message, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_message; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_message-1]=0;
      this->message = (char *)(inbuffer + offset-1);
      offset += length_message;
     return offset;
    }

    const char * getType(){ return SETOBJECT; };
    const char * getMD5(){ return "937c9679a518e3a18d831e57125ea522"; };

  };

  class SetObject {
    public:
    typedef SetObjectRequest Request;
    typedef SetObjectResponse Response;
  };

}
#endif
