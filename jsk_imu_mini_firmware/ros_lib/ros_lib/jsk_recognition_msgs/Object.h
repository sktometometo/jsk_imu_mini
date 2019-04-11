#ifndef _ROS_jsk_recognition_msgs_Object_h
#define _ROS_jsk_recognition_msgs_Object_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/Vector3.h"

namespace jsk_recognition_msgs
{

  class Object : public ros::Msg
  {
    public:
      int32_t id;
      const char* name;
      int32_t class_id;
      const char* class_name;
      uint8_t image_resources_length;
      char* st_image_resources;
      char* * image_resources;
      const char* mesh_resource;
      float weight;
      geometry_msgs::Vector3 dimensions;

    Object():
      id(0),
      name(""),
      class_id(0),
      class_name(""),
      image_resources_length(0), image_resources(NULL),
      mesh_resource(""),
      weight(0),
      dimensions()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_id;
      u_id.real = this->id;
      *(outbuffer + offset + 0) = (u_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_id.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->id);
      uint32_t length_name = strlen(this->name);
      memcpy(outbuffer + offset, &length_name, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->name, length_name);
      offset += length_name;
      union {
        int32_t real;
        uint32_t base;
      } u_class_id;
      u_class_id.real = this->class_id;
      *(outbuffer + offset + 0) = (u_class_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_class_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_class_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_class_id.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->class_id);
      uint32_t length_class_name = strlen(this->class_name);
      memcpy(outbuffer + offset, &length_class_name, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->class_name, length_class_name);
      offset += length_class_name;
      *(outbuffer + offset++) = image_resources_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < image_resources_length; i++){
      uint32_t length_image_resourcesi = strlen(this->image_resources[i]);
      memcpy(outbuffer + offset, &length_image_resourcesi, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->image_resources[i], length_image_resourcesi);
      offset += length_image_resourcesi;
      }
      uint32_t length_mesh_resource = strlen(this->mesh_resource);
      memcpy(outbuffer + offset, &length_mesh_resource, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->mesh_resource, length_mesh_resource);
      offset += length_mesh_resource;
      union {
        float real;
        uint32_t base;
      } u_weight;
      u_weight.real = this->weight;
      *(outbuffer + offset + 0) = (u_weight.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_weight.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_weight.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_weight.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->weight);
      offset += this->dimensions.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_id;
      u_id.base = 0;
      u_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->id = u_id.real;
      offset += sizeof(this->id);
      uint32_t length_name;
      memcpy(&length_name, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_name-1]=0;
      this->name = (char *)(inbuffer + offset-1);
      offset += length_name;
      union {
        int32_t real;
        uint32_t base;
      } u_class_id;
      u_class_id.base = 0;
      u_class_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_class_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_class_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_class_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->class_id = u_class_id.real;
      offset += sizeof(this->class_id);
      uint32_t length_class_name;
      memcpy(&length_class_name, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_class_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_class_name-1]=0;
      this->class_name = (char *)(inbuffer + offset-1);
      offset += length_class_name;
      uint8_t image_resources_lengthT = *(inbuffer + offset++);
      if(image_resources_lengthT > image_resources_length)
        this->image_resources = (char**)realloc(this->image_resources, image_resources_lengthT * sizeof(char*));
      offset += 3;
      image_resources_length = image_resources_lengthT;
      for( uint8_t i = 0; i < image_resources_length; i++){
      uint32_t length_st_image_resources;
      memcpy(&length_st_image_resources, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_image_resources; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_image_resources-1]=0;
      this->st_image_resources = (char *)(inbuffer + offset-1);
      offset += length_st_image_resources;
        memcpy( &(this->image_resources[i]), &(this->st_image_resources), sizeof(char*));
      }
      uint32_t length_mesh_resource;
      memcpy(&length_mesh_resource, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_mesh_resource; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_mesh_resource-1]=0;
      this->mesh_resource = (char *)(inbuffer + offset-1);
      offset += length_mesh_resource;
      union {
        float real;
        uint32_t base;
      } u_weight;
      u_weight.base = 0;
      u_weight.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_weight.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_weight.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_weight.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->weight = u_weight.real;
      offset += sizeof(this->weight);
      offset += this->dimensions.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "jsk_recognition_msgs/Object"; };
    const char * getMD5(){ return "57c53e712043df0244b0482d0447adee"; };

  };

}
#endif