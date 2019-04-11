#ifndef _ROS_jsk_recognition_msgs_PeoplePoseArray_h
#define _ROS_jsk_recognition_msgs_PeoplePoseArray_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "jsk_recognition_msgs/PeoplePose.h"

namespace jsk_recognition_msgs
{

  class PeoplePoseArray : public ros::Msg
  {
    public:
      std_msgs::Header header;
      uint8_t poses_length;
      jsk_recognition_msgs::PeoplePose st_poses;
      jsk_recognition_msgs::PeoplePose * poses;

    PeoplePoseArray():
      header(),
      poses_length(0), poses(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset++) = poses_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < poses_length; i++){
      offset += this->poses[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint8_t poses_lengthT = *(inbuffer + offset++);
      if(poses_lengthT > poses_length)
        this->poses = (jsk_recognition_msgs::PeoplePose*)realloc(this->poses, poses_lengthT * sizeof(jsk_recognition_msgs::PeoplePose));
      offset += 3;
      poses_length = poses_lengthT;
      for( uint8_t i = 0; i < poses_length; i++){
      offset += this->st_poses.deserialize(inbuffer + offset);
        memcpy( &(this->poses[i]), &(this->st_poses), sizeof(jsk_recognition_msgs::PeoplePose));
      }
     return offset;
    }

    const char * getType(){ return "jsk_recognition_msgs/PeoplePoseArray"; };
    const char * getMD5(){ return "57d49e8e639421734a0ce15bfde9d80d"; };

  };

}
#endif