#ifndef _ROS_SERVICE_IkSolveQE_h
#define _ROS_SERVICE_IkSolveQE_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "kenshiro_arm_ik/QEinfo.h"

namespace kenshiro_arm_ik
{

static const char IKSOLVEQE[] = "kenshiro_arm_ik/IkSolveQE";

  class IkSolveQERequest : public ros::Msg
  {
    public:
      uint8_t lxyz_length;
      double st_lxyz;
      double * lxyz;
      uint8_t rxyz_length;
      double st_rxyz;
      double * rxyz;

    IkSolveQERequest():
      lxyz_length(0), lxyz(NULL),
      rxyz_length(0), rxyz(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset++) = lxyz_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < lxyz_length; i++){
      union {
        double real;
        uint64_t base;
      } u_lxyzi;
      u_lxyzi.real = this->lxyz[i];
      *(outbuffer + offset + 0) = (u_lxyzi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_lxyzi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_lxyzi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_lxyzi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_lxyzi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_lxyzi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_lxyzi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_lxyzi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->lxyz[i]);
      }
      *(outbuffer + offset++) = rxyz_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < rxyz_length; i++){
      union {
        double real;
        uint64_t base;
      } u_rxyzi;
      u_rxyzi.real = this->rxyz[i];
      *(outbuffer + offset + 0) = (u_rxyzi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rxyzi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rxyzi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rxyzi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_rxyzi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_rxyzi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_rxyzi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_rxyzi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->rxyz[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint8_t lxyz_lengthT = *(inbuffer + offset++);
      if(lxyz_lengthT > lxyz_length)
        this->lxyz = (double*)realloc(this->lxyz, lxyz_lengthT * sizeof(double));
      offset += 3;
      lxyz_length = lxyz_lengthT;
      for( uint8_t i = 0; i < lxyz_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_lxyz;
      u_st_lxyz.base = 0;
      u_st_lxyz.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_lxyz.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_lxyz.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_lxyz.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_lxyz.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_lxyz.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_lxyz.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_lxyz.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_lxyz = u_st_lxyz.real;
      offset += sizeof(this->st_lxyz);
        memcpy( &(this->lxyz[i]), &(this->st_lxyz), sizeof(double));
      }
      uint8_t rxyz_lengthT = *(inbuffer + offset++);
      if(rxyz_lengthT > rxyz_length)
        this->rxyz = (double*)realloc(this->rxyz, rxyz_lengthT * sizeof(double));
      offset += 3;
      rxyz_length = rxyz_lengthT;
      for( uint8_t i = 0; i < rxyz_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_rxyz;
      u_st_rxyz.base = 0;
      u_st_rxyz.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_rxyz.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_rxyz.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_rxyz.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_rxyz.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_rxyz.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_rxyz.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_rxyz.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_rxyz = u_st_rxyz.real;
      offset += sizeof(this->st_rxyz);
        memcpy( &(this->rxyz[i]), &(this->st_rxyz), sizeof(double));
      }
     return offset;
    }

    const char * getType(){ return IKSOLVEQE; };
    const char * getMD5(){ return "944b67062308b9551398db24520ce7bc"; };

  };

  class IkSolveQEResponse : public ros::Msg
  {
    public:
      kenshiro_arm_ik::QEinfo theta;

    IkSolveQEResponse():
      theta()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->theta.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->theta.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return IKSOLVEQE; };
    const char * getMD5(){ return "cb98aae63938ddacbba7fab658be7bfa"; };

  };

  class IkSolveQE {
    public:
    typedef IkSolveQERequest Request;
    typedef IkSolveQEResponse Response;
  };

}
#endif
