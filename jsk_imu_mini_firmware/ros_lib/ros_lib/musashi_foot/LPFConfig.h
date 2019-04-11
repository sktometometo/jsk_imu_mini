#ifndef _ROS_SERVICE_LPFConfig_h
#define _ROS_SERVICE_LPFConfig_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace musashi_foot
{

static const char LPFCONFIG[] = "musashi_foot/LPFConfig";

  class LPFConfigRequest : public ros::Msg
  {
    public:
      float coef;

    LPFConfigRequest():
      coef(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_coef;
      u_coef.real = this->coef;
      *(outbuffer + offset + 0) = (u_coef.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_coef.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_coef.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_coef.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->coef);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_coef;
      u_coef.base = 0;
      u_coef.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_coef.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_coef.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_coef.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->coef = u_coef.real;
      offset += sizeof(this->coef);
     return offset;
    }

    const char * getType(){ return LPFCONFIG; };
    const char * getMD5(){ return "818f43eb676f3870721ba39f182d0b8b"; };

  };

  class LPFConfigResponse : public ros::Msg
  {
    public:

    LPFConfigResponse()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
     return offset;
    }

    const char * getType(){ return LPFCONFIG; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class LPFConfig {
    public:
    typedef LPFConfigRequest Request;
    typedef LPFConfigResponse Response;
  };

}
#endif
