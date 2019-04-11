#ifndef _ROS_jsk_recognition_msgs_LabelArray_h
#define _ROS_jsk_recognition_msgs_LabelArray_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "jsk_recognition_msgs/Label.h"

namespace jsk_recognition_msgs
{

  class LabelArray : public ros::Msg
  {
    public:
      std_msgs::Header header;
      uint8_t labels_length;
      jsk_recognition_msgs::Label st_labels;
      jsk_recognition_msgs::Label * labels;

    LabelArray():
      header(),
      labels_length(0), labels(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset++) = labels_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < labels_length; i++){
      offset += this->labels[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint8_t labels_lengthT = *(inbuffer + offset++);
      if(labels_lengthT > labels_length)
        this->labels = (jsk_recognition_msgs::Label*)realloc(this->labels, labels_lengthT * sizeof(jsk_recognition_msgs::Label));
      offset += 3;
      labels_length = labels_lengthT;
      for( uint8_t i = 0; i < labels_length; i++){
      offset += this->st_labels.deserialize(inbuffer + offset);
        memcpy( &(this->labels[i]), &(this->st_labels), sizeof(jsk_recognition_msgs::Label));
      }
     return offset;
    }

    const char * getType(){ return "jsk_recognition_msgs/LabelArray"; };
    const char * getMD5(){ return "8cdb9aed89bee725ff5ad76b2986927d"; };

  };

}
#endif