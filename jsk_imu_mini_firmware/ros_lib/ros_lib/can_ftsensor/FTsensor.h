#ifndef _ROS_can_ftsensor_FTsensor_h
#define _ROS_can_ftsensor_FTsensor_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace can_ftsensor
{

  class FTsensor : public ros::Msg
  {
    public:
      std_msgs::Header header;
      uint8_t id_length;
      float st_id;
      float * id;
      uint8_t force_length;
      float st_force;
      float * force;
      uint8_t torque_length;
      float st_torque;
      float * torque;
      double time;
      double period;

    FTsensor():
      header(),
      id_length(0), id(NULL),
      force_length(0), force(NULL),
      torque_length(0), torque(NULL),
      time(0),
      period(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset++) = id_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < id_length; i++){
      union {
        float real;
        uint32_t base;
      } u_idi;
      u_idi.real = this->id[i];
      *(outbuffer + offset + 0) = (u_idi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_idi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_idi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_idi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->id[i]);
      }
      *(outbuffer + offset++) = force_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < force_length; i++){
      union {
        float real;
        uint32_t base;
      } u_forcei;
      u_forcei.real = this->force[i];
      *(outbuffer + offset + 0) = (u_forcei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_forcei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_forcei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_forcei.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->force[i]);
      }
      *(outbuffer + offset++) = torque_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < torque_length; i++){
      union {
        float real;
        uint32_t base;
      } u_torquei;
      u_torquei.real = this->torque[i];
      *(outbuffer + offset + 0) = (u_torquei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_torquei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_torquei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_torquei.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->torque[i]);
      }
      union {
        double real;
        uint64_t base;
      } u_time;
      u_time.real = this->time;
      *(outbuffer + offset + 0) = (u_time.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_time.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_time.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_time.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_time.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_time.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_time.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_time.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->time);
      union {
        double real;
        uint64_t base;
      } u_period;
      u_period.real = this->period;
      *(outbuffer + offset + 0) = (u_period.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_period.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_period.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_period.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_period.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_period.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_period.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_period.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->period);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint8_t id_lengthT = *(inbuffer + offset++);
      if(id_lengthT > id_length)
        this->id = (float*)realloc(this->id, id_lengthT * sizeof(float));
      offset += 3;
      id_length = id_lengthT;
      for( uint8_t i = 0; i < id_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_id;
      u_st_id.base = 0;
      u_st_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_id = u_st_id.real;
      offset += sizeof(this->st_id);
        memcpy( &(this->id[i]), &(this->st_id), sizeof(float));
      }
      uint8_t force_lengthT = *(inbuffer + offset++);
      if(force_lengthT > force_length)
        this->force = (float*)realloc(this->force, force_lengthT * sizeof(float));
      offset += 3;
      force_length = force_lengthT;
      for( uint8_t i = 0; i < force_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_force;
      u_st_force.base = 0;
      u_st_force.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_force.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_force.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_force.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_force = u_st_force.real;
      offset += sizeof(this->st_force);
        memcpy( &(this->force[i]), &(this->st_force), sizeof(float));
      }
      uint8_t torque_lengthT = *(inbuffer + offset++);
      if(torque_lengthT > torque_length)
        this->torque = (float*)realloc(this->torque, torque_lengthT * sizeof(float));
      offset += 3;
      torque_length = torque_lengthT;
      for( uint8_t i = 0; i < torque_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_torque;
      u_st_torque.base = 0;
      u_st_torque.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_torque.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_torque.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_torque.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_torque = u_st_torque.real;
      offset += sizeof(this->st_torque);
        memcpy( &(this->torque[i]), &(this->st_torque), sizeof(float));
      }
      union {
        double real;
        uint64_t base;
      } u_time;
      u_time.base = 0;
      u_time.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_time.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_time.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_time.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_time.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_time.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_time.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_time.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->time = u_time.real;
      offset += sizeof(this->time);
      union {
        double real;
        uint64_t base;
      } u_period;
      u_period.base = 0;
      u_period.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_period.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_period.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_period.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_period.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_period.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_period.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_period.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->period = u_period.real;
      offset += sizeof(this->period);
     return offset;
    }

    const char * getType(){ return "can_ftsensor/FTsensor"; };
    const char * getMD5(){ return "89d7e4eb7ad48c088a839ee14eb1acc0"; };

  };

}
#endif