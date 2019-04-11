#ifndef _ROS_hrpsys_ros_bridge_OpenHRP_ReferenceForceUpdaterService_ReferenceForceUpdaterParam_h
#define _ROS_hrpsys_ros_bridge_OpenHRP_ReferenceForceUpdaterService_ReferenceForceUpdaterParam_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace hrpsys_ros_bridge
{

  class OpenHRP_ReferenceForceUpdaterService_ReferenceForceUpdaterParam : public ros::Msg
  {
    public:
      double motion_dir[3];
      const char* frame;
      double update_freq;
      double update_time_ratio;
      double p_gain;
      double d_gain;
      double i_gain;
      bool is_hold_value;

    OpenHRP_ReferenceForceUpdaterService_ReferenceForceUpdaterParam():
      motion_dir(),
      frame(""),
      update_freq(0),
      update_time_ratio(0),
      p_gain(0),
      d_gain(0),
      i_gain(0),
      is_hold_value(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      for( uint8_t i = 0; i < 3; i++){
      union {
        double real;
        uint64_t base;
      } u_motion_diri;
      u_motion_diri.real = this->motion_dir[i];
      *(outbuffer + offset + 0) = (u_motion_diri.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motion_diri.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motion_diri.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motion_diri.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_motion_diri.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_motion_diri.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_motion_diri.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_motion_diri.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->motion_dir[i]);
      }
      uint32_t length_frame = strlen(this->frame);
      memcpy(outbuffer + offset, &length_frame, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->frame, length_frame);
      offset += length_frame;
      union {
        double real;
        uint64_t base;
      } u_update_freq;
      u_update_freq.real = this->update_freq;
      *(outbuffer + offset + 0) = (u_update_freq.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_update_freq.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_update_freq.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_update_freq.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_update_freq.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_update_freq.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_update_freq.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_update_freq.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->update_freq);
      union {
        double real;
        uint64_t base;
      } u_update_time_ratio;
      u_update_time_ratio.real = this->update_time_ratio;
      *(outbuffer + offset + 0) = (u_update_time_ratio.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_update_time_ratio.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_update_time_ratio.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_update_time_ratio.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_update_time_ratio.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_update_time_ratio.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_update_time_ratio.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_update_time_ratio.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->update_time_ratio);
      union {
        double real;
        uint64_t base;
      } u_p_gain;
      u_p_gain.real = this->p_gain;
      *(outbuffer + offset + 0) = (u_p_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_p_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_p_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_p_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_p_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_p_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_p_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_p_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->p_gain);
      union {
        double real;
        uint64_t base;
      } u_d_gain;
      u_d_gain.real = this->d_gain;
      *(outbuffer + offset + 0) = (u_d_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_d_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_d_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_d_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_d_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_d_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_d_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_d_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->d_gain);
      union {
        double real;
        uint64_t base;
      } u_i_gain;
      u_i_gain.real = this->i_gain;
      *(outbuffer + offset + 0) = (u_i_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_i_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_i_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_i_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_i_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_i_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_i_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_i_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->i_gain);
      union {
        bool real;
        uint8_t base;
      } u_is_hold_value;
      u_is_hold_value.real = this->is_hold_value;
      *(outbuffer + offset + 0) = (u_is_hold_value.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_hold_value);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      for( uint8_t i = 0; i < 3; i++){
      union {
        double real;
        uint64_t base;
      } u_motion_diri;
      u_motion_diri.base = 0;
      u_motion_diri.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_motion_diri.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_motion_diri.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_motion_diri.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_motion_diri.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_motion_diri.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_motion_diri.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_motion_diri.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->motion_dir[i] = u_motion_diri.real;
      offset += sizeof(this->motion_dir[i]);
      }
      uint32_t length_frame;
      memcpy(&length_frame, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_frame; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_frame-1]=0;
      this->frame = (char *)(inbuffer + offset-1);
      offset += length_frame;
      union {
        double real;
        uint64_t base;
      } u_update_freq;
      u_update_freq.base = 0;
      u_update_freq.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_update_freq.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_update_freq.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_update_freq.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_update_freq.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_update_freq.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_update_freq.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_update_freq.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->update_freq = u_update_freq.real;
      offset += sizeof(this->update_freq);
      union {
        double real;
        uint64_t base;
      } u_update_time_ratio;
      u_update_time_ratio.base = 0;
      u_update_time_ratio.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_update_time_ratio.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_update_time_ratio.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_update_time_ratio.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_update_time_ratio.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_update_time_ratio.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_update_time_ratio.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_update_time_ratio.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->update_time_ratio = u_update_time_ratio.real;
      offset += sizeof(this->update_time_ratio);
      union {
        double real;
        uint64_t base;
      } u_p_gain;
      u_p_gain.base = 0;
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->p_gain = u_p_gain.real;
      offset += sizeof(this->p_gain);
      union {
        double real;
        uint64_t base;
      } u_d_gain;
      u_d_gain.base = 0;
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->d_gain = u_d_gain.real;
      offset += sizeof(this->d_gain);
      union {
        double real;
        uint64_t base;
      } u_i_gain;
      u_i_gain.base = 0;
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->i_gain = u_i_gain.real;
      offset += sizeof(this->i_gain);
      union {
        bool real;
        uint8_t base;
      } u_is_hold_value;
      u_is_hold_value.base = 0;
      u_is_hold_value.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_hold_value = u_is_hold_value.real;
      offset += sizeof(this->is_hold_value);
     return offset;
    }

    const char * getType(){ return "hrpsys_ros_bridge/OpenHRP_ReferenceForceUpdaterService_ReferenceForceUpdaterParam"; };
    const char * getMD5(){ return "37457748c0b4340ef213c8b0434e6c6d"; };

  };

}
#endif