#ifndef _ROS_SERVICE_OpenHRP_RemoveForceSensorLinkOffsetService_removeForceSensorOffset_h
#define _ROS_SERVICE_OpenHRP_RemoveForceSensorLinkOffsetService_removeForceSensorOffset_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace hrpsys_ros_bridge
{

static const char OPENHRP_REMOVEFORCESENSORLINKOFFSETSERVICE_REMOVEFORCESENSOROFFSET[] = "hrpsys_ros_bridge/OpenHRP_RemoveForceSensorLinkOffsetService_removeForceSensorOffset";

  class OpenHRP_RemoveForceSensorLinkOffsetService_removeForceSensorOffsetRequest : public ros::Msg
  {
    public:
      uint8_t names_length;
      char* st_names;
      char* * names;
      double tm;

    OpenHRP_RemoveForceSensorLinkOffsetService_removeForceSensorOffsetRequest():
      names_length(0), names(NULL),
      tm(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset++) = names_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < names_length; i++){
      uint32_t length_namesi = strlen(this->names[i]);
      memcpy(outbuffer + offset, &length_namesi, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->names[i], length_namesi);
      offset += length_namesi;
      }
      union {
        double real;
        uint64_t base;
      } u_tm;
      u_tm.real = this->tm;
      *(outbuffer + offset + 0) = (u_tm.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_tm.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_tm.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_tm.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_tm.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_tm.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_tm.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_tm.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->tm);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint8_t names_lengthT = *(inbuffer + offset++);
      if(names_lengthT > names_length)
        this->names = (char**)realloc(this->names, names_lengthT * sizeof(char*));
      offset += 3;
      names_length = names_lengthT;
      for( uint8_t i = 0; i < names_length; i++){
      uint32_t length_st_names;
      memcpy(&length_st_names, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_names; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_names-1]=0;
      this->st_names = (char *)(inbuffer + offset-1);
      offset += length_st_names;
        memcpy( &(this->names[i]), &(this->st_names), sizeof(char*));
      }
      union {
        double real;
        uint64_t base;
      } u_tm;
      u_tm.base = 0;
      u_tm.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_tm.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_tm.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_tm.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_tm.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_tm.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_tm.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_tm.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->tm = u_tm.real;
      offset += sizeof(this->tm);
     return offset;
    }

    const char * getType(){ return OPENHRP_REMOVEFORCESENSORLINKOFFSETSERVICE_REMOVEFORCESENSOROFFSET; };
    const char * getMD5(){ return "c89cf9d69f0652e9bafee37766b5d68d"; };

  };

  class OpenHRP_RemoveForceSensorLinkOffsetService_removeForceSensorOffsetResponse : public ros::Msg
  {
    public:
      bool operation_return;

    OpenHRP_RemoveForceSensorLinkOffsetService_removeForceSensorOffsetResponse():
      operation_return(0)
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
     return offset;
    }

    const char * getType(){ return OPENHRP_REMOVEFORCESENSORLINKOFFSETSERVICE_REMOVEFORCESENSOROFFSET; };
    const char * getMD5(){ return "8dd59ee39c15084c92106411b8c3e8fc"; };

  };

  class OpenHRP_RemoveForceSensorLinkOffsetService_removeForceSensorOffset {
    public:
    typedef OpenHRP_RemoveForceSensorLinkOffsetService_removeForceSensorOffsetRequest Request;
    typedef OpenHRP_RemoveForceSensorLinkOffsetService_removeForceSensorOffsetResponse Response;
  };

}
#endif
