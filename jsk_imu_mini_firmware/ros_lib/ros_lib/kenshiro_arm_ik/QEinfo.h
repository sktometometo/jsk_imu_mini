#ifndef _ROS_kenshiro_arm_ik_QEinfo_h
#define _ROS_kenshiro_arm_ik_QEinfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace kenshiro_arm_ik
{

  class QEinfo : public ros::Msg
  {
    public:
      uint8_t ltheta_length;
      double st_ltheta;
      double * ltheta;
      uint8_t rtheta_length;
      double st_rtheta;
      double * rtheta;

    QEinfo():
      ltheta_length(0), ltheta(NULL),
      rtheta_length(0), rtheta(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset++) = ltheta_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < ltheta_length; i++){
      union {
        double real;
        uint64_t base;
      } u_lthetai;
      u_lthetai.real = this->ltheta[i];
      *(outbuffer + offset + 0) = (u_lthetai.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_lthetai.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_lthetai.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_lthetai.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_lthetai.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_lthetai.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_lthetai.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_lthetai.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->ltheta[i]);
      }
      *(outbuffer + offset++) = rtheta_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < rtheta_length; i++){
      union {
        double real;
        uint64_t base;
      } u_rthetai;
      u_rthetai.real = this->rtheta[i];
      *(outbuffer + offset + 0) = (u_rthetai.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rthetai.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rthetai.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rthetai.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_rthetai.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_rthetai.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_rthetai.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_rthetai.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->rtheta[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint8_t ltheta_lengthT = *(inbuffer + offset++);
      if(ltheta_lengthT > ltheta_length)
        this->ltheta = (double*)realloc(this->ltheta, ltheta_lengthT * sizeof(double));
      offset += 3;
      ltheta_length = ltheta_lengthT;
      for( uint8_t i = 0; i < ltheta_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_ltheta;
      u_st_ltheta.base = 0;
      u_st_ltheta.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_ltheta.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_ltheta.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_ltheta.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_ltheta.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_ltheta.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_ltheta.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_ltheta.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_ltheta = u_st_ltheta.real;
      offset += sizeof(this->st_ltheta);
        memcpy( &(this->ltheta[i]), &(this->st_ltheta), sizeof(double));
      }
      uint8_t rtheta_lengthT = *(inbuffer + offset++);
      if(rtheta_lengthT > rtheta_length)
        this->rtheta = (double*)realloc(this->rtheta, rtheta_lengthT * sizeof(double));
      offset += 3;
      rtheta_length = rtheta_lengthT;
      for( uint8_t i = 0; i < rtheta_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_rtheta;
      u_st_rtheta.base = 0;
      u_st_rtheta.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_rtheta.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_rtheta.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_rtheta.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_rtheta.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_rtheta.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_rtheta.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_rtheta.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_rtheta = u_st_rtheta.real;
      offset += sizeof(this->st_rtheta);
        memcpy( &(this->rtheta[i]), &(this->st_rtheta), sizeof(double));
      }
     return offset;
    }

    const char * getType(){ return "kenshiro_arm_ik/QEinfo"; };
    const char * getMD5(){ return "f75611cf9e449aa5fcc2bd2846e566ef"; };

  };

}
#endif