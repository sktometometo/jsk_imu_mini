#ifndef _ROS_SERVICE_FkTest_h
#define _ROS_SERVICE_FkTest_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace pr2_calibration_launch
{

static const char FKTEST[] = "pr2_calibration_launch/FkTest";

  class FkTestRequest : public ros::Msg
  {
    public:
      const char* root;
      const char* tip;
      uint8_t joint_positions_length;
      double st_joint_positions;
      double * joint_positions;

    FkTestRequest():
      root(""),
      tip(""),
      joint_positions_length(0), joint_positions(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_root = strlen(this->root);
      memcpy(outbuffer + offset, &length_root, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->root, length_root);
      offset += length_root;
      uint32_t length_tip = strlen(this->tip);
      memcpy(outbuffer + offset, &length_tip, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->tip, length_tip);
      offset += length_tip;
      *(outbuffer + offset++) = joint_positions_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < joint_positions_length; i++){
      union {
        double real;
        uint64_t base;
      } u_joint_positionsi;
      u_joint_positionsi.real = this->joint_positions[i];
      *(outbuffer + offset + 0) = (u_joint_positionsi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_joint_positionsi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_joint_positionsi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_joint_positionsi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_joint_positionsi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_joint_positionsi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_joint_positionsi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_joint_positionsi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->joint_positions[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_root;
      memcpy(&length_root, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_root; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_root-1]=0;
      this->root = (char *)(inbuffer + offset-1);
      offset += length_root;
      uint32_t length_tip;
      memcpy(&length_tip, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_tip; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_tip-1]=0;
      this->tip = (char *)(inbuffer + offset-1);
      offset += length_tip;
      uint8_t joint_positions_lengthT = *(inbuffer + offset++);
      if(joint_positions_lengthT > joint_positions_length)
        this->joint_positions = (double*)realloc(this->joint_positions, joint_positions_lengthT * sizeof(double));
      offset += 3;
      joint_positions_length = joint_positions_lengthT;
      for( uint8_t i = 0; i < joint_positions_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_joint_positions;
      u_st_joint_positions.base = 0;
      u_st_joint_positions.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_joint_positions.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_joint_positions.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_joint_positions.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_joint_positions.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_joint_positions.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_joint_positions.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_joint_positions.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_joint_positions = u_st_joint_positions.real;
      offset += sizeof(this->st_joint_positions);
        memcpy( &(this->joint_positions[i]), &(this->st_joint_positions), sizeof(double));
      }
     return offset;
    }

    const char * getType(){ return FKTEST; };
    const char * getMD5(){ return "708e14f98ff72822d3442bcaef9c218d"; };

  };

  class FkTestResponse : public ros::Msg
  {
    public:
      uint8_t pos_length;
      double st_pos;
      double * pos;
      uint8_t rot_length;
      double st_rot;
      double * rot;

    FkTestResponse():
      pos_length(0), pos(NULL),
      rot_length(0), rot(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset++) = pos_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < pos_length; i++){
      union {
        double real;
        uint64_t base;
      } u_posi;
      u_posi.real = this->pos[i];
      *(outbuffer + offset + 0) = (u_posi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_posi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_posi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_posi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_posi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_posi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_posi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_posi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos[i]);
      }
      *(outbuffer + offset++) = rot_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < rot_length; i++){
      union {
        double real;
        uint64_t base;
      } u_roti;
      u_roti.real = this->rot[i];
      *(outbuffer + offset + 0) = (u_roti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_roti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_roti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_roti.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_roti.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_roti.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_roti.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_roti.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->rot[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint8_t pos_lengthT = *(inbuffer + offset++);
      if(pos_lengthT > pos_length)
        this->pos = (double*)realloc(this->pos, pos_lengthT * sizeof(double));
      offset += 3;
      pos_length = pos_lengthT;
      for( uint8_t i = 0; i < pos_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_pos;
      u_st_pos.base = 0;
      u_st_pos.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pos.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pos.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pos.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_pos.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_pos.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_pos.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_pos.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_pos = u_st_pos.real;
      offset += sizeof(this->st_pos);
        memcpy( &(this->pos[i]), &(this->st_pos), sizeof(double));
      }
      uint8_t rot_lengthT = *(inbuffer + offset++);
      if(rot_lengthT > rot_length)
        this->rot = (double*)realloc(this->rot, rot_lengthT * sizeof(double));
      offset += 3;
      rot_length = rot_lengthT;
      for( uint8_t i = 0; i < rot_length; i++){
      union {
        double real;
        uint64_t base;
      } u_st_rot;
      u_st_rot.base = 0;
      u_st_rot.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_rot.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_rot.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_rot.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_rot.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_rot.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_rot.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_rot.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_rot = u_st_rot.real;
      offset += sizeof(this->st_rot);
        memcpy( &(this->rot[i]), &(this->st_rot), sizeof(double));
      }
     return offset;
    }

    const char * getType(){ return FKTEST; };
    const char * getMD5(){ return "e2248c2f30c5f3e010ed2e9434015c6e"; };

  };

  class FkTest {
    public:
    typedef FkTestRequest Request;
    typedef FkTestResponse Response;
  };

}
#endif
