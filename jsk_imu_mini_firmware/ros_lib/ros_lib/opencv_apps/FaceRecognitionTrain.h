#ifndef _ROS_SERVICE_FaceRecognitionTrain_h
#define _ROS_SERVICE_FaceRecognitionTrain_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "sensor_msgs/Image.h"
#include "opencv_apps/Rect.h"

namespace opencv_apps
{

static const char FACERECOGNITIONTRAIN[] = "opencv_apps/FaceRecognitionTrain";

  class FaceRecognitionTrainRequest : public ros::Msg
  {
    public:
      uint8_t images_length;
      sensor_msgs::Image st_images;
      sensor_msgs::Image * images;
      uint8_t rects_length;
      opencv_apps::Rect st_rects;
      opencv_apps::Rect * rects;
      uint8_t labels_length;
      char* st_labels;
      char* * labels;

    FaceRecognitionTrainRequest():
      images_length(0), images(NULL),
      rects_length(0), rects(NULL),
      labels_length(0), labels(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset++) = images_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < images_length; i++){
      offset += this->images[i].serialize(outbuffer + offset);
      }
      *(outbuffer + offset++) = rects_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < rects_length; i++){
      offset += this->rects[i].serialize(outbuffer + offset);
      }
      *(outbuffer + offset++) = labels_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < labels_length; i++){
      uint32_t length_labelsi = strlen(this->labels[i]);
      memcpy(outbuffer + offset, &length_labelsi, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->labels[i], length_labelsi);
      offset += length_labelsi;
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint8_t images_lengthT = *(inbuffer + offset++);
      if(images_lengthT > images_length)
        this->images = (sensor_msgs::Image*)realloc(this->images, images_lengthT * sizeof(sensor_msgs::Image));
      offset += 3;
      images_length = images_lengthT;
      for( uint8_t i = 0; i < images_length; i++){
      offset += this->st_images.deserialize(inbuffer + offset);
        memcpy( &(this->images[i]), &(this->st_images), sizeof(sensor_msgs::Image));
      }
      uint8_t rects_lengthT = *(inbuffer + offset++);
      if(rects_lengthT > rects_length)
        this->rects = (opencv_apps::Rect*)realloc(this->rects, rects_lengthT * sizeof(opencv_apps::Rect));
      offset += 3;
      rects_length = rects_lengthT;
      for( uint8_t i = 0; i < rects_length; i++){
      offset += this->st_rects.deserialize(inbuffer + offset);
        memcpy( &(this->rects[i]), &(this->st_rects), sizeof(opencv_apps::Rect));
      }
      uint8_t labels_lengthT = *(inbuffer + offset++);
      if(labels_lengthT > labels_length)
        this->labels = (char**)realloc(this->labels, labels_lengthT * sizeof(char*));
      offset += 3;
      labels_length = labels_lengthT;
      for( uint8_t i = 0; i < labels_length; i++){
      uint32_t length_st_labels;
      memcpy(&length_st_labels, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_labels; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_labels-1]=0;
      this->st_labels = (char *)(inbuffer + offset-1);
      offset += length_st_labels;
        memcpy( &(this->labels[i]), &(this->st_labels), sizeof(char*));
      }
     return offset;
    }

    const char * getType(){ return FACERECOGNITIONTRAIN; };
    const char * getMD5(){ return "ba188b4bf792edbaf69c7f296a16e0ec"; };

  };

  class FaceRecognitionTrainResponse : public ros::Msg
  {
    public:
      bool ok;
      const char* error;

    FaceRecognitionTrainResponse():
      ok(0),
      error("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_ok;
      u_ok.real = this->ok;
      *(outbuffer + offset + 0) = (u_ok.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->ok);
      uint32_t length_error = strlen(this->error);
      memcpy(outbuffer + offset, &length_error, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->error, length_error);
      offset += length_error;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_ok;
      u_ok.base = 0;
      u_ok.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->ok = u_ok.real;
      offset += sizeof(this->ok);
      uint32_t length_error;
      memcpy(&length_error, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_error; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_error-1]=0;
      this->error = (char *)(inbuffer + offset-1);
      offset += length_error;
     return offset;
    }

    const char * getType(){ return FACERECOGNITIONTRAIN; };
    const char * getMD5(){ return "14d6fca830116fb9833d983a296f00ed"; };

  };

  class FaceRecognitionTrain {
    public:
    typedef FaceRecognitionTrainRequest Request;
    typedef FaceRecognitionTrainResponse Response;
  };

}
#endif
