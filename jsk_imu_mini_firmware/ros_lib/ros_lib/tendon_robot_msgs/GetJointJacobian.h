#ifndef _ROS_SERVICE_GetJointJacobian_h
#define _ROS_SERVICE_GetJointJacobian_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace tendon_robot_msgs
{

static const char GETJOINTJACOBIAN[] = "tendon_robot_msgs/GetJointJacobian";

  class GetJointJacobianRequest : public ros::Msg
  {
    public:
      const char* name;
      uint8_t target_theta_length;
      float st_target_theta;
      float * target_theta;

    GetJointJacobianRequest():
      name(""),
      target_theta_length(0), target_theta(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_name = strlen(this->name);
      memcpy(outbuffer + offset, &length_name, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->name, length_name);
      offset += length_name;
      *(outbuffer + offset++) = target_theta_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < target_theta_length; i++){
      union {
        float real;
        uint32_t base;
      } u_target_thetai;
      u_target_thetai.real = this->target_theta[i];
      *(outbuffer + offset + 0) = (u_target_thetai.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_target_thetai.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_target_thetai.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_target_thetai.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->target_theta[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_name;
      memcpy(&length_name, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_name-1]=0;
      this->name = (char *)(inbuffer + offset-1);
      offset += length_name;
      uint8_t target_theta_lengthT = *(inbuffer + offset++);
      if(target_theta_lengthT > target_theta_length)
        this->target_theta = (float*)realloc(this->target_theta, target_theta_lengthT * sizeof(float));
      offset += 3;
      target_theta_length = target_theta_lengthT;
      for( uint8_t i = 0; i < target_theta_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_target_theta;
      u_st_target_theta.base = 0;
      u_st_target_theta.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_target_theta.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_target_theta.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_target_theta.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_target_theta = u_st_target_theta.real;
      offset += sizeof(this->st_target_theta);
        memcpy( &(this->target_theta[i]), &(this->st_target_theta), sizeof(float));
      }
     return offset;
    }

    const char * getType(){ return GETJOINTJACOBIAN; };
    const char * getMD5(){ return "cc4f46642f9fe6ffff65162792954711"; };

  };

  class GetJointJacobianResponse : public ros::Msg
  {
    public:
      uint8_t joint_jacobian_length;
      float st_joint_jacobian;
      float * joint_jacobian;

    GetJointJacobianResponse():
      joint_jacobian_length(0), joint_jacobian(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset++) = joint_jacobian_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < joint_jacobian_length; i++){
      union {
        float real;
        uint32_t base;
      } u_joint_jacobiani;
      u_joint_jacobiani.real = this->joint_jacobian[i];
      *(outbuffer + offset + 0) = (u_joint_jacobiani.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_joint_jacobiani.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_joint_jacobiani.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_joint_jacobiani.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->joint_jacobian[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint8_t joint_jacobian_lengthT = *(inbuffer + offset++);
      if(joint_jacobian_lengthT > joint_jacobian_length)
        this->joint_jacobian = (float*)realloc(this->joint_jacobian, joint_jacobian_lengthT * sizeof(float));
      offset += 3;
      joint_jacobian_length = joint_jacobian_lengthT;
      for( uint8_t i = 0; i < joint_jacobian_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_joint_jacobian;
      u_st_joint_jacobian.base = 0;
      u_st_joint_jacobian.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_joint_jacobian.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_joint_jacobian.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_joint_jacobian.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_joint_jacobian = u_st_joint_jacobian.real;
      offset += sizeof(this->st_joint_jacobian);
        memcpy( &(this->joint_jacobian[i]), &(this->st_joint_jacobian), sizeof(float));
      }
     return offset;
    }

    const char * getType(){ return GETJOINTJACOBIAN; };
    const char * getMD5(){ return "62ca8461aa0e6c9b321f578c2646d8e2"; };

  };

  class GetJointJacobian {
    public:
    typedef GetJointJacobianRequest Request;
    typedef GetJointJacobianResponse Response;
  };

}
#endif
