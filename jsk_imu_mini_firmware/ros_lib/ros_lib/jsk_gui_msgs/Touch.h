#ifndef _ROS_jsk_gui_msgs_Touch_h
#define _ROS_jsk_gui_msgs_Touch_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace jsk_gui_msgs
{

  class Touch : public ros::Msg
  {
    public:
      int64_t finger_id;
      double x;
      double y;
      int64_t image_width;
      int64_t image_height;

    Touch():
      finger_id(0),
      x(0),
      y(0),
      image_width(0),
      image_height(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_finger_id;
      u_finger_id.real = this->finger_id;
      *(outbuffer + offset + 0) = (u_finger_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_finger_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_finger_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_finger_id.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_finger_id.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_finger_id.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_finger_id.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_finger_id.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->finger_id);
      union {
        double real;
        uint64_t base;
      } u_x;
      u_x.real = this->x;
      *(outbuffer + offset + 0) = (u_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_x.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_x.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_x.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_x.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_x.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->x);
      union {
        double real;
        uint64_t base;
      } u_y;
      u_y.real = this->y;
      *(outbuffer + offset + 0) = (u_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_y.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_y.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_y.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_y.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_y.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->y);
      union {
        int64_t real;
        uint64_t base;
      } u_image_width;
      u_image_width.real = this->image_width;
      *(outbuffer + offset + 0) = (u_image_width.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_image_width.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_image_width.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_image_width.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_image_width.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_image_width.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_image_width.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_image_width.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->image_width);
      union {
        int64_t real;
        uint64_t base;
      } u_image_height;
      u_image_height.real = this->image_height;
      *(outbuffer + offset + 0) = (u_image_height.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_image_height.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_image_height.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_image_height.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_image_height.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_image_height.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_image_height.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_image_height.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->image_height);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_finger_id;
      u_finger_id.base = 0;
      u_finger_id.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_finger_id.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_finger_id.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_finger_id.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_finger_id.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_finger_id.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_finger_id.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_finger_id.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->finger_id = u_finger_id.real;
      offset += sizeof(this->finger_id);
      union {
        double real;
        uint64_t base;
      } u_x;
      u_x.base = 0;
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_x.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->x = u_x.real;
      offset += sizeof(this->x);
      union {
        double real;
        uint64_t base;
      } u_y;
      u_y.base = 0;
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_y.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->y = u_y.real;
      offset += sizeof(this->y);
      union {
        int64_t real;
        uint64_t base;
      } u_image_width;
      u_image_width.base = 0;
      u_image_width.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_image_width.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_image_width.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_image_width.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_image_width.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_image_width.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_image_width.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_image_width.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->image_width = u_image_width.real;
      offset += sizeof(this->image_width);
      union {
        int64_t real;
        uint64_t base;
      } u_image_height;
      u_image_height.base = 0;
      u_image_height.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_image_height.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_image_height.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_image_height.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_image_height.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_image_height.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_image_height.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_image_height.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->image_height = u_image_height.real;
      offset += sizeof(this->image_height);
     return offset;
    }

    const char * getType(){ return "jsk_gui_msgs/Touch"; };
    const char * getMD5(){ return "d96a284d39fcc410f375ac68fd380177"; };

  };

}
#endif