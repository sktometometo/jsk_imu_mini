#ifndef _ROS_speech_recognition_msgs_Grammar_h
#define _ROS_speech_recognition_msgs_Grammar_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "speech_recognition_msgs/PhraseRule.h"
#include "speech_recognition_msgs/Vocabulary.h"

namespace speech_recognition_msgs
{

  class Grammar : public ros::Msg
  {
    public:
      const char* name;
      uint8_t rules_length;
      speech_recognition_msgs::PhraseRule st_rules;
      speech_recognition_msgs::PhraseRule * rules;
      uint8_t categories_length;
      char* st_categories;
      char* * categories;
      uint8_t vocabularies_length;
      speech_recognition_msgs::Vocabulary st_vocabularies;
      speech_recognition_msgs::Vocabulary * vocabularies;

    Grammar():
      name(""),
      rules_length(0), rules(NULL),
      categories_length(0), categories(NULL),
      vocabularies_length(0), vocabularies(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_name = strlen(this->name);
      memcpy(outbuffer + offset, &length_name, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->name, length_name);
      offset += length_name;
      *(outbuffer + offset++) = rules_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < rules_length; i++){
      offset += this->rules[i].serialize(outbuffer + offset);
      }
      *(outbuffer + offset++) = categories_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < categories_length; i++){
      uint32_t length_categoriesi = strlen(this->categories[i]);
      memcpy(outbuffer + offset, &length_categoriesi, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->categories[i], length_categoriesi);
      offset += length_categoriesi;
      }
      *(outbuffer + offset++) = vocabularies_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < vocabularies_length; i++){
      offset += this->vocabularies[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_name;
      memcpy(&length_name, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_name-1]=0;
      this->name = (char *)(inbuffer + offset-1);
      offset += length_name;
      uint8_t rules_lengthT = *(inbuffer + offset++);
      if(rules_lengthT > rules_length)
        this->rules = (speech_recognition_msgs::PhraseRule*)realloc(this->rules, rules_lengthT * sizeof(speech_recognition_msgs::PhraseRule));
      offset += 3;
      rules_length = rules_lengthT;
      for( uint8_t i = 0; i < rules_length; i++){
      offset += this->st_rules.deserialize(inbuffer + offset);
        memcpy( &(this->rules[i]), &(this->st_rules), sizeof(speech_recognition_msgs::PhraseRule));
      }
      uint8_t categories_lengthT = *(inbuffer + offset++);
      if(categories_lengthT > categories_length)
        this->categories = (char**)realloc(this->categories, categories_lengthT * sizeof(char*));
      offset += 3;
      categories_length = categories_lengthT;
      for( uint8_t i = 0; i < categories_length; i++){
      uint32_t length_st_categories;
      memcpy(&length_st_categories, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_categories; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_categories-1]=0;
      this->st_categories = (char *)(inbuffer + offset-1);
      offset += length_st_categories;
        memcpy( &(this->categories[i]), &(this->st_categories), sizeof(char*));
      }
      uint8_t vocabularies_lengthT = *(inbuffer + offset++);
      if(vocabularies_lengthT > vocabularies_length)
        this->vocabularies = (speech_recognition_msgs::Vocabulary*)realloc(this->vocabularies, vocabularies_lengthT * sizeof(speech_recognition_msgs::Vocabulary));
      offset += 3;
      vocabularies_length = vocabularies_lengthT;
      for( uint8_t i = 0; i < vocabularies_length; i++){
      offset += this->st_vocabularies.deserialize(inbuffer + offset);
        memcpy( &(this->vocabularies[i]), &(this->st_vocabularies), sizeof(speech_recognition_msgs::Vocabulary));
      }
     return offset;
    }

    const char * getType(){ return "speech_recognition_msgs/Grammar"; };
    const char * getMD5(){ return "a8653cae3429492cb944a813429e7151"; };

  };

}
#endif