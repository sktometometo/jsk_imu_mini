#ifndef _ROS_jsk_recognition_msgs_PosedCameraInfo_h
#define _ROS_jsk_recognition_msgs_PosedCameraInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "sensor_msgs/CameraInfo.h"
#include "geometry_msgs/Pose.h"

namespace jsk_recognition_msgs
{

  class PosedCameraInfo : public ros::Msg
  {
    public:
      std_msgs::Header header;
      sensor_msgs::CameraInfo camera_info;
      geometry_msgs::Pose offset;

    PosedCameraInfo():
      header(),
      camera_info(),
      offset()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->camera_info.serialize(outbuffer + offset);
      offset += this->offset.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->camera_info.deserialize(inbuffer + offset);
      offset += this->offset.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "jsk_recognition_msgs/PosedCameraInfo"; };
    const char * getMD5(){ return "bfcbc4847adb445a428e4af537ed849a"; };

  };

}
#endif