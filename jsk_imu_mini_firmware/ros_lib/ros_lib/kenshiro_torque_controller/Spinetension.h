#ifndef _ROS_kenshiro_torque_controller_Spinetension_h
#define _ROS_kenshiro_torque_controller_Spinetension_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace kenshiro_torque_controller
{

  class Spinetension : public ros::Msg
  {
    public:
      uint8_t stension_length;
      double st_stension;
      double * stension;

    Spinetension():
      stension_length(0), stension(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset++) = stension_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < stension_length; i++){
      union {
        double real;
        uint64_t base;
      } u_stensioni;
      u_stensioni.real = this->stension[i];
      *(outbuffer + offset + 0) = (u_stensioni.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_stensioni.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_stensioni.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_stensioni.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_stensioni.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_stensioni.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_stensioni.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_stensioni.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->stension[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint8_t stension_lengthT = *(inbuffer + offset++);
      if(stension_lengthT > stension_length)
        this->stension = (double*)realloc(this->stension, stension_lengthT * sizeof(double));
      offset += 3;
      stension_length = stension_lengthT;
      for( uint8_t i = 0; i < stension_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_stension;
      u_st_stension.base = 0;
      u_st_stension.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_stension.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_stension.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_stension.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_stension.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_stension.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_stension.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_stension.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_stension = u_st_stension.real;
      offset += sizeof(this->st_stension);
        memcpy( &(this->stension[i]), &(this->st_stension), sizeof(double));
      }
     return offset;
    }

    const char * getType(){ return "kenshiro_torque_controller/Spinetension"; };
    const char * getMD5(){ return "69b6c0c0e0f8eb8f8b1f663d52d0bca4"; };

  };

}
#endif