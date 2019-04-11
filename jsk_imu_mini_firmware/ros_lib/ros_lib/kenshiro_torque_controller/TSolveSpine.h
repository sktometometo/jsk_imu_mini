#ifndef _ROS_SERVICE_TSolveSpine_h
#define _ROS_SERVICE_TSolveSpine_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "kenshiro_torque_controller/Spinetension.h"

namespace kenshiro_torque_controller
{

static const char TSOLVESPINE[] = "kenshiro_torque_controller/TSolveSpine";

  class TSolveSpineRequest : public ros::Msg
  {
    public:
      uint8_t storque_length;
      double st_storque;
      double * storque;

    TSolveSpineRequest():
      storque_length(0), storque(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset++) = storque_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < storque_length; i++){
      union {
        double real;
        uint64_t base;
      } u_storquei;
      u_storquei.real = this->storque[i];
      *(outbuffer + offset + 0) = (u_storquei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_storquei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_storquei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_storquei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_storquei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_storquei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_storquei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_storquei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->storque[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint8_t storque_lengthT = *(inbuffer + offset++);
      if(storque_lengthT > storque_length)
        this->storque = (double*)realloc(this->storque, storque_lengthT * sizeof(double));
      offset += 3;
      storque_length = storque_lengthT;
      for( uint8_t i = 0; i < storque_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_storque;
      u_st_storque.base = 0;
      u_st_storque.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_storque.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_storque.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_storque.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_storque.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_storque.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_storque.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_storque.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_storque = u_st_storque.real;
      offset += sizeof(this->st_storque);
        memcpy( &(this->storque[i]), &(this->st_storque), sizeof(double));
      }
     return offset;
    }

    const char * getType(){ return TSOLVESPINE; };
    const char * getMD5(){ return "1a21c11c3c444febc9e1c2cb0be95f90"; };

  };

  class TSolveSpineResponse : public ros::Msg
  {
    public:
      kenshiro_torque_controller::Spinetension tension;

    TSolveSpineResponse():
      tension()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->tension.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->tension.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return TSOLVESPINE; };
    const char * getMD5(){ return "4681b0a9454f0940f3e8e9311323105c"; };

  };

  class TSolveSpine {
    public:
    typedef TSolveSpineRequest Request;
    typedef TSolveSpineResponse Response;
  };

}
#endif
