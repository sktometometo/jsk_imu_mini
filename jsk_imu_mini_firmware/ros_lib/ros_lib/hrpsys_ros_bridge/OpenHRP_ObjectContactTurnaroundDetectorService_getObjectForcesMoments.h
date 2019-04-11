#ifndef _ROS_SERVICE_OpenHRP_ObjectContactTurnaroundDetectorService_getObjectForcesMoments_h
#define _ROS_SERVICE_OpenHRP_ObjectContactTurnaroundDetectorService_getObjectForcesMoments_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Float64MultiArray.h"

namespace hrpsys_ros_bridge
{

static const char OPENHRP_OBJECTCONTACTTURNAROUNDDETECTORSERVICE_GETOBJECTFORCESMOMENTS[] = "hrpsys_ros_bridge/OpenHRP_ObjectContactTurnaroundDetectorService_getObjectForcesMoments";

  class OpenHRP_ObjectContactTurnaroundDetectorService_getObjectForcesMomentsRequest : public ros::Msg
  {
    public:

    OpenHRP_ObjectContactTurnaroundDetectorService_getObjectForcesMomentsRequest()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
     return offset;
    }

    const char * getType(){ return OPENHRP_OBJECTCONTACTTURNAROUNDDETECTORSERVICE_GETOBJECTFORCESMOMENTS; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class OpenHRP_ObjectContactTurnaroundDetectorService_getObjectForcesMomentsResponse : public ros::Msg
  {
    public:
      bool operation_return;
      std_msgs::Float64MultiArray o_forces;
      std_msgs::Float64MultiArray o_moments;
      double o_3dofwrench[3];
      double o_fric_coeff_wrench;

    OpenHRP_ObjectContactTurnaroundDetectorService_getObjectForcesMomentsResponse():
      operation_return(0),
      o_forces(),
      o_moments(),
      o_3dofwrench(),
      o_fric_coeff_wrench(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_operation_return;
      u_operation_return.real = this->operation_return;
      *(outbuffer + offset + 0) = (u_operation_return.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->operation_return);
      offset += this->o_forces.serialize(outbuffer + offset);
      offset += this->o_moments.serialize(outbuffer + offset);
      for( uint8_t i = 0; i < 3; i++){
      union {
        double real;
        uint64_t base;
      } u_o_3dofwrenchi;
      u_o_3dofwrenchi.real = this->o_3dofwrench[i];
      *(outbuffer + offset + 0) = (u_o_3dofwrenchi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_o_3dofwrenchi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_o_3dofwrenchi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_o_3dofwrenchi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_o_3dofwrenchi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_o_3dofwrenchi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_o_3dofwrenchi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_o_3dofwrenchi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->o_3dofwrench[i]);
      }
      union {
        double real;
        uint64_t base;
      } u_o_fric_coeff_wrench;
      u_o_fric_coeff_wrench.real = this->o_fric_coeff_wrench;
      *(outbuffer + offset + 0) = (u_o_fric_coeff_wrench.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_o_fric_coeff_wrench.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_o_fric_coeff_wrench.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_o_fric_coeff_wrench.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_o_fric_coeff_wrench.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_o_fric_coeff_wrench.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_o_fric_coeff_wrench.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_o_fric_coeff_wrench.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->o_fric_coeff_wrench);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_operation_return;
      u_operation_return.base = 0;
      u_operation_return.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->operation_return = u_operation_return.real;
      offset += sizeof(this->operation_return);
      offset += this->o_forces.deserialize(inbuffer + offset);
      offset += this->o_moments.deserialize(inbuffer + offset);
      for( uint8_t i = 0; i < 3; i++){
      union {
        double real;
        uint64_t base;
      } u_o_3dofwrenchi;
      u_o_3dofwrenchi.base = 0;
      u_o_3dofwrenchi.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_o_3dofwrenchi.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_o_3dofwrenchi.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_o_3dofwrenchi.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_o_3dofwrenchi.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_o_3dofwrenchi.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_o_3dofwrenchi.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_o_3dofwrenchi.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->o_3dofwrench[i] = u_o_3dofwrenchi.real;
      offset += sizeof(this->o_3dofwrench[i]);
      }
      union {
        double real;
        uint64_t base;
      } u_o_fric_coeff_wrench;
      u_o_fric_coeff_wrench.base = 0;
      u_o_fric_coeff_wrench.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_o_fric_coeff_wrench.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_o_fric_coeff_wrench.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_o_fric_coeff_wrench.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_o_fric_coeff_wrench.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_o_fric_coeff_wrench.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_o_fric_coeff_wrench.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_o_fric_coeff_wrench.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->o_fric_coeff_wrench = u_o_fric_coeff_wrench.real;
      offset += sizeof(this->o_fric_coeff_wrench);
     return offset;
    }

    const char * getType(){ return OPENHRP_OBJECTCONTACTTURNAROUNDDETECTORSERVICE_GETOBJECTFORCESMOMENTS; };
    const char * getMD5(){ return "d0bce08e142f0891f190c6bf4aa33922"; };

  };

  class OpenHRP_ObjectContactTurnaroundDetectorService_getObjectForcesMoments {
    public:
    typedef OpenHRP_ObjectContactTurnaroundDetectorService_getObjectForcesMomentsRequest Request;
    typedef OpenHRP_ObjectContactTurnaroundDetectorService_getObjectForcesMomentsResponse Response;
  };

}
#endif
