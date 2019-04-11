#ifndef _ROS_SERVICE_TSolveAnkle_h
#define _ROS_SERVICE_TSolveAnkle_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "kenshiro_torque_controller/Ankletension.h"

namespace kenshiro_torque_controller
{

static const char TSOLVEANKLE[] = "kenshiro_torque_controller/TSolveAnkle";

  class TSolveAnkleRequest : public ros::Msg
  {
    public:
      uint8_t ltorque_length;
      double st_ltorque;
      double * ltorque;
      uint8_t rtorque_length;
      double st_rtorque;
      double * rtorque;

    TSolveAnkleRequest():
      ltorque_length(0), ltorque(NULL),
      rtorque_length(0), rtorque(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset++) = ltorque_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < ltorque_length; i++){
      union {
        double real;
        uint64_t base;
      } u_ltorquei;
      u_ltorquei.real = this->ltorque[i];
      *(outbuffer + offset + 0) = (u_ltorquei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ltorquei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ltorquei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ltorquei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_ltorquei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_ltorquei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_ltorquei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_ltorquei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->ltorque[i]);
      }
      *(outbuffer + offset++) = rtorque_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < rtorque_length; i++){
      union {
        double real;
        uint64_t base;
      } u_rtorquei;
      u_rtorquei.real = this->rtorque[i];
      *(outbuffer + offset + 0) = (u_rtorquei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rtorquei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rtorquei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rtorquei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_rtorquei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_rtorquei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_rtorquei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_rtorquei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->rtorque[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint8_t ltorque_lengthT = *(inbuffer + offset++);
      if(ltorque_lengthT > ltorque_length)
        this->ltorque = (double*)realloc(this->ltorque, ltorque_lengthT * sizeof(double));
      offset += 3;
      ltorque_length = ltorque_lengthT;
      for( uint8_t i = 0; i < ltorque_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_ltorque;
      u_st_ltorque.base = 0;
      u_st_ltorque.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_ltorque.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_ltorque.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_ltorque.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_ltorque.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_ltorque.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_ltorque.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_ltorque.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_ltorque = u_st_ltorque.real;
      offset += sizeof(this->st_ltorque);
        memcpy( &(this->ltorque[i]), &(this->st_ltorque), sizeof(double));
      }
      uint8_t rtorque_lengthT = *(inbuffer + offset++);
      if(rtorque_lengthT > rtorque_length)
        this->rtorque = (double*)realloc(this->rtorque, rtorque_lengthT * sizeof(double));
      offset += 3;
      rtorque_length = rtorque_lengthT;
      for( uint8_t i = 0; i < rtorque_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_rtorque;
      u_st_rtorque.base = 0;
      u_st_rtorque.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_rtorque.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_rtorque.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_rtorque.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_rtorque.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_rtorque.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_rtorque.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_rtorque.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_rtorque = u_st_rtorque.real;
      offset += sizeof(this->st_rtorque);
        memcpy( &(this->rtorque[i]), &(this->st_rtorque), sizeof(double));
      }
     return offset;
    }

    const char * getType(){ return TSOLVEANKLE; };
    const char * getMD5(){ return "817d98c45ae82b1cc00b1b7bde3c8476"; };

  };

  class TSolveAnkleResponse : public ros::Msg
  {
    public:
      kenshiro_torque_controller::Ankletension tension;

    TSolveAnkleResponse():
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

    const char * getType(){ return TSOLVEANKLE; };
    const char * getMD5(){ return "eb452e84f869bb2fe5d43764b8a25cbe"; };

  };

  class TSolveAnkle {
    public:
    typedef TSolveAnkleRequest Request;
    typedef TSolveAnkleResponse Response;
  };

}
#endif
