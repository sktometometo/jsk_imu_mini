#ifndef _ROS_monocam_settler_ConfigResult_h
#define _ROS_monocam_settler_ConfigResult_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace monocam_settler
{

  class ConfigResult : public ros::Msg
  {
    public:

    ConfigResult()
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

    const char * getType(){ return "monocam_settler/ConfigResult"; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

}
#endif