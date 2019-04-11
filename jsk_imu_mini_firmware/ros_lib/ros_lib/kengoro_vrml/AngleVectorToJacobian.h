#ifndef _ROS_SERVICE_AngleVectorToJacobian_h
#define _ROS_SERVICE_AngleVectorToJacobian_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace kengoro_vrml
{

static const char ANGLEVECTORTOJACOBIAN[] = "kengoro_vrml/AngleVectorToJacobian";

  class AngleVectorToJacobianRequest : public ros::Msg
  {
    public:
      uint8_t larm_anglevector_length;
      double st_larm_anglevector;
      double * larm_anglevector;
      uint8_t rarm_anglevector_length;
      double st_rarm_anglevector;
      double * rarm_anglevector;
      uint8_t lleg_anglevector_length;
      double st_lleg_anglevector;
      double * lleg_anglevector;
      uint8_t rleg_anglevector_length;
      double st_rleg_anglevector;
      double * rleg_anglevector;

    AngleVectorToJacobianRequest():
      larm_anglevector_length(0), larm_anglevector(NULL),
      rarm_anglevector_length(0), rarm_anglevector(NULL),
      lleg_anglevector_length(0), lleg_anglevector(NULL),
      rleg_anglevector_length(0), rleg_anglevector(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset++) = larm_anglevector_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < larm_anglevector_length; i++){
      union {
        double real;
        uint64_t base;
      } u_larm_anglevectori;
      u_larm_anglevectori.real = this->larm_anglevector[i];
      *(outbuffer + offset + 0) = (u_larm_anglevectori.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_larm_anglevectori.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_larm_anglevectori.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_larm_anglevectori.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_larm_anglevectori.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_larm_anglevectori.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_larm_anglevectori.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_larm_anglevectori.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->larm_anglevector[i]);
      }
      *(outbuffer + offset++) = rarm_anglevector_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < rarm_anglevector_length; i++){
      union {
        double real;
        uint64_t base;
      } u_rarm_anglevectori;
      u_rarm_anglevectori.real = this->rarm_anglevector[i];
      *(outbuffer + offset + 0) = (u_rarm_anglevectori.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rarm_anglevectori.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rarm_anglevectori.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rarm_anglevectori.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_rarm_anglevectori.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_rarm_anglevectori.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_rarm_anglevectori.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_rarm_anglevectori.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->rarm_anglevector[i]);
      }
      *(outbuffer + offset++) = lleg_anglevector_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < lleg_anglevector_length; i++){
      union {
        double real;
        uint64_t base;
      } u_lleg_anglevectori;
      u_lleg_anglevectori.real = this->lleg_anglevector[i];
      *(outbuffer + offset + 0) = (u_lleg_anglevectori.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_lleg_anglevectori.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_lleg_anglevectori.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_lleg_anglevectori.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_lleg_anglevectori.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_lleg_anglevectori.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_lleg_anglevectori.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_lleg_anglevectori.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->lleg_anglevector[i]);
      }
      *(outbuffer + offset++) = rleg_anglevector_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < rleg_anglevector_length; i++){
      union {
        double real;
        uint64_t base;
      } u_rleg_anglevectori;
      u_rleg_anglevectori.real = this->rleg_anglevector[i];
      *(outbuffer + offset + 0) = (u_rleg_anglevectori.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rleg_anglevectori.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rleg_anglevectori.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rleg_anglevectori.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_rleg_anglevectori.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_rleg_anglevectori.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_rleg_anglevectori.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_rleg_anglevectori.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->rleg_anglevector[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint8_t larm_anglevector_lengthT = *(inbuffer + offset++);
      if(larm_anglevector_lengthT > larm_anglevector_length)
        this->larm_anglevector = (double*)realloc(this->larm_anglevector, larm_anglevector_lengthT * sizeof(double));
      offset += 3;
      larm_anglevector_length = larm_anglevector_lengthT;
      for( uint8_t i = 0; i < larm_anglevector_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_larm_anglevector;
      u_st_larm_anglevector.base = 0;
      u_st_larm_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_larm_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_larm_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_larm_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_larm_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_larm_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_larm_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_larm_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_larm_anglevector = u_st_larm_anglevector.real;
      offset += sizeof(this->st_larm_anglevector);
        memcpy( &(this->larm_anglevector[i]), &(this->st_larm_anglevector), sizeof(double));
      }
      uint8_t rarm_anglevector_lengthT = *(inbuffer + offset++);
      if(rarm_anglevector_lengthT > rarm_anglevector_length)
        this->rarm_anglevector = (double*)realloc(this->rarm_anglevector, rarm_anglevector_lengthT * sizeof(double));
      offset += 3;
      rarm_anglevector_length = rarm_anglevector_lengthT;
      for( uint8_t i = 0; i < rarm_anglevector_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_rarm_anglevector;
      u_st_rarm_anglevector.base = 0;
      u_st_rarm_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_rarm_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_rarm_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_rarm_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_rarm_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_rarm_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_rarm_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_rarm_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_rarm_anglevector = u_st_rarm_anglevector.real;
      offset += sizeof(this->st_rarm_anglevector);
        memcpy( &(this->rarm_anglevector[i]), &(this->st_rarm_anglevector), sizeof(double));
      }
      uint8_t lleg_anglevector_lengthT = *(inbuffer + offset++);
      if(lleg_anglevector_lengthT > lleg_anglevector_length)
        this->lleg_anglevector = (double*)realloc(this->lleg_anglevector, lleg_anglevector_lengthT * sizeof(double));
      offset += 3;
      lleg_anglevector_length = lleg_anglevector_lengthT;
      for( uint8_t i = 0; i < lleg_anglevector_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_lleg_anglevector;
      u_st_lleg_anglevector.base = 0;
      u_st_lleg_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_lleg_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_lleg_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_lleg_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_lleg_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_lleg_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_lleg_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_lleg_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_lleg_anglevector = u_st_lleg_anglevector.real;
      offset += sizeof(this->st_lleg_anglevector);
        memcpy( &(this->lleg_anglevector[i]), &(this->st_lleg_anglevector), sizeof(double));
      }
      uint8_t rleg_anglevector_lengthT = *(inbuffer + offset++);
      if(rleg_anglevector_lengthT > rleg_anglevector_length)
        this->rleg_anglevector = (double*)realloc(this->rleg_anglevector, rleg_anglevector_lengthT * sizeof(double));
      offset += 3;
      rleg_anglevector_length = rleg_anglevector_lengthT;
      for( uint8_t i = 0; i < rleg_anglevector_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_rleg_anglevector;
      u_st_rleg_anglevector.base = 0;
      u_st_rleg_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_rleg_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_rleg_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_rleg_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_rleg_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_rleg_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_rleg_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_rleg_anglevector.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_rleg_anglevector = u_st_rleg_anglevector.real;
      offset += sizeof(this->st_rleg_anglevector);
        memcpy( &(this->rleg_anglevector[i]), &(this->st_rleg_anglevector), sizeof(double));
      }
     return offset;
    }

    const char * getType(){ return ANGLEVECTORTOJACOBIAN; };
    const char * getMD5(){ return "41a896f7581443494ba732b4c70989b9"; };

  };

  class AngleVectorToJacobianResponse : public ros::Msg
  {
    public:
      uint8_t larm_jacobian_length;
      double st_larm_jacobian;
      double * larm_jacobian;
      uint8_t rarm_jacobian_length;
      double st_rarm_jacobian;
      double * rarm_jacobian;
      uint8_t lleg_jacobian_length;
      double st_lleg_jacobian;
      double * lleg_jacobian;
      uint8_t rleg_jacobian_length;
      double st_rleg_jacobian;
      double * rleg_jacobian;

    AngleVectorToJacobianResponse():
      larm_jacobian_length(0), larm_jacobian(NULL),
      rarm_jacobian_length(0), rarm_jacobian(NULL),
      lleg_jacobian_length(0), lleg_jacobian(NULL),
      rleg_jacobian_length(0), rleg_jacobian(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset++) = larm_jacobian_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < larm_jacobian_length; i++){
      union {
        double real;
        uint64_t base;
      } u_larm_jacobiani;
      u_larm_jacobiani.real = this->larm_jacobian[i];
      *(outbuffer + offset + 0) = (u_larm_jacobiani.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_larm_jacobiani.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_larm_jacobiani.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_larm_jacobiani.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_larm_jacobiani.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_larm_jacobiani.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_larm_jacobiani.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_larm_jacobiani.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->larm_jacobian[i]);
      }
      *(outbuffer + offset++) = rarm_jacobian_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < rarm_jacobian_length; i++){
      union {
        double real;
        uint64_t base;
      } u_rarm_jacobiani;
      u_rarm_jacobiani.real = this->rarm_jacobian[i];
      *(outbuffer + offset + 0) = (u_rarm_jacobiani.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rarm_jacobiani.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rarm_jacobiani.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rarm_jacobiani.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_rarm_jacobiani.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_rarm_jacobiani.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_rarm_jacobiani.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_rarm_jacobiani.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->rarm_jacobian[i]);
      }
      *(outbuffer + offset++) = lleg_jacobian_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < lleg_jacobian_length; i++){
      union {
        double real;
        uint64_t base;
      } u_lleg_jacobiani;
      u_lleg_jacobiani.real = this->lleg_jacobian[i];
      *(outbuffer + offset + 0) = (u_lleg_jacobiani.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_lleg_jacobiani.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_lleg_jacobiani.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_lleg_jacobiani.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_lleg_jacobiani.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_lleg_jacobiani.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_lleg_jacobiani.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_lleg_jacobiani.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->lleg_jacobian[i]);
      }
      *(outbuffer + offset++) = rleg_jacobian_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < rleg_jacobian_length; i++){
      union {
        double real;
        uint64_t base;
      } u_rleg_jacobiani;
      u_rleg_jacobiani.real = this->rleg_jacobian[i];
      *(outbuffer + offset + 0) = (u_rleg_jacobiani.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rleg_jacobiani.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rleg_jacobiani.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rleg_jacobiani.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_rleg_jacobiani.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_rleg_jacobiani.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_rleg_jacobiani.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_rleg_jacobiani.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->rleg_jacobian[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint8_t larm_jacobian_lengthT = *(inbuffer + offset++);
      if(larm_jacobian_lengthT > larm_jacobian_length)
        this->larm_jacobian = (double*)realloc(this->larm_jacobian, larm_jacobian_lengthT * sizeof(double));
      offset += 3;
      larm_jacobian_length = larm_jacobian_lengthT;
      for( uint8_t i = 0; i < larm_jacobian_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_larm_jacobian;
      u_st_larm_jacobian.base = 0;
      u_st_larm_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_larm_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_larm_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_larm_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_larm_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_larm_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_larm_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_larm_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_larm_jacobian = u_st_larm_jacobian.real;
      offset += sizeof(this->st_larm_jacobian);
        memcpy( &(this->larm_jacobian[i]), &(this->st_larm_jacobian), sizeof(double));
      }
      uint8_t rarm_jacobian_lengthT = *(inbuffer + offset++);
      if(rarm_jacobian_lengthT > rarm_jacobian_length)
        this->rarm_jacobian = (double*)realloc(this->rarm_jacobian, rarm_jacobian_lengthT * sizeof(double));
      offset += 3;
      rarm_jacobian_length = rarm_jacobian_lengthT;
      for( uint8_t i = 0; i < rarm_jacobian_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_rarm_jacobian;
      u_st_rarm_jacobian.base = 0;
      u_st_rarm_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_rarm_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_rarm_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_rarm_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_rarm_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_rarm_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_rarm_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_rarm_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_rarm_jacobian = u_st_rarm_jacobian.real;
      offset += sizeof(this->st_rarm_jacobian);
        memcpy( &(this->rarm_jacobian[i]), &(this->st_rarm_jacobian), sizeof(double));
      }
      uint8_t lleg_jacobian_lengthT = *(inbuffer + offset++);
      if(lleg_jacobian_lengthT > lleg_jacobian_length)
        this->lleg_jacobian = (double*)realloc(this->lleg_jacobian, lleg_jacobian_lengthT * sizeof(double));
      offset += 3;
      lleg_jacobian_length = lleg_jacobian_lengthT;
      for( uint8_t i = 0; i < lleg_jacobian_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_lleg_jacobian;
      u_st_lleg_jacobian.base = 0;
      u_st_lleg_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_lleg_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_lleg_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_lleg_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_lleg_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_lleg_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_lleg_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_lleg_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_lleg_jacobian = u_st_lleg_jacobian.real;
      offset += sizeof(this->st_lleg_jacobian);
        memcpy( &(this->lleg_jacobian[i]), &(this->st_lleg_jacobian), sizeof(double));
      }
      uint8_t rleg_jacobian_lengthT = *(inbuffer + offset++);
      if(rleg_jacobian_lengthT > rleg_jacobian_length)
        this->rleg_jacobian = (double*)realloc(this->rleg_jacobian, rleg_jacobian_lengthT * sizeof(double));
      offset += 3;
      rleg_jacobian_length = rleg_jacobian_lengthT;
      for( uint8_t i = 0; i < rleg_jacobian_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_rleg_jacobian;
      u_st_rleg_jacobian.base = 0;
      u_st_rleg_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_rleg_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_rleg_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_rleg_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_rleg_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_rleg_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_rleg_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_rleg_jacobian.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_rleg_jacobian = u_st_rleg_jacobian.real;
      offset += sizeof(this->st_rleg_jacobian);
        memcpy( &(this->rleg_jacobian[i]), &(this->st_rleg_jacobian), sizeof(double));
      }
     return offset;
    }

    const char * getType(){ return ANGLEVECTORTOJACOBIAN; };
    const char * getMD5(){ return "a2857bb77fe3b82add1f062db227af60"; };

  };

  class AngleVectorToJacobian {
    public:
    typedef AngleVectorToJacobianRequest Request;
    typedef AngleVectorToJacobianResponse Response;
  };

}
#endif
