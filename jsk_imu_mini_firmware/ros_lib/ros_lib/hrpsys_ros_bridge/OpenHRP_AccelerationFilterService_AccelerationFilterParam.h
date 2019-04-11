#ifndef _ROS_hrpsys_ros_bridge_OpenHRP_AccelerationFilterService_AccelerationFilterParam_h
#define _ROS_hrpsys_ros_bridge_OpenHRP_AccelerationFilterService_AccelerationFilterParam_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace hrpsys_ros_bridge
{

  class OpenHRP_AccelerationFilterService_AccelerationFilterParam : public ros::Msg
  {
    public:
      double gravity;
      bool use_filter;
      uint8_t filter_param_length;
      double st_filter_param;
      double * filter_param;

    OpenHRP_AccelerationFilterService_AccelerationFilterParam():
      gravity(0),
      use_filter(0),
      filter_param_length(0), filter_param(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_gravity;
      u_gravity.real = this->gravity;
      *(outbuffer + offset + 0) = (u_gravity.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gravity.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gravity.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gravity.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_gravity.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_gravity.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_gravity.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_gravity.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->gravity);
      union {
        bool real;
        uint8_t base;
      } u_use_filter;
      u_use_filter.real = this->use_filter;
      *(outbuffer + offset + 0) = (u_use_filter.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->use_filter);
      *(outbuffer + offset++) = filter_param_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < filter_param_length; i++){
      union {
        double real;
        uint64_t base;
      } u_filter_parami;
      u_filter_parami.real = this->filter_param[i];
      *(outbuffer + offset + 0) = (u_filter_parami.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_filter_parami.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_filter_parami.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_filter_parami.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_filter_parami.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_filter_parami.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_filter_parami.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_filter_parami.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->filter_param[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_gravity;
      u_gravity.base = 0;
      u_gravity.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_gravity.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_gravity.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_gravity.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_gravity.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_gravity.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_gravity.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_gravity.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->gravity = u_gravity.real;
      offset += sizeof(this->gravity);
      union {
        bool real;
        uint8_t base;
      } u_use_filter;
      u_use_filter.base = 0;
      u_use_filter.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->use_filter = u_use_filter.real;
      offset += sizeof(this->use_filter);
      uint8_t filter_param_lengthT = *(inbuffer + offset++);
      if(filter_param_lengthT > filter_param_length)
        this->filter_param = (double*)realloc(this->filter_param, filter_param_lengthT * sizeof(double));
      offset += 3;
      filter_param_length = filter_param_lengthT;
      for( uint8_t i = 0; i < filter_param_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_filter_param;
      u_st_filter_param.base = 0;
      u_st_filter_param.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_filter_param.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_filter_param.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_filter_param.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_filter_param.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_filter_param.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_filter_param.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_filter_param.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_filter_param = u_st_filter_param.real;
      offset += sizeof(this->st_filter_param);
        memcpy( &(this->filter_param[i]), &(this->st_filter_param), sizeof(double));
      }
     return offset;
    }

    const char * getType(){ return "hrpsys_ros_bridge/OpenHRP_AccelerationFilterService_AccelerationFilterParam"; };
    const char * getMD5(){ return "f4998353c6d72b85e0f3171257a9dd83"; };

  };

}
#endif