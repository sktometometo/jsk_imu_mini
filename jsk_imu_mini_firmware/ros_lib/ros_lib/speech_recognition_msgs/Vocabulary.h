#ifndef _ROS_speech_recognition_msgs_Vocabulary_h
#define _ROS_speech_recognition_msgs_Vocabulary_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace speech_recognition_msgs
{

  class Vocabulary : public ros::Msg
  {
    public:
      const char* name;
      uint8_t words_length;
      char* st_words;
      char* * words;
      uint8_t phonemes_length;
      char* st_phonemes;
      char* * phonemes;

    Vocabulary():
      name(""),
      words_length(0), words(NULL),
      phonemes_length(0), phonemes(NULL)
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
      *(outbuffer + offset++) = words_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < words_length; i++){
      uint32_t length_wordsi = strlen(this->words[i]);
      memcpy(outbuffer + offset, &length_wordsi, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->words[i], length_wordsi);
      offset += length_wordsi;
      }
      *(outbuffer + offset++) = phonemes_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < phonemes_length; i++){
      uint32_t length_phonemesi = strlen(this->phonemes[i]);
      memcpy(outbuffer + offset, &length_phonemesi, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->phonemes[i], length_phonemesi);
      offset += length_phonemesi;
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
      uint8_t words_lengthT = *(inbuffer + offset++);
      if(words_lengthT > words_length)
        this->words = (char**)realloc(this->words, words_lengthT * sizeof(char*));
      offset += 3;
      words_length = words_lengthT;
      for( uint8_t i = 0; i < words_length; i++){
      uint32_t length_st_words;
      memcpy(&length_st_words, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_words; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_words-1]=0;
      this->st_words = (char *)(inbuffer + offset-1);
      offset += length_st_words;
        memcpy( &(this->words[i]), &(this->st_words), sizeof(char*));
      }
      uint8_t phonemes_lengthT = *(inbuffer + offset++);
      if(phonemes_lengthT > phonemes_length)
        this->phonemes = (char**)realloc(this->phonemes, phonemes_lengthT * sizeof(char*));
      offset += 3;
      phonemes_length = phonemes_lengthT;
      for( uint8_t i = 0; i < phonemes_length; i++){
      uint32_t length_st_phonemes;
      memcpy(&length_st_phonemes, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_phonemes; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_phonemes-1]=0;
      this->st_phonemes = (char *)(inbuffer + offset-1);
      offset += length_st_phonemes;
        memcpy( &(this->phonemes[i]), &(this->st_phonemes), sizeof(char*));
      }
     return offset;
    }

    const char * getType(){ return "speech_recognition_msgs/Vocabulary"; };
    const char * getMD5(){ return "20a1ff9e31d8f4dc29f230a64ed707d7"; };

  };

}
#endif