#ifndef _ROS_jsk_recognition_msgs_SegmentArray_h
#define _ROS_jsk_recognition_msgs_SegmentArray_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "jsk_recognition_msgs/Segment.h"

namespace jsk_recognition_msgs
{

  class SegmentArray : public ros::Msg
  {
    public:
      std_msgs::Header header;
      uint8_t segments_length;
      jsk_recognition_msgs::Segment st_segments;
      jsk_recognition_msgs::Segment * segments;

    SegmentArray():
      header(),
      segments_length(0), segments(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset++) = segments_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < segments_length; i++){
      offset += this->segments[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint8_t segments_lengthT = *(inbuffer + offset++);
      if(segments_lengthT > segments_length)
        this->segments = (jsk_recognition_msgs::Segment*)realloc(this->segments, segments_lengthT * sizeof(jsk_recognition_msgs::Segment));
      offset += 3;
      segments_length = segments_lengthT;
      for( uint8_t i = 0; i < segments_length; i++){
      offset += this->st_segments.deserialize(inbuffer + offset);
        memcpy( &(this->segments[i]), &(this->st_segments), sizeof(jsk_recognition_msgs::Segment));
      }
     return offset;
    }

    const char * getType(){ return "jsk_recognition_msgs/SegmentArray"; };
    const char * getMD5(){ return "672a84c8545e1a65663c5497ab1a917c"; };

  };

}
#endif