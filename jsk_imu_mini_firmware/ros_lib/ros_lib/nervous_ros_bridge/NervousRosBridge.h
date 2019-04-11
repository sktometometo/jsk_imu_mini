#ifndef _ROS_SERVICE_NervousRosBridge_h
#define _ROS_SERVICE_NervousRosBridge_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace nervous_ros_bridge
{

static const char NERVOUSROSBRIDGE[] = "nervous_ros_bridge/NervousRosBridge";

  class NervousRosBridgeRequest : public ros::Msg
  {
    public:
      const char* acname;
      const char* limb;
      const char* cmd;
      const char* val;

    NervousRosBridgeRequest():
      acname(""),
      limb(""),
      cmd(""),
      val("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_acname = strlen(this->acname);
      memcpy(outbuffer + offset, &length_acname, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->acname, length_acname);
      offset += length_acname;
      uint32_t length_limb = strlen(this->limb);
      memcpy(outbuffer + offset, &length_limb, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->limb, length_limb);
      offset += length_limb;
      uint32_t length_cmd = strlen(this->cmd);
      memcpy(outbuffer + offset, &length_cmd, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->cmd, length_cmd);
      offset += length_cmd;
      uint32_t length_val = strlen(this->val);
      memcpy(outbuffer + offset, &length_val, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->val, length_val);
      offset += length_val;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_acname;
      memcpy(&length_acname, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_acname; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_acname-1]=0;
      this->acname = (char *)(inbuffer + offset-1);
      offset += length_acname;
      uint32_t length_limb;
      memcpy(&length_limb, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_limb; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_limb-1]=0;
      this->limb = (char *)(inbuffer + offset-1);
      offset += length_limb;
      uint32_t length_cmd;
      memcpy(&length_cmd, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_cmd; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_cmd-1]=0;
      this->cmd = (char *)(inbuffer + offset-1);
      offset += length_cmd;
      uint32_t length_val;
      memcpy(&length_val, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_val; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_val-1]=0;
      this->val = (char *)(inbuffer + offset-1);
      offset += length_val;
     return offset;
    }

    const char * getType(){ return NERVOUSROSBRIDGE; };
    const char * getMD5(){ return "268d94a81fff8172f4f48efd9c6e3fde"; };

  };

  class NervousRosBridgeResponse : public ros::Msg
  {
    public:
      const char* result;

    NervousRosBridgeResponse():
      result("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_result = strlen(this->result);
      memcpy(outbuffer + offset, &length_result, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->result, length_result);
      offset += length_result;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_result;
      memcpy(&length_result, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_result; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_result-1]=0;
      this->result = (char *)(inbuffer + offset-1);
      offset += length_result;
     return offset;
    }

    const char * getType(){ return NERVOUSROSBRIDGE; };
    const char * getMD5(){ return "c22f2a1ed8654a0b365f1bb3f7ff2c0f"; };

  };

  class NervousRosBridge {
    public:
    typedef NervousRosBridgeRequest Request;
    typedef NervousRosBridgeResponse Response;
  };

}
#endif
