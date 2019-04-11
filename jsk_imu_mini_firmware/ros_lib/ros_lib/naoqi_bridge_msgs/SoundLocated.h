#ifndef _ROS_naoqi_bridge_msgs_SoundLocated_h
#define _ROS_naoqi_bridge_msgs_SoundLocated_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "geometry_msgs/Twist.h"

namespace naoqi_bridge_msgs
{

  class SoundLocated : public ros::Msg
  {
    public:
      std_msgs::Header header;
      double azimuth;
      double elevation;
      double confidence;
      double energy;
      geometry_msgs::Twist head_position_frame_torso;
      geometry_msgs::Twist head_position_frame_robot;

    SoundLocated():
      header(),
      azimuth(0),
      elevation(0),
      confidence(0),
      energy(0),
      head_position_frame_torso(),
      head_position_frame_robot()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_azimuth;
      u_azimuth.real = this->azimuth;
      *(outbuffer + offset + 0) = (u_azimuth.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_azimuth.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_azimuth.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_azimuth.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_azimuth.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_azimuth.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_azimuth.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_azimuth.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->azimuth);
      union {
        double real;
        uint64_t base;
      } u_elevation;
      u_elevation.real = this->elevation;
      *(outbuffer + offset + 0) = (u_elevation.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_elevation.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_elevation.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_elevation.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_elevation.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_elevation.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_elevation.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_elevation.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->elevation);
      union {
        double real;
        uint64_t base;
      } u_confidence;
      u_confidence.real = this->confidence;
      *(outbuffer + offset + 0) = (u_confidence.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_confidence.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_confidence.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_confidence.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_confidence.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_confidence.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_confidence.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_confidence.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->confidence);
      union {
        double real;
        uint64_t base;
      } u_energy;
      u_energy.real = this->energy;
      *(outbuffer + offset + 0) = (u_energy.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_energy.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_energy.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_energy.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_energy.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_energy.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_energy.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_energy.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->energy);
      offset += this->head_position_frame_torso.serialize(outbuffer + offset);
      offset += this->head_position_frame_robot.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_azimuth;
      u_azimuth.base = 0;
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_azimuth.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->azimuth = u_azimuth.real;
      offset += sizeof(this->azimuth);
      union {
        double real;
        uint64_t base;
      } u_elevation;
      u_elevation.base = 0;
      u_elevation.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_elevation.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_elevation.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_elevation.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_elevation.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_elevation.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_elevation.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_elevation.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->elevation = u_elevation.real;
      offset += sizeof(this->elevation);
      union {
        double real;
        uint64_t base;
      } u_confidence;
      u_confidence.base = 0;
      u_confidence.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_confidence.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_confidence.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_confidence.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_confidence.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_confidence.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_confidence.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_confidence.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->confidence = u_confidence.real;
      offset += sizeof(this->confidence);
      union {
        double real;
        uint64_t base;
      } u_energy;
      u_energy.base = 0;
      u_energy.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_energy.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_energy.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_energy.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_energy.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_energy.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_energy.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_energy.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->energy = u_energy.real;
      offset += sizeof(this->energy);
      offset += this->head_position_frame_torso.deserialize(inbuffer + offset);
      offset += this->head_position_frame_robot.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "naoqi_bridge_msgs/SoundLocated"; };
    const char * getMD5(){ return "884a2810157403bbdabfb1011c851b42"; };

  };

}
#endif