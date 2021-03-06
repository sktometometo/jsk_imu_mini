#ifndef _ROS_pal_navigation_msgs_MapConfiguration_h
#define _ROS_pal_navigation_msgs_MapConfiguration_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "pal_navigation_msgs/POI.h"
#include "pal_navigation_msgs/VisualLocDB.h"
#include "nav_msgs/OccupancyGrid.h"
#include "sensor_msgs/Image.h"
#include "pal_navigation_msgs/NiceMapTransformation.h"

namespace pal_navigation_msgs
{

  class MapConfiguration : public ros::Msg
  {
    public:
      int32_t numberOfSubMaps;
      pal_navigation_msgs::POI pois;
      pal_navigation_msgs::POI vo;
      pal_navigation_msgs::POI zoi;
      pal_navigation_msgs::VisualLocDB visualLocDb;
      nav_msgs::OccupancyGrid navigation_map;
      sensor_msgs::Image user_map;
      pal_navigation_msgs::NiceMapTransformation transform;

    MapConfiguration():
      numberOfSubMaps(0),
      pois(),
      vo(),
      zoi(),
      visualLocDb(),
      navigation_map(),
      user_map(),
      transform()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_numberOfSubMaps;
      u_numberOfSubMaps.real = this->numberOfSubMaps;
      *(outbuffer + offset + 0) = (u_numberOfSubMaps.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_numberOfSubMaps.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_numberOfSubMaps.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_numberOfSubMaps.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->numberOfSubMaps);
      offset += this->pois.serialize(outbuffer + offset);
      offset += this->vo.serialize(outbuffer + offset);
      offset += this->zoi.serialize(outbuffer + offset);
      offset += this->visualLocDb.serialize(outbuffer + offset);
      offset += this->navigation_map.serialize(outbuffer + offset);
      offset += this->user_map.serialize(outbuffer + offset);
      offset += this->transform.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_numberOfSubMaps;
      u_numberOfSubMaps.base = 0;
      u_numberOfSubMaps.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_numberOfSubMaps.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_numberOfSubMaps.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_numberOfSubMaps.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->numberOfSubMaps = u_numberOfSubMaps.real;
      offset += sizeof(this->numberOfSubMaps);
      offset += this->pois.deserialize(inbuffer + offset);
      offset += this->vo.deserialize(inbuffer + offset);
      offset += this->zoi.deserialize(inbuffer + offset);
      offset += this->visualLocDb.deserialize(inbuffer + offset);
      offset += this->navigation_map.deserialize(inbuffer + offset);
      offset += this->user_map.deserialize(inbuffer + offset);
      offset += this->transform.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "pal_navigation_msgs/MapConfiguration"; };
    const char * getMD5(){ return "5353508f01e09cd4c535be05f8270d10"; };

  };

}
#endif