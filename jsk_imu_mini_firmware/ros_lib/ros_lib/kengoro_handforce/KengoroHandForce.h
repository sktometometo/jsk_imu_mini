#ifndef _ROS_kengoro_handforce_KengoroHandForce_h
#define _ROS_kengoro_handforce_KengoroHandForce_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace kengoro_handforce
{

  class KengoroHandForce : public ros::Msg
  {
    public:
      std_msgs::Header header;
      uint8_t all_length;
      float st_all;
      float * all;
      uint8_t left_length;
      float st_left;
      float * left;
      uint8_t right_length;
      float st_right;
      float * right;

    KengoroHandForce():
      header(),
      all_length(0), all(NULL),
      left_length(0), left(NULL),
      right_length(0), right(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset++) = all_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < all_length; i++){
      union {
        float real;
        uint32_t base;
      } u_alli;
      u_alli.real = this->all[i];
      *(outbuffer + offset + 0) = (u_alli.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_alli.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_alli.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_alli.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->all[i]);
      }
      *(outbuffer + offset++) = left_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < left_length; i++){
      union {
        float real;
        uint32_t base;
      } u_lefti;
      u_lefti.real = this->left[i];
      *(outbuffer + offset + 0) = (u_lefti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_lefti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_lefti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_lefti.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->left[i]);
      }
      *(outbuffer + offset++) = right_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < right_length; i++){
      union {
        float real;
        uint32_t base;
      } u_righti;
      u_righti.real = this->right[i];
      *(outbuffer + offset + 0) = (u_righti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_righti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_righti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_righti.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->right[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint8_t all_lengthT = *(inbuffer + offset++);
      if(all_lengthT > all_length)
        this->all = (float*)realloc(this->all, all_lengthT * sizeof(float));
      offset += 3;
      all_length = all_lengthT;
      for( uint8_t i = 0; i < all_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_all;
      u_st_all.base = 0;
      u_st_all.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_all.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_all.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_all.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_all = u_st_all.real;
      offset += sizeof(this->st_all);
        memcpy( &(this->all[i]), &(this->st_all), sizeof(float));
      }
      uint8_t left_lengthT = *(inbuffer + offset++);
      if(left_lengthT > left_length)
        this->left = (float*)realloc(this->left, left_lengthT * sizeof(float));
      offset += 3;
      left_length = left_lengthT;
      for( uint8_t i = 0; i < left_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_left;
      u_st_left.base = 0;
      u_st_left.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_left.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_left.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_left.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_left = u_st_left.real;
      offset += sizeof(this->st_left);
        memcpy( &(this->left[i]), &(this->st_left), sizeof(float));
      }
      uint8_t right_lengthT = *(inbuffer + offset++);
      if(right_lengthT > right_length)
        this->right = (float*)realloc(this->right, right_lengthT * sizeof(float));
      offset += 3;
      right_length = right_lengthT;
      for( uint8_t i = 0; i < right_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_right;
      u_st_right.base = 0;
      u_st_right.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_right.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_right.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_right.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_right = u_st_right.real;
      offset += sizeof(this->st_right);
        memcpy( &(this->right[i]), &(this->st_right), sizeof(float));
      }
     return offset;
    }

    const char * getType(){ return "kengoro_handforce/KengoroHandForce"; };
    const char * getMD5(){ return "72fd05b7d17699362c3527baafc53925"; };

  };

}
#endif