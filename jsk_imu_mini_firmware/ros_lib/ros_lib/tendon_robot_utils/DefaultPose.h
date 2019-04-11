#ifndef _ROS_tendon_robot_utils_DefaultPose_h
#define _ROS_tendon_robot_utils_DefaultPose_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace tendon_robot_utils
{

  class DefaultPose : public ros::Msg
  {
    public:
      std_msgs::Header header;
      const char* pose_name;
      uint8_t spine_joint_name_length;
      char* st_spine_joint_name;
      char* * spine_joint_name;
      uint8_t spine_joint_angle_length;
      double st_spine_joint_angle;
      double * spine_joint_angle;
      uint8_t neck_joint_name_length;
      char* st_neck_joint_name;
      char* * neck_joint_name;
      uint8_t neck_joint_angle_length;
      double st_neck_joint_angle;
      double * neck_joint_angle;
      uint8_t larm_joint_name_length;
      char* st_larm_joint_name;
      char* * larm_joint_name;
      uint8_t larm_joint_angle_length;
      double st_larm_joint_angle;
      double * larm_joint_angle;
      uint8_t rarm_joint_name_length;
      char* st_rarm_joint_name;
      char* * rarm_joint_name;
      uint8_t rarm_joint_angle_length;
      double st_rarm_joint_angle;
      double * rarm_joint_angle;
      uint8_t lleg_joint_name_length;
      char* st_lleg_joint_name;
      char* * lleg_joint_name;
      uint8_t lleg_joint_angle_length;
      double st_lleg_joint_angle;
      double * lleg_joint_angle;
      uint8_t rleg_joint_name_length;
      char* st_rleg_joint_name;
      char* * rleg_joint_name;
      uint8_t rleg_joint_angle_length;
      double st_rleg_joint_angle;
      double * rleg_joint_angle;
      uint8_t upper_muscle_length_length;
      double st_upper_muscle_length;
      double * upper_muscle_length;
      uint8_t legs_muscle_length_length;
      double st_legs_muscle_length;
      double * legs_muscle_length;

    DefaultPose():
      header(),
      pose_name(""),
      spine_joint_name_length(0), spine_joint_name(NULL),
      spine_joint_angle_length(0), spine_joint_angle(NULL),
      neck_joint_name_length(0), neck_joint_name(NULL),
      neck_joint_angle_length(0), neck_joint_angle(NULL),
      larm_joint_name_length(0), larm_joint_name(NULL),
      larm_joint_angle_length(0), larm_joint_angle(NULL),
      rarm_joint_name_length(0), rarm_joint_name(NULL),
      rarm_joint_angle_length(0), rarm_joint_angle(NULL),
      lleg_joint_name_length(0), lleg_joint_name(NULL),
      lleg_joint_angle_length(0), lleg_joint_angle(NULL),
      rleg_joint_name_length(0), rleg_joint_name(NULL),
      rleg_joint_angle_length(0), rleg_joint_angle(NULL),
      upper_muscle_length_length(0), upper_muscle_length(NULL),
      legs_muscle_length_length(0), legs_muscle_length(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      uint32_t length_pose_name = strlen(this->pose_name);
      memcpy(outbuffer + offset, &length_pose_name, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->pose_name, length_pose_name);
      offset += length_pose_name;
      *(outbuffer + offset++) = spine_joint_name_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < spine_joint_name_length; i++){
      uint32_t length_spine_joint_namei = strlen(this->spine_joint_name[i]);
      memcpy(outbuffer + offset, &length_spine_joint_namei, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->spine_joint_name[i], length_spine_joint_namei);
      offset += length_spine_joint_namei;
      }
      *(outbuffer + offset++) = spine_joint_angle_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < spine_joint_angle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_spine_joint_anglei;
      u_spine_joint_anglei.real = this->spine_joint_angle[i];
      *(outbuffer + offset + 0) = (u_spine_joint_anglei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_spine_joint_anglei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_spine_joint_anglei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_spine_joint_anglei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_spine_joint_anglei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_spine_joint_anglei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_spine_joint_anglei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_spine_joint_anglei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->spine_joint_angle[i]);
      }
      *(outbuffer + offset++) = neck_joint_name_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < neck_joint_name_length; i++){
      uint32_t length_neck_joint_namei = strlen(this->neck_joint_name[i]);
      memcpy(outbuffer + offset, &length_neck_joint_namei, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->neck_joint_name[i], length_neck_joint_namei);
      offset += length_neck_joint_namei;
      }
      *(outbuffer + offset++) = neck_joint_angle_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < neck_joint_angle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_neck_joint_anglei;
      u_neck_joint_anglei.real = this->neck_joint_angle[i];
      *(outbuffer + offset + 0) = (u_neck_joint_anglei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_neck_joint_anglei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_neck_joint_anglei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_neck_joint_anglei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_neck_joint_anglei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_neck_joint_anglei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_neck_joint_anglei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_neck_joint_anglei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->neck_joint_angle[i]);
      }
      *(outbuffer + offset++) = larm_joint_name_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < larm_joint_name_length; i++){
      uint32_t length_larm_joint_namei = strlen(this->larm_joint_name[i]);
      memcpy(outbuffer + offset, &length_larm_joint_namei, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->larm_joint_name[i], length_larm_joint_namei);
      offset += length_larm_joint_namei;
      }
      *(outbuffer + offset++) = larm_joint_angle_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < larm_joint_angle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_larm_joint_anglei;
      u_larm_joint_anglei.real = this->larm_joint_angle[i];
      *(outbuffer + offset + 0) = (u_larm_joint_anglei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_larm_joint_anglei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_larm_joint_anglei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_larm_joint_anglei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_larm_joint_anglei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_larm_joint_anglei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_larm_joint_anglei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_larm_joint_anglei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->larm_joint_angle[i]);
      }
      *(outbuffer + offset++) = rarm_joint_name_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < rarm_joint_name_length; i++){
      uint32_t length_rarm_joint_namei = strlen(this->rarm_joint_name[i]);
      memcpy(outbuffer + offset, &length_rarm_joint_namei, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->rarm_joint_name[i], length_rarm_joint_namei);
      offset += length_rarm_joint_namei;
      }
      *(outbuffer + offset++) = rarm_joint_angle_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < rarm_joint_angle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_rarm_joint_anglei;
      u_rarm_joint_anglei.real = this->rarm_joint_angle[i];
      *(outbuffer + offset + 0) = (u_rarm_joint_anglei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rarm_joint_anglei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rarm_joint_anglei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rarm_joint_anglei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_rarm_joint_anglei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_rarm_joint_anglei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_rarm_joint_anglei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_rarm_joint_anglei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->rarm_joint_angle[i]);
      }
      *(outbuffer + offset++) = lleg_joint_name_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < lleg_joint_name_length; i++){
      uint32_t length_lleg_joint_namei = strlen(this->lleg_joint_name[i]);
      memcpy(outbuffer + offset, &length_lleg_joint_namei, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->lleg_joint_name[i], length_lleg_joint_namei);
      offset += length_lleg_joint_namei;
      }
      *(outbuffer + offset++) = lleg_joint_angle_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < lleg_joint_angle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_lleg_joint_anglei;
      u_lleg_joint_anglei.real = this->lleg_joint_angle[i];
      *(outbuffer + offset + 0) = (u_lleg_joint_anglei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_lleg_joint_anglei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_lleg_joint_anglei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_lleg_joint_anglei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_lleg_joint_anglei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_lleg_joint_anglei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_lleg_joint_anglei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_lleg_joint_anglei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->lleg_joint_angle[i]);
      }
      *(outbuffer + offset++) = rleg_joint_name_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < rleg_joint_name_length; i++){
      uint32_t length_rleg_joint_namei = strlen(this->rleg_joint_name[i]);
      memcpy(outbuffer + offset, &length_rleg_joint_namei, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->rleg_joint_name[i], length_rleg_joint_namei);
      offset += length_rleg_joint_namei;
      }
      *(outbuffer + offset++) = rleg_joint_angle_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < rleg_joint_angle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_rleg_joint_anglei;
      u_rleg_joint_anglei.real = this->rleg_joint_angle[i];
      *(outbuffer + offset + 0) = (u_rleg_joint_anglei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rleg_joint_anglei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rleg_joint_anglei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rleg_joint_anglei.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_rleg_joint_anglei.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_rleg_joint_anglei.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_rleg_joint_anglei.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_rleg_joint_anglei.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->rleg_joint_angle[i]);
      }
      *(outbuffer + offset++) = upper_muscle_length_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < upper_muscle_length_length; i++){
      union {
        double real;
        uint64_t base;
      } u_upper_muscle_lengthi;
      u_upper_muscle_lengthi.real = this->upper_muscle_length[i];
      *(outbuffer + offset + 0) = (u_upper_muscle_lengthi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_upper_muscle_lengthi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_upper_muscle_lengthi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_upper_muscle_lengthi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_upper_muscle_lengthi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_upper_muscle_lengthi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_upper_muscle_lengthi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_upper_muscle_lengthi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->upper_muscle_length[i]);
      }
      *(outbuffer + offset++) = legs_muscle_length_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < legs_muscle_length_length; i++){
      union {
        double real;
        uint64_t base;
      } u_legs_muscle_lengthi;
      u_legs_muscle_lengthi.real = this->legs_muscle_length[i];
      *(outbuffer + offset + 0) = (u_legs_muscle_lengthi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_legs_muscle_lengthi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_legs_muscle_lengthi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_legs_muscle_lengthi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_legs_muscle_lengthi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_legs_muscle_lengthi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_legs_muscle_lengthi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_legs_muscle_lengthi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->legs_muscle_length[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t length_pose_name;
      memcpy(&length_pose_name, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_pose_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_pose_name-1]=0;
      this->pose_name = (char *)(inbuffer + offset-1);
      offset += length_pose_name;
      uint8_t spine_joint_name_lengthT = *(inbuffer + offset++);
      if(spine_joint_name_lengthT > spine_joint_name_length)
        this->spine_joint_name = (char**)realloc(this->spine_joint_name, spine_joint_name_lengthT * sizeof(char*));
      offset += 3;
      spine_joint_name_length = spine_joint_name_lengthT;
      for( uint8_t i = 0; i < spine_joint_name_length; i++){
      uint32_t length_st_spine_joint_name;
      memcpy(&length_st_spine_joint_name, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_spine_joint_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_spine_joint_name-1]=0;
      this->st_spine_joint_name = (char *)(inbuffer + offset-1);
      offset += length_st_spine_joint_name;
        memcpy( &(this->spine_joint_name[i]), &(this->st_spine_joint_name), sizeof(char*));
      }
      uint8_t spine_joint_angle_lengthT = *(inbuffer + offset++);
      if(spine_joint_angle_lengthT > spine_joint_angle_length)
        this->spine_joint_angle = (double*)realloc(this->spine_joint_angle, spine_joint_angle_lengthT * sizeof(double));
      offset += 3;
      spine_joint_angle_length = spine_joint_angle_lengthT;
      for( uint8_t i = 0; i < spine_joint_angle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_spine_joint_angle;
      u_st_spine_joint_angle.base = 0;
      u_st_spine_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_spine_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_spine_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_spine_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_spine_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_spine_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_spine_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_spine_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_spine_joint_angle = u_st_spine_joint_angle.real;
      offset += sizeof(this->st_spine_joint_angle);
        memcpy( &(this->spine_joint_angle[i]), &(this->st_spine_joint_angle), sizeof(double));
      }
      uint8_t neck_joint_name_lengthT = *(inbuffer + offset++);
      if(neck_joint_name_lengthT > neck_joint_name_length)
        this->neck_joint_name = (char**)realloc(this->neck_joint_name, neck_joint_name_lengthT * sizeof(char*));
      offset += 3;
      neck_joint_name_length = neck_joint_name_lengthT;
      for( uint8_t i = 0; i < neck_joint_name_length; i++){
      uint32_t length_st_neck_joint_name;
      memcpy(&length_st_neck_joint_name, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_neck_joint_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_neck_joint_name-1]=0;
      this->st_neck_joint_name = (char *)(inbuffer + offset-1);
      offset += length_st_neck_joint_name;
        memcpy( &(this->neck_joint_name[i]), &(this->st_neck_joint_name), sizeof(char*));
      }
      uint8_t neck_joint_angle_lengthT = *(inbuffer + offset++);
      if(neck_joint_angle_lengthT > neck_joint_angle_length)
        this->neck_joint_angle = (double*)realloc(this->neck_joint_angle, neck_joint_angle_lengthT * sizeof(double));
      offset += 3;
      neck_joint_angle_length = neck_joint_angle_lengthT;
      for( uint8_t i = 0; i < neck_joint_angle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_neck_joint_angle;
      u_st_neck_joint_angle.base = 0;
      u_st_neck_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_neck_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_neck_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_neck_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_neck_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_neck_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_neck_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_neck_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_neck_joint_angle = u_st_neck_joint_angle.real;
      offset += sizeof(this->st_neck_joint_angle);
        memcpy( &(this->neck_joint_angle[i]), &(this->st_neck_joint_angle), sizeof(double));
      }
      uint8_t larm_joint_name_lengthT = *(inbuffer + offset++);
      if(larm_joint_name_lengthT > larm_joint_name_length)
        this->larm_joint_name = (char**)realloc(this->larm_joint_name, larm_joint_name_lengthT * sizeof(char*));
      offset += 3;
      larm_joint_name_length = larm_joint_name_lengthT;
      for( uint8_t i = 0; i < larm_joint_name_length; i++){
      uint32_t length_st_larm_joint_name;
      memcpy(&length_st_larm_joint_name, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_larm_joint_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_larm_joint_name-1]=0;
      this->st_larm_joint_name = (char *)(inbuffer + offset-1);
      offset += length_st_larm_joint_name;
        memcpy( &(this->larm_joint_name[i]), &(this->st_larm_joint_name), sizeof(char*));
      }
      uint8_t larm_joint_angle_lengthT = *(inbuffer + offset++);
      if(larm_joint_angle_lengthT > larm_joint_angle_length)
        this->larm_joint_angle = (double*)realloc(this->larm_joint_angle, larm_joint_angle_lengthT * sizeof(double));
      offset += 3;
      larm_joint_angle_length = larm_joint_angle_lengthT;
      for( uint8_t i = 0; i < larm_joint_angle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_larm_joint_angle;
      u_st_larm_joint_angle.base = 0;
      u_st_larm_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_larm_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_larm_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_larm_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_larm_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_larm_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_larm_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_larm_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_larm_joint_angle = u_st_larm_joint_angle.real;
      offset += sizeof(this->st_larm_joint_angle);
        memcpy( &(this->larm_joint_angle[i]), &(this->st_larm_joint_angle), sizeof(double));
      }
      uint8_t rarm_joint_name_lengthT = *(inbuffer + offset++);
      if(rarm_joint_name_lengthT > rarm_joint_name_length)
        this->rarm_joint_name = (char**)realloc(this->rarm_joint_name, rarm_joint_name_lengthT * sizeof(char*));
      offset += 3;
      rarm_joint_name_length = rarm_joint_name_lengthT;
      for( uint8_t i = 0; i < rarm_joint_name_length; i++){
      uint32_t length_st_rarm_joint_name;
      memcpy(&length_st_rarm_joint_name, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_rarm_joint_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_rarm_joint_name-1]=0;
      this->st_rarm_joint_name = (char *)(inbuffer + offset-1);
      offset += length_st_rarm_joint_name;
        memcpy( &(this->rarm_joint_name[i]), &(this->st_rarm_joint_name), sizeof(char*));
      }
      uint8_t rarm_joint_angle_lengthT = *(inbuffer + offset++);
      if(rarm_joint_angle_lengthT > rarm_joint_angle_length)
        this->rarm_joint_angle = (double*)realloc(this->rarm_joint_angle, rarm_joint_angle_lengthT * sizeof(double));
      offset += 3;
      rarm_joint_angle_length = rarm_joint_angle_lengthT;
      for( uint8_t i = 0; i < rarm_joint_angle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_rarm_joint_angle;
      u_st_rarm_joint_angle.base = 0;
      u_st_rarm_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_rarm_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_rarm_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_rarm_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_rarm_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_rarm_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_rarm_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_rarm_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_rarm_joint_angle = u_st_rarm_joint_angle.real;
      offset += sizeof(this->st_rarm_joint_angle);
        memcpy( &(this->rarm_joint_angle[i]), &(this->st_rarm_joint_angle), sizeof(double));
      }
      uint8_t lleg_joint_name_lengthT = *(inbuffer + offset++);
      if(lleg_joint_name_lengthT > lleg_joint_name_length)
        this->lleg_joint_name = (char**)realloc(this->lleg_joint_name, lleg_joint_name_lengthT * sizeof(char*));
      offset += 3;
      lleg_joint_name_length = lleg_joint_name_lengthT;
      for( uint8_t i = 0; i < lleg_joint_name_length; i++){
      uint32_t length_st_lleg_joint_name;
      memcpy(&length_st_lleg_joint_name, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_lleg_joint_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_lleg_joint_name-1]=0;
      this->st_lleg_joint_name = (char *)(inbuffer + offset-1);
      offset += length_st_lleg_joint_name;
        memcpy( &(this->lleg_joint_name[i]), &(this->st_lleg_joint_name), sizeof(char*));
      }
      uint8_t lleg_joint_angle_lengthT = *(inbuffer + offset++);
      if(lleg_joint_angle_lengthT > lleg_joint_angle_length)
        this->lleg_joint_angle = (double*)realloc(this->lleg_joint_angle, lleg_joint_angle_lengthT * sizeof(double));
      offset += 3;
      lleg_joint_angle_length = lleg_joint_angle_lengthT;
      for( uint8_t i = 0; i < lleg_joint_angle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_lleg_joint_angle;
      u_st_lleg_joint_angle.base = 0;
      u_st_lleg_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_lleg_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_lleg_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_lleg_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_lleg_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_lleg_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_lleg_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_lleg_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_lleg_joint_angle = u_st_lleg_joint_angle.real;
      offset += sizeof(this->st_lleg_joint_angle);
        memcpy( &(this->lleg_joint_angle[i]), &(this->st_lleg_joint_angle), sizeof(double));
      }
      uint8_t rleg_joint_name_lengthT = *(inbuffer + offset++);
      if(rleg_joint_name_lengthT > rleg_joint_name_length)
        this->rleg_joint_name = (char**)realloc(this->rleg_joint_name, rleg_joint_name_lengthT * sizeof(char*));
      offset += 3;
      rleg_joint_name_length = rleg_joint_name_lengthT;
      for( uint8_t i = 0; i < rleg_joint_name_length; i++){
      uint32_t length_st_rleg_joint_name;
      memcpy(&length_st_rleg_joint_name, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_rleg_joint_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_rleg_joint_name-1]=0;
      this->st_rleg_joint_name = (char *)(inbuffer + offset-1);
      offset += length_st_rleg_joint_name;
        memcpy( &(this->rleg_joint_name[i]), &(this->st_rleg_joint_name), sizeof(char*));
      }
      uint8_t rleg_joint_angle_lengthT = *(inbuffer + offset++);
      if(rleg_joint_angle_lengthT > rleg_joint_angle_length)
        this->rleg_joint_angle = (double*)realloc(this->rleg_joint_angle, rleg_joint_angle_lengthT * sizeof(double));
      offset += 3;
      rleg_joint_angle_length = rleg_joint_angle_lengthT;
      for( uint8_t i = 0; i < rleg_joint_angle_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_rleg_joint_angle;
      u_st_rleg_joint_angle.base = 0;
      u_st_rleg_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_rleg_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_rleg_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_rleg_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_rleg_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_rleg_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_rleg_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_rleg_joint_angle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_rleg_joint_angle = u_st_rleg_joint_angle.real;
      offset += sizeof(this->st_rleg_joint_angle);
        memcpy( &(this->rleg_joint_angle[i]), &(this->st_rleg_joint_angle), sizeof(double));
      }
      uint8_t upper_muscle_length_lengthT = *(inbuffer + offset++);
      if(upper_muscle_length_lengthT > upper_muscle_length_length)
        this->upper_muscle_length = (double*)realloc(this->upper_muscle_length, upper_muscle_length_lengthT * sizeof(double));
      offset += 3;
      upper_muscle_length_length = upper_muscle_length_lengthT;
      for( uint8_t i = 0; i < upper_muscle_length_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_upper_muscle_length;
      u_st_upper_muscle_length.base = 0;
      u_st_upper_muscle_length.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_upper_muscle_length.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_upper_muscle_length.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_upper_muscle_length.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_upper_muscle_length.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_upper_muscle_length.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_upper_muscle_length.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_upper_muscle_length.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_upper_muscle_length = u_st_upper_muscle_length.real;
      offset += sizeof(this->st_upper_muscle_length);
        memcpy( &(this->upper_muscle_length[i]), &(this->st_upper_muscle_length), sizeof(double));
      }
      uint8_t legs_muscle_length_lengthT = *(inbuffer + offset++);
      if(legs_muscle_length_lengthT > legs_muscle_length_length)
        this->legs_muscle_length = (double*)realloc(this->legs_muscle_length, legs_muscle_length_lengthT * sizeof(double));
      offset += 3;
      legs_muscle_length_length = legs_muscle_length_lengthT;
      for( uint8_t i = 0; i < legs_muscle_length_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_legs_muscle_length;
      u_st_legs_muscle_length.base = 0;
      u_st_legs_muscle_length.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_legs_muscle_length.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_legs_muscle_length.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_legs_muscle_length.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_legs_muscle_length.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_legs_muscle_length.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_legs_muscle_length.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_legs_muscle_length.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_legs_muscle_length = u_st_legs_muscle_length.real;
      offset += sizeof(this->st_legs_muscle_length);
        memcpy( &(this->legs_muscle_length[i]), &(this->st_legs_muscle_length), sizeof(double));
      }
     return offset;
    }

    const char * getType(){ return "tendon_robot_utils/DefaultPose"; };
    const char * getMD5(){ return "9ce02ac2ff5ce5e5caa49f097c9eb533"; };

  };

}
#endif