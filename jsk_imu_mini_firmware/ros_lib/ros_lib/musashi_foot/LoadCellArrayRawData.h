#ifndef _ROS_musashi_foot_LoadCellArrayRawData_h
#define _ROS_musashi_foot_LoadCellArrayRawData_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace musashi_foot
{

  class LoadCellArrayRawData : public ros::Msg
  {
    public:
      std_msgs::Header header;
      uint8_t data_length;
      uint16_t st_data;
      uint16_t * data;

    LoadCellArrayRawData():
      header(),
      data_length(0), data(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset++) = data_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < data_length; i++){
      *(outbuffer + offset + 0) = (this->data[i] >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->data[i] >> (8 * 1)) & 0xFF;
      offset += sizeof(this->data[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint8_t data_lengthT = *(inbuffer + offset++);
      if(data_lengthT > data_length)
        this->data = (uint16_t*)realloc(this->data, data_lengthT * sizeof(uint16_t));
      offset += 3;
      data_length = data_lengthT;
      for( uint8_t i = 0; i < data_length; i++){
      this->st_data =  ((uint16_t) (*(inbuffer + offset)));
      this->st_data |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->st_data);
        memcpy( &(this->data[i]), &(this->st_data), sizeof(uint16_t));
      }
     return offset;
    }

    const char * getType(){ return "musashi_foot/LoadCellArrayRawData"; };
    const char * getMD5(){ return "2b9446334eb40dbaedf25a747be49905"; };

  };

}
#endif