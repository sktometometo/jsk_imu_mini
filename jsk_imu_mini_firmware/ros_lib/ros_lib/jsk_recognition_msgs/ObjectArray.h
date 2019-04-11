#ifndef _ROS_jsk_recognition_msgs_ObjectArray_h
#define _ROS_jsk_recognition_msgs_ObjectArray_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "jsk_recognition_msgs/Object.h"

namespace jsk_recognition_msgs
{

  class ObjectArray : public ros::Msg
  {
    public:
      std_msgs::Header header;
      uint8_t objects_length;
      jsk_recognition_msgs::Object st_objects;
      jsk_recognition_msgs::Object * objects;

    ObjectArray():
      header(),
      objects_length(0), objects(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset++) = objects_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < objects_length; i++){
      offset += this->objects[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint8_t objects_lengthT = *(inbuffer + offset++);
      if(objects_lengthT > objects_length)
        this->objects = (jsk_recognition_msgs::Object*)realloc(this->objects, objects_lengthT * sizeof(jsk_recognition_msgs::Object));
      offset += 3;
      objects_length = objects_lengthT;
      for( uint8_t i = 0; i < objects_length; i++){
      offset += this->st_objects.deserialize(inbuffer + offset);
        memcpy( &(this->objects[i]), &(this->st_objects), sizeof(jsk_recognition_msgs::Object));
      }
     return offset;
    }

    const char * getType(){ return "jsk_recognition_msgs/ObjectArray"; };
    const char * getMD5(){ return "36314156578f919cf316fea64cc4a616"; };

  };

}
#endif