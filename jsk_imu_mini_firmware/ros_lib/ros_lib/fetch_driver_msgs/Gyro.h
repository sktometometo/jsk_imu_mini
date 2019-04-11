#ifndef _ROS_fetch_driver_msgs_Gyro_h
#define _ROS_fetch_driver_msgs_Gyro_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "geometry_msgs/Vector3.h"

namespace fetch_driver_msgs
{

  class Gyro : public ros::Msg
  {
    public:
      std_msgs::Header header;
      uint32_t flags;
      geometry_msgs::Vector3 data;
      geometry_msgs::Vector3 raw;
      geometry_msgs::Vector3 scale;
      geometry_msgs::Vector3 offset;
      enum { GLITCH =  1 };
      enum { INIT_ERROR =  2 };
      enum { READ_ERROR =  4 };
      enum { INTERRUPT_TOO_SLOW =  8 };
      enum { INTERRUPT_TOO_FAST =  16 };
      enum { SENSOR_NOT_PRESENT =  32 };
      enum { DEFINITELY_MOVING =  536870912    };
      enum { DEFINITELY_STOPPED =  1073741824    };
      enum { ANY_ERROR =  2147483648    };

    Gyro():
      header(),
      flags(0),
      data(),
      raw(),
      scale(),
      offset()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->flags >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->flags >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->flags >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->flags >> (8 * 3)) & 0xFF;
      offset += sizeof(this->flags);
      offset += this->data.serialize(outbuffer + offset);
      offset += this->raw.serialize(outbuffer + offset);
      offset += this->scale.serialize(outbuffer + offset);
      offset += this->offset.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      this->flags =  ((uint32_t) (*(inbuffer + offset)));
      this->flags |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->flags |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->flags |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->flags);
      offset += this->data.deserialize(inbuffer + offset);
      offset += this->raw.deserialize(inbuffer + offset);
      offset += this->scale.deserialize(inbuffer + offset);
      offset += this->offset.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "fetch_driver_msgs/Gyro"; };
    const char * getMD5(){ return "7e55d268dcc35aae7026f0428ed61292"; };

  };

}
#endif