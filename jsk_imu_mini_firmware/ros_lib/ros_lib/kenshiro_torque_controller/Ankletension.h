#ifndef _ROS_kenshiro_torque_controller_Ankletension_h
#define _ROS_kenshiro_torque_controller_Ankletension_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace kenshiro_torque_controller
{

  class Ankletension : public ros::Msg
  {
    public:
      uint8_t ltension_length;
      double st_ltension;
      double * ltension;
      uint8_t rtension_length;
      double st_rtension;
      double * rtension;

    Ankletension():
      ltension_length(0), ltension(NULL),
      rtension_length(0), rtension(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset++) = ltension_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < ltension_length; i++){
      union {
        double real;
        uint64_t base;
      } u_ltensioni;
      u_ltensioni.real = this->ltension[i];
      *(outbuffer + offset + 0) = (u_ltensioni.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ltensioni.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ltensioni.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ltensioni.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_ltensioni.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_ltensioni.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_ltensioni.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_ltensioni.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->ltension[i]);
      }
      *(outbuffer + offset++) = rtension_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < rtension_length; i++){
      union {
        double real;
        uint64_t base;
      } u_rtensioni;
      u_rtensioni.real = this->rtension[i];
      *(outbuffer + offset + 0) = (u_rtensioni.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rtensioni.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rtensioni.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rtensioni.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_rtensioni.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_rtensioni.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_rtensioni.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_rtensioni.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->rtension[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint8_t ltension_lengthT = *(inbuffer + offset++);
      if(ltension_lengthT > ltension_length)
        this->ltension = (double*)realloc(this->ltension, ltension_lengthT * sizeof(double));
      offset += 3;
      ltension_length = ltension_lengthT;
      for( uint8_t i = 0; i < ltension_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_ltension;
      u_st_ltension.base = 0;
      u_st_ltension.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_ltension.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_ltension.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_ltension.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_ltension.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_ltension.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_ltension.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_ltension.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_ltension = u_st_ltension.real;
      offset += sizeof(this->st_ltension);
        memcpy( &(this->ltension[i]), &(this->st_ltension), sizeof(double));
      }
      uint8_t rtension_lengthT = *(inbuffer + offset++);
      if(rtension_lengthT > rtension_length)
        this->rtension = (double*)realloc(this->rtension, rtension_lengthT * sizeof(double));
      offset += 3;
      rtension_length = rtension_lengthT;
      for( uint8_t i = 0; i < rtension_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_rtension;
      u_st_rtension.base = 0;
      u_st_rtension.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_rtension.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_rtension.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_rtension.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_rtension.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_rtension.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_rtension.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_rtension.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_rtension = u_st_rtension.real;
      offset += sizeof(this->st_rtension);
        memcpy( &(this->rtension[i]), &(this->st_rtension), sizeof(double));
      }
     return offset;
    }

    const char * getType(){ return "kenshiro_torque_controller/Ankletension"; };
    const char * getMD5(){ return "8603458a3af90045e7028c5881c5a066"; };

  };

}
#endif