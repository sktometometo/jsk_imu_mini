#ifndef _ROS_nervous_log_RobotState_h
#define _ROS_nervous_log_RobotState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace nervous_log
{

  class RobotState : public ros::Msg
  {
    public:
      std_msgs::Header header;
      uint8_t reference_length;
      float st_reference;
      float * reference;
      uint8_t potentio_length;
      float st_potentio;
      float * potentio;
      uint8_t error_length;
      float st_error;
      float * error;
      uint8_t sense_length;
      float st_sense;
      float * sense;
      uint8_t fsr_length;
      float st_fsr;
      float * fsr;
      uint8_t thermo_length;
      float st_thermo;
      float * thermo;
      uint8_t qjoint_length;
      float st_qjoint;
      float * qjoint;
      uint8_t qjointinfo_length;
      float st_qjointinfo;
      float * qjointinfo;
      uint8_t jointangle_length;
      float st_jointangle;
      float * jointangle;
      uint8_t opft_length;
      float st_opft;
      float * opft;
      uint8_t h815dvin_length;
      float st_h815dvin;
      float * h815dvin;
      uint8_t h815motorthermo_length;
      float st_h815motorthermo;
      float * h815motorthermo;
      uint8_t h815output_length;
      float st_h815output;
      float * h815output;
      uint8_t h815maxpwm_length;
      float st_h815maxpwm;
      float * h815maxpwm;
      uint8_t h815status_length;
      float st_h815status;
      float * h815status;
      uint8_t h815thermo_length;
      float st_h815thermo;
      float * h815thermo;
      uint8_t h815cycletime_length;
      float st_h815cycletime;
      float * h815cycletime;
      uint8_t h815rpm_length;
      float st_h815rpm;
      float * h815rpm;
      uint8_t h815motorstatus_length;
      float st_h815motorstatus;
      float * h815motorstatus;
      uint8_t h815encoder_length;
      float st_h815encoder;
      float * h815encoder;
      uint8_t fpgatimeoutcounter_length;
      float st_fpgatimeoutcounter;
      float * fpgatimeoutcounter;
      uint8_t fpgatimeout_length;
      float st_fpgatimeout;
      float * fpgatimeout;
      uint8_t fpgavin_length;
      float st_fpgavin;
      float * fpgavin;
      uint8_t fpgam10v_length;
      float st_fpgam10v;
      float * fpgam10v;
      uint8_t fpgas5v_length;
      float st_fpgas5v;
      float * fpgas5v;
      uint8_t maxpos_length;
      float st_maxpos;
      float * maxpos;
      uint8_t minpos_length;
      float st_minpos;
      float * minpos;
      uint8_t limitpos_length;
      float st_limitpos;
      float * limitpos;
      uint8_t controlstatus_length;
      float st_controlstatus;
      float * controlstatus;
      uint8_t fixmode_length;
      float st_fixmode;
      float * fixmode;
      uint8_t connectp_length;
      float st_connectp;
      float * connectp;
      uint8_t tension_length;
      float st_tension;
      float * tension;
      uint8_t adxl_length;
      float st_adxl;
      float * adxl;
      uint8_t suit_length;
      float st_suit;
      float * suit;
      uint8_t gyro_length;
      float st_gyro;
      float * gyro;
      uint8_t posture_length;
      float st_posture;
      float * posture;
      uint8_t euler_length;
      float st_euler;
      float * euler;
      uint8_t magne_length;
      float st_magne;
      float * magne;
      uint8_t rencoder_length;
      float st_rencoder;
      float * rencoder;
      uint8_t zmp_length;
      float st_zmp;
      float * zmp;
      uint8_t weight_length;
      float st_weight;
      float * weight;
      uint8_t tactiles_length;
      float st_tactiles;
      float * tactiles;
      uint8_t usonic_length;
      float st_usonic;
      float * usonic;
      uint8_t forceplate_length;
      float st_forceplate;
      float * forceplate;
      uint8_t pgain_length;
      float st_pgain;
      float * pgain;
      uint8_t dgain_length;
      float st_dgain;
      float * dgain;
      uint8_t igain_length;
      float st_igain;
      float * igain;
      uint8_t forceref_length;
      float st_forceref;
      float * forceref;
      uint8_t ccforceref_length;
      float st_ccforceref;
      float * ccforceref;
      uint8_t fcpgain_length;
      float st_fcpgain;
      float * fcpgain;
      uint8_t fcdgain_length;
      float st_fcdgain;
      float * fcdgain;
      uint8_t fcigain_length;
      float st_fcigain;
      float * fcigain;
      uint8_t fccycle_length;
      float st_fccycle;
      float * fccycle;
      uint8_t fcthreshold_length;
      float st_fcthreshold;
      float * fcthreshold;
      uint8_t flimit_length;
      float st_flimit;
      float * flimit;
      uint8_t accinertia_length;
      float st_accinertia;
      float * accinertia;
      uint8_t accfriction_length;
      float st_accfriction;
      float * accfriction;
      uint8_t acctension_length;
      float st_acctension;
      float * acctension;
      uint8_t loadcelloffset_length;
      float st_loadcelloffset;
      float * loadcelloffset;
      uint8_t motorgearratio_length;
      float st_motorgearratio;
      float * motorgearratio;
      uint8_t motorwatt_length;
      float st_motorwatt;
      float * motorwatt;
      uint8_t springcoef_length;
      float st_springcoef;
      float * springcoef;
      uint8_t curlim_length;
      float st_curlim;
      float * curlim;
      uint8_t controlmode_length;
      float st_controlmode;
      float * controlmode;
      uint8_t worldpos_length;
      float st_worldpos;
      float * worldpos;
      uint8_t worldrot_length;
      float st_worldrot;
      float * worldrot;
      uint8_t centroid_length;
      float st_centroid;
      float * centroid;
      uint8_t objectpos_length;
      float st_objectpos;
      float * objectpos;
      uint8_t objectrot_length;
      float st_objectrot;
      float * objectrot;
      uint8_t objectjoint_length;
      float st_objectjoint;
      float * objectjoint;
      uint8_t torque_length;
      float st_torque;
      float * torque;
      uint8_t color_length;
      float st_color;
      float * color;
      uint8_t stereo_length;
      float st_stereo;
      float * stereo;
      uint8_t stereolabel_length;
      float st_stereolabel;
      float * stereolabel;
      uint8_t psf_length;
      float st_psf;
      float * psf;
      uint8_t face_length;
      float st_face;
      float * face;
      uint8_t mep_length;
      float st_mep;
      float * mep;
      uint8_t flow_length;
      float st_flow;
      float * flow;
      uint8_t stereomep_length;
      float st_stereomep;
      float * stereomep;
      uint8_t objectinfo_length;
      float st_objectinfo;
      float * objectinfo;
      float jsimtime;
      uint8_t jsimpgain_length;
      float st_jsimpgain;
      float * jsimpgain;
      uint8_t jsimpower_length;
      float st_jsimpower;
      float * jsimpower;
      uint8_t slider_length;
      float st_slider;
      float * slider;
      float nscycltime;
      float nsproctime;
      const char* extradata;

    RobotState():
      header(),
      reference_length(0), reference(NULL),
      potentio_length(0), potentio(NULL),
      error_length(0), error(NULL),
      sense_length(0), sense(NULL),
      fsr_length(0), fsr(NULL),
      thermo_length(0), thermo(NULL),
      qjoint_length(0), qjoint(NULL),
      qjointinfo_length(0), qjointinfo(NULL),
      jointangle_length(0), jointangle(NULL),
      opft_length(0), opft(NULL),
      h815dvin_length(0), h815dvin(NULL),
      h815motorthermo_length(0), h815motorthermo(NULL),
      h815output_length(0), h815output(NULL),
      h815maxpwm_length(0), h815maxpwm(NULL),
      h815status_length(0), h815status(NULL),
      h815thermo_length(0), h815thermo(NULL),
      h815cycletime_length(0), h815cycletime(NULL),
      h815rpm_length(0), h815rpm(NULL),
      h815motorstatus_length(0), h815motorstatus(NULL),
      h815encoder_length(0), h815encoder(NULL),
      fpgatimeoutcounter_length(0), fpgatimeoutcounter(NULL),
      fpgatimeout_length(0), fpgatimeout(NULL),
      fpgavin_length(0), fpgavin(NULL),
      fpgam10v_length(0), fpgam10v(NULL),
      fpgas5v_length(0), fpgas5v(NULL),
      maxpos_length(0), maxpos(NULL),
      minpos_length(0), minpos(NULL),
      limitpos_length(0), limitpos(NULL),
      controlstatus_length(0), controlstatus(NULL),
      fixmode_length(0), fixmode(NULL),
      connectp_length(0), connectp(NULL),
      tension_length(0), tension(NULL),
      adxl_length(0), adxl(NULL),
      suit_length(0), suit(NULL),
      gyro_length(0), gyro(NULL),
      posture_length(0), posture(NULL),
      euler_length(0), euler(NULL),
      magne_length(0), magne(NULL),
      rencoder_length(0), rencoder(NULL),
      zmp_length(0), zmp(NULL),
      weight_length(0), weight(NULL),
      tactiles_length(0), tactiles(NULL),
      usonic_length(0), usonic(NULL),
      forceplate_length(0), forceplate(NULL),
      pgain_length(0), pgain(NULL),
      dgain_length(0), dgain(NULL),
      igain_length(0), igain(NULL),
      forceref_length(0), forceref(NULL),
      ccforceref_length(0), ccforceref(NULL),
      fcpgain_length(0), fcpgain(NULL),
      fcdgain_length(0), fcdgain(NULL),
      fcigain_length(0), fcigain(NULL),
      fccycle_length(0), fccycle(NULL),
      fcthreshold_length(0), fcthreshold(NULL),
      flimit_length(0), flimit(NULL),
      accinertia_length(0), accinertia(NULL),
      accfriction_length(0), accfriction(NULL),
      acctension_length(0), acctension(NULL),
      loadcelloffset_length(0), loadcelloffset(NULL),
      motorgearratio_length(0), motorgearratio(NULL),
      motorwatt_length(0), motorwatt(NULL),
      springcoef_length(0), springcoef(NULL),
      curlim_length(0), curlim(NULL),
      controlmode_length(0), controlmode(NULL),
      worldpos_length(0), worldpos(NULL),
      worldrot_length(0), worldrot(NULL),
      centroid_length(0), centroid(NULL),
      objectpos_length(0), objectpos(NULL),
      objectrot_length(0), objectrot(NULL),
      objectjoint_length(0), objectjoint(NULL),
      torque_length(0), torque(NULL),
      color_length(0), color(NULL),
      stereo_length(0), stereo(NULL),
      stereolabel_length(0), stereolabel(NULL),
      psf_length(0), psf(NULL),
      face_length(0), face(NULL),
      mep_length(0), mep(NULL),
      flow_length(0), flow(NULL),
      stereomep_length(0), stereomep(NULL),
      objectinfo_length(0), objectinfo(NULL),
      jsimtime(0),
      jsimpgain_length(0), jsimpgain(NULL),
      jsimpower_length(0), jsimpower(NULL),
      slider_length(0), slider(NULL),
      nscycltime(0),
      nsproctime(0),
      extradata("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset++) = reference_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < reference_length; i++){
      union {
        float real;
        uint32_t base;
      } u_referencei;
      u_referencei.real = this->reference[i];
      *(outbuffer + offset + 0) = (u_referencei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_referencei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_referencei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_referencei.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->reference[i]);
      }
      *(outbuffer + offset++) = potentio_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < potentio_length; i++){
      union {
        float real;
        uint32_t base;
      } u_potentioi;
      u_potentioi.real = this->potentio[i];
      *(outbuffer + offset + 0) = (u_potentioi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_potentioi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_potentioi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_potentioi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->potentio[i]);
      }
      *(outbuffer + offset++) = error_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < error_length; i++){
      union {
        float real;
        uint32_t base;
      } u_errori;
      u_errori.real = this->error[i];
      *(outbuffer + offset + 0) = (u_errori.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_errori.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_errori.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_errori.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->error[i]);
      }
      *(outbuffer + offset++) = sense_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < sense_length; i++){
      union {
        float real;
        uint32_t base;
      } u_sensei;
      u_sensei.real = this->sense[i];
      *(outbuffer + offset + 0) = (u_sensei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_sensei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_sensei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_sensei.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->sense[i]);
      }
      *(outbuffer + offset++) = fsr_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < fsr_length; i++){
      union {
        float real;
        uint32_t base;
      } u_fsri;
      u_fsri.real = this->fsr[i];
      *(outbuffer + offset + 0) = (u_fsri.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fsri.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fsri.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fsri.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->fsr[i]);
      }
      *(outbuffer + offset++) = thermo_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < thermo_length; i++){
      union {
        float real;
        uint32_t base;
      } u_thermoi;
      u_thermoi.real = this->thermo[i];
      *(outbuffer + offset + 0) = (u_thermoi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_thermoi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_thermoi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_thermoi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->thermo[i]);
      }
      *(outbuffer + offset++) = qjoint_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < qjoint_length; i++){
      union {
        float real;
        uint32_t base;
      } u_qjointi;
      u_qjointi.real = this->qjoint[i];
      *(outbuffer + offset + 0) = (u_qjointi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_qjointi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_qjointi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_qjointi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->qjoint[i]);
      }
      *(outbuffer + offset++) = qjointinfo_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < qjointinfo_length; i++){
      union {
        float real;
        uint32_t base;
      } u_qjointinfoi;
      u_qjointinfoi.real = this->qjointinfo[i];
      *(outbuffer + offset + 0) = (u_qjointinfoi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_qjointinfoi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_qjointinfoi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_qjointinfoi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->qjointinfo[i]);
      }
      *(outbuffer + offset++) = jointangle_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < jointangle_length; i++){
      union {
        float real;
        uint32_t base;
      } u_jointanglei;
      u_jointanglei.real = this->jointangle[i];
      *(outbuffer + offset + 0) = (u_jointanglei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_jointanglei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_jointanglei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_jointanglei.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->jointangle[i]);
      }
      *(outbuffer + offset++) = opft_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < opft_length; i++){
      union {
        float real;
        uint32_t base;
      } u_opfti;
      u_opfti.real = this->opft[i];
      *(outbuffer + offset + 0) = (u_opfti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_opfti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_opfti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_opfti.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->opft[i]);
      }
      *(outbuffer + offset++) = h815dvin_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < h815dvin_length; i++){
      union {
        float real;
        uint32_t base;
      } u_h815dvini;
      u_h815dvini.real = this->h815dvin[i];
      *(outbuffer + offset + 0) = (u_h815dvini.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_h815dvini.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_h815dvini.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_h815dvini.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->h815dvin[i]);
      }
      *(outbuffer + offset++) = h815motorthermo_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < h815motorthermo_length; i++){
      union {
        float real;
        uint32_t base;
      } u_h815motorthermoi;
      u_h815motorthermoi.real = this->h815motorthermo[i];
      *(outbuffer + offset + 0) = (u_h815motorthermoi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_h815motorthermoi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_h815motorthermoi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_h815motorthermoi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->h815motorthermo[i]);
      }
      *(outbuffer + offset++) = h815output_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < h815output_length; i++){
      union {
        float real;
        uint32_t base;
      } u_h815outputi;
      u_h815outputi.real = this->h815output[i];
      *(outbuffer + offset + 0) = (u_h815outputi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_h815outputi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_h815outputi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_h815outputi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->h815output[i]);
      }
      *(outbuffer + offset++) = h815maxpwm_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < h815maxpwm_length; i++){
      union {
        float real;
        uint32_t base;
      } u_h815maxpwmi;
      u_h815maxpwmi.real = this->h815maxpwm[i];
      *(outbuffer + offset + 0) = (u_h815maxpwmi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_h815maxpwmi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_h815maxpwmi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_h815maxpwmi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->h815maxpwm[i]);
      }
      *(outbuffer + offset++) = h815status_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < h815status_length; i++){
      union {
        float real;
        uint32_t base;
      } u_h815statusi;
      u_h815statusi.real = this->h815status[i];
      *(outbuffer + offset + 0) = (u_h815statusi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_h815statusi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_h815statusi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_h815statusi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->h815status[i]);
      }
      *(outbuffer + offset++) = h815thermo_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < h815thermo_length; i++){
      union {
        float real;
        uint32_t base;
      } u_h815thermoi;
      u_h815thermoi.real = this->h815thermo[i];
      *(outbuffer + offset + 0) = (u_h815thermoi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_h815thermoi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_h815thermoi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_h815thermoi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->h815thermo[i]);
      }
      *(outbuffer + offset++) = h815cycletime_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < h815cycletime_length; i++){
      union {
        float real;
        uint32_t base;
      } u_h815cycletimei;
      u_h815cycletimei.real = this->h815cycletime[i];
      *(outbuffer + offset + 0) = (u_h815cycletimei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_h815cycletimei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_h815cycletimei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_h815cycletimei.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->h815cycletime[i]);
      }
      *(outbuffer + offset++) = h815rpm_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < h815rpm_length; i++){
      union {
        float real;
        uint32_t base;
      } u_h815rpmi;
      u_h815rpmi.real = this->h815rpm[i];
      *(outbuffer + offset + 0) = (u_h815rpmi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_h815rpmi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_h815rpmi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_h815rpmi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->h815rpm[i]);
      }
      *(outbuffer + offset++) = h815motorstatus_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < h815motorstatus_length; i++){
      union {
        float real;
        uint32_t base;
      } u_h815motorstatusi;
      u_h815motorstatusi.real = this->h815motorstatus[i];
      *(outbuffer + offset + 0) = (u_h815motorstatusi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_h815motorstatusi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_h815motorstatusi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_h815motorstatusi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->h815motorstatus[i]);
      }
      *(outbuffer + offset++) = h815encoder_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < h815encoder_length; i++){
      union {
        float real;
        uint32_t base;
      } u_h815encoderi;
      u_h815encoderi.real = this->h815encoder[i];
      *(outbuffer + offset + 0) = (u_h815encoderi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_h815encoderi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_h815encoderi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_h815encoderi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->h815encoder[i]);
      }
      *(outbuffer + offset++) = fpgatimeoutcounter_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < fpgatimeoutcounter_length; i++){
      union {
        float real;
        uint32_t base;
      } u_fpgatimeoutcounteri;
      u_fpgatimeoutcounteri.real = this->fpgatimeoutcounter[i];
      *(outbuffer + offset + 0) = (u_fpgatimeoutcounteri.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fpgatimeoutcounteri.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fpgatimeoutcounteri.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fpgatimeoutcounteri.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->fpgatimeoutcounter[i]);
      }
      *(outbuffer + offset++) = fpgatimeout_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < fpgatimeout_length; i++){
      union {
        float real;
        uint32_t base;
      } u_fpgatimeouti;
      u_fpgatimeouti.real = this->fpgatimeout[i];
      *(outbuffer + offset + 0) = (u_fpgatimeouti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fpgatimeouti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fpgatimeouti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fpgatimeouti.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->fpgatimeout[i]);
      }
      *(outbuffer + offset++) = fpgavin_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < fpgavin_length; i++){
      union {
        float real;
        uint32_t base;
      } u_fpgavini;
      u_fpgavini.real = this->fpgavin[i];
      *(outbuffer + offset + 0) = (u_fpgavini.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fpgavini.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fpgavini.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fpgavini.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->fpgavin[i]);
      }
      *(outbuffer + offset++) = fpgam10v_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < fpgam10v_length; i++){
      union {
        float real;
        uint32_t base;
      } u_fpgam10vi;
      u_fpgam10vi.real = this->fpgam10v[i];
      *(outbuffer + offset + 0) = (u_fpgam10vi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fpgam10vi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fpgam10vi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fpgam10vi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->fpgam10v[i]);
      }
      *(outbuffer + offset++) = fpgas5v_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < fpgas5v_length; i++){
      union {
        float real;
        uint32_t base;
      } u_fpgas5vi;
      u_fpgas5vi.real = this->fpgas5v[i];
      *(outbuffer + offset + 0) = (u_fpgas5vi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fpgas5vi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fpgas5vi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fpgas5vi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->fpgas5v[i]);
      }
      *(outbuffer + offset++) = maxpos_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < maxpos_length; i++){
      union {
        float real;
        uint32_t base;
      } u_maxposi;
      u_maxposi.real = this->maxpos[i];
      *(outbuffer + offset + 0) = (u_maxposi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_maxposi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_maxposi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_maxposi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->maxpos[i]);
      }
      *(outbuffer + offset++) = minpos_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < minpos_length; i++){
      union {
        float real;
        uint32_t base;
      } u_minposi;
      u_minposi.real = this->minpos[i];
      *(outbuffer + offset + 0) = (u_minposi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_minposi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_minposi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_minposi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->minpos[i]);
      }
      *(outbuffer + offset++) = limitpos_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < limitpos_length; i++){
      union {
        float real;
        uint32_t base;
      } u_limitposi;
      u_limitposi.real = this->limitpos[i];
      *(outbuffer + offset + 0) = (u_limitposi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_limitposi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_limitposi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_limitposi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->limitpos[i]);
      }
      *(outbuffer + offset++) = controlstatus_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < controlstatus_length; i++){
      union {
        float real;
        uint32_t base;
      } u_controlstatusi;
      u_controlstatusi.real = this->controlstatus[i];
      *(outbuffer + offset + 0) = (u_controlstatusi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_controlstatusi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_controlstatusi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_controlstatusi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->controlstatus[i]);
      }
      *(outbuffer + offset++) = fixmode_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < fixmode_length; i++){
      union {
        float real;
        uint32_t base;
      } u_fixmodei;
      u_fixmodei.real = this->fixmode[i];
      *(outbuffer + offset + 0) = (u_fixmodei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fixmodei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fixmodei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fixmodei.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->fixmode[i]);
      }
      *(outbuffer + offset++) = connectp_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < connectp_length; i++){
      union {
        float real;
        uint32_t base;
      } u_connectpi;
      u_connectpi.real = this->connectp[i];
      *(outbuffer + offset + 0) = (u_connectpi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_connectpi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_connectpi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_connectpi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->connectp[i]);
      }
      *(outbuffer + offset++) = tension_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < tension_length; i++){
      union {
        float real;
        uint32_t base;
      } u_tensioni;
      u_tensioni.real = this->tension[i];
      *(outbuffer + offset + 0) = (u_tensioni.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_tensioni.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_tensioni.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_tensioni.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->tension[i]);
      }
      *(outbuffer + offset++) = adxl_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < adxl_length; i++){
      union {
        float real;
        uint32_t base;
      } u_adxli;
      u_adxli.real = this->adxl[i];
      *(outbuffer + offset + 0) = (u_adxli.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_adxli.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_adxli.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_adxli.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->adxl[i]);
      }
      *(outbuffer + offset++) = suit_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < suit_length; i++){
      union {
        float real;
        uint32_t base;
      } u_suiti;
      u_suiti.real = this->suit[i];
      *(outbuffer + offset + 0) = (u_suiti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_suiti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_suiti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_suiti.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->suit[i]);
      }
      *(outbuffer + offset++) = gyro_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < gyro_length; i++){
      union {
        float real;
        uint32_t base;
      } u_gyroi;
      u_gyroi.real = this->gyro[i];
      *(outbuffer + offset + 0) = (u_gyroi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gyroi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gyroi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gyroi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->gyro[i]);
      }
      *(outbuffer + offset++) = posture_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < posture_length; i++){
      union {
        float real;
        uint32_t base;
      } u_posturei;
      u_posturei.real = this->posture[i];
      *(outbuffer + offset + 0) = (u_posturei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_posturei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_posturei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_posturei.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->posture[i]);
      }
      *(outbuffer + offset++) = euler_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < euler_length; i++){
      union {
        float real;
        uint32_t base;
      } u_euleri;
      u_euleri.real = this->euler[i];
      *(outbuffer + offset + 0) = (u_euleri.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_euleri.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_euleri.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_euleri.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->euler[i]);
      }
      *(outbuffer + offset++) = magne_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < magne_length; i++){
      union {
        float real;
        uint32_t base;
      } u_magnei;
      u_magnei.real = this->magne[i];
      *(outbuffer + offset + 0) = (u_magnei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_magnei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_magnei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_magnei.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->magne[i]);
      }
      *(outbuffer + offset++) = rencoder_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < rencoder_length; i++){
      union {
        float real;
        uint32_t base;
      } u_rencoderi;
      u_rencoderi.real = this->rencoder[i];
      *(outbuffer + offset + 0) = (u_rencoderi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rencoderi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rencoderi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rencoderi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->rencoder[i]);
      }
      *(outbuffer + offset++) = zmp_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < zmp_length; i++){
      union {
        float real;
        uint32_t base;
      } u_zmpi;
      u_zmpi.real = this->zmp[i];
      *(outbuffer + offset + 0) = (u_zmpi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_zmpi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_zmpi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_zmpi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->zmp[i]);
      }
      *(outbuffer + offset++) = weight_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < weight_length; i++){
      union {
        float real;
        uint32_t base;
      } u_weighti;
      u_weighti.real = this->weight[i];
      *(outbuffer + offset + 0) = (u_weighti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_weighti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_weighti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_weighti.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->weight[i]);
      }
      *(outbuffer + offset++) = tactiles_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < tactiles_length; i++){
      union {
        float real;
        uint32_t base;
      } u_tactilesi;
      u_tactilesi.real = this->tactiles[i];
      *(outbuffer + offset + 0) = (u_tactilesi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_tactilesi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_tactilesi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_tactilesi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->tactiles[i]);
      }
      *(outbuffer + offset++) = usonic_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < usonic_length; i++){
      union {
        float real;
        uint32_t base;
      } u_usonici;
      u_usonici.real = this->usonic[i];
      *(outbuffer + offset + 0) = (u_usonici.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_usonici.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_usonici.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_usonici.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->usonic[i]);
      }
      *(outbuffer + offset++) = forceplate_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < forceplate_length; i++){
      union {
        float real;
        uint32_t base;
      } u_forceplatei;
      u_forceplatei.real = this->forceplate[i];
      *(outbuffer + offset + 0) = (u_forceplatei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_forceplatei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_forceplatei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_forceplatei.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->forceplate[i]);
      }
      *(outbuffer + offset++) = pgain_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < pgain_length; i++){
      union {
        float real;
        uint32_t base;
      } u_pgaini;
      u_pgaini.real = this->pgain[i];
      *(outbuffer + offset + 0) = (u_pgaini.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pgaini.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pgaini.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pgaini.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pgain[i]);
      }
      *(outbuffer + offset++) = dgain_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < dgain_length; i++){
      union {
        float real;
        uint32_t base;
      } u_dgaini;
      u_dgaini.real = this->dgain[i];
      *(outbuffer + offset + 0) = (u_dgaini.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_dgaini.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_dgaini.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_dgaini.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->dgain[i]);
      }
      *(outbuffer + offset++) = igain_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < igain_length; i++){
      union {
        float real;
        uint32_t base;
      } u_igaini;
      u_igaini.real = this->igain[i];
      *(outbuffer + offset + 0) = (u_igaini.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_igaini.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_igaini.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_igaini.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->igain[i]);
      }
      *(outbuffer + offset++) = forceref_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < forceref_length; i++){
      union {
        float real;
        uint32_t base;
      } u_forcerefi;
      u_forcerefi.real = this->forceref[i];
      *(outbuffer + offset + 0) = (u_forcerefi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_forcerefi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_forcerefi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_forcerefi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->forceref[i]);
      }
      *(outbuffer + offset++) = ccforceref_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < ccforceref_length; i++){
      union {
        float real;
        uint32_t base;
      } u_ccforcerefi;
      u_ccforcerefi.real = this->ccforceref[i];
      *(outbuffer + offset + 0) = (u_ccforcerefi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ccforcerefi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ccforcerefi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ccforcerefi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ccforceref[i]);
      }
      *(outbuffer + offset++) = fcpgain_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < fcpgain_length; i++){
      union {
        float real;
        uint32_t base;
      } u_fcpgaini;
      u_fcpgaini.real = this->fcpgain[i];
      *(outbuffer + offset + 0) = (u_fcpgaini.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fcpgaini.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fcpgaini.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fcpgaini.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->fcpgain[i]);
      }
      *(outbuffer + offset++) = fcdgain_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < fcdgain_length; i++){
      union {
        float real;
        uint32_t base;
      } u_fcdgaini;
      u_fcdgaini.real = this->fcdgain[i];
      *(outbuffer + offset + 0) = (u_fcdgaini.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fcdgaini.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fcdgaini.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fcdgaini.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->fcdgain[i]);
      }
      *(outbuffer + offset++) = fcigain_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < fcigain_length; i++){
      union {
        float real;
        uint32_t base;
      } u_fcigaini;
      u_fcigaini.real = this->fcigain[i];
      *(outbuffer + offset + 0) = (u_fcigaini.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fcigaini.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fcigaini.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fcigaini.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->fcigain[i]);
      }
      *(outbuffer + offset++) = fccycle_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < fccycle_length; i++){
      union {
        float real;
        uint32_t base;
      } u_fccyclei;
      u_fccyclei.real = this->fccycle[i];
      *(outbuffer + offset + 0) = (u_fccyclei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fccyclei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fccyclei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fccyclei.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->fccycle[i]);
      }
      *(outbuffer + offset++) = fcthreshold_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < fcthreshold_length; i++){
      union {
        float real;
        uint32_t base;
      } u_fcthresholdi;
      u_fcthresholdi.real = this->fcthreshold[i];
      *(outbuffer + offset + 0) = (u_fcthresholdi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fcthresholdi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fcthresholdi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fcthresholdi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->fcthreshold[i]);
      }
      *(outbuffer + offset++) = flimit_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < flimit_length; i++){
      union {
        float real;
        uint32_t base;
      } u_flimiti;
      u_flimiti.real = this->flimit[i];
      *(outbuffer + offset + 0) = (u_flimiti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_flimiti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_flimiti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_flimiti.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->flimit[i]);
      }
      *(outbuffer + offset++) = accinertia_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < accinertia_length; i++){
      union {
        float real;
        uint32_t base;
      } u_accinertiai;
      u_accinertiai.real = this->accinertia[i];
      *(outbuffer + offset + 0) = (u_accinertiai.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_accinertiai.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_accinertiai.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_accinertiai.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->accinertia[i]);
      }
      *(outbuffer + offset++) = accfriction_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < accfriction_length; i++){
      union {
        float real;
        uint32_t base;
      } u_accfrictioni;
      u_accfrictioni.real = this->accfriction[i];
      *(outbuffer + offset + 0) = (u_accfrictioni.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_accfrictioni.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_accfrictioni.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_accfrictioni.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->accfriction[i]);
      }
      *(outbuffer + offset++) = acctension_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < acctension_length; i++){
      union {
        float real;
        uint32_t base;
      } u_acctensioni;
      u_acctensioni.real = this->acctension[i];
      *(outbuffer + offset + 0) = (u_acctensioni.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_acctensioni.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_acctensioni.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_acctensioni.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->acctension[i]);
      }
      *(outbuffer + offset++) = loadcelloffset_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < loadcelloffset_length; i++){
      union {
        float real;
        uint32_t base;
      } u_loadcelloffseti;
      u_loadcelloffseti.real = this->loadcelloffset[i];
      *(outbuffer + offset + 0) = (u_loadcelloffseti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_loadcelloffseti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_loadcelloffseti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_loadcelloffseti.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->loadcelloffset[i]);
      }
      *(outbuffer + offset++) = motorgearratio_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < motorgearratio_length; i++){
      union {
        float real;
        uint32_t base;
      } u_motorgearratioi;
      u_motorgearratioi.real = this->motorgearratio[i];
      *(outbuffer + offset + 0) = (u_motorgearratioi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motorgearratioi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motorgearratioi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motorgearratioi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motorgearratio[i]);
      }
      *(outbuffer + offset++) = motorwatt_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < motorwatt_length; i++){
      union {
        float real;
        uint32_t base;
      } u_motorwatti;
      u_motorwatti.real = this->motorwatt[i];
      *(outbuffer + offset + 0) = (u_motorwatti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motorwatti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motorwatti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motorwatti.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motorwatt[i]);
      }
      *(outbuffer + offset++) = springcoef_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < springcoef_length; i++){
      union {
        float real;
        uint32_t base;
      } u_springcoefi;
      u_springcoefi.real = this->springcoef[i];
      *(outbuffer + offset + 0) = (u_springcoefi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_springcoefi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_springcoefi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_springcoefi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->springcoef[i]);
      }
      *(outbuffer + offset++) = curlim_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < curlim_length; i++){
      union {
        float real;
        uint32_t base;
      } u_curlimi;
      u_curlimi.real = this->curlim[i];
      *(outbuffer + offset + 0) = (u_curlimi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_curlimi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_curlimi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_curlimi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->curlim[i]);
      }
      *(outbuffer + offset++) = controlmode_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < controlmode_length; i++){
      union {
        float real;
        uint32_t base;
      } u_controlmodei;
      u_controlmodei.real = this->controlmode[i];
      *(outbuffer + offset + 0) = (u_controlmodei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_controlmodei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_controlmodei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_controlmodei.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->controlmode[i]);
      }
      *(outbuffer + offset++) = worldpos_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < worldpos_length; i++){
      union {
        float real;
        uint32_t base;
      } u_worldposi;
      u_worldposi.real = this->worldpos[i];
      *(outbuffer + offset + 0) = (u_worldposi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_worldposi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_worldposi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_worldposi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->worldpos[i]);
      }
      *(outbuffer + offset++) = worldrot_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < worldrot_length; i++){
      union {
        float real;
        uint32_t base;
      } u_worldroti;
      u_worldroti.real = this->worldrot[i];
      *(outbuffer + offset + 0) = (u_worldroti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_worldroti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_worldroti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_worldroti.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->worldrot[i]);
      }
      *(outbuffer + offset++) = centroid_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < centroid_length; i++){
      union {
        float real;
        uint32_t base;
      } u_centroidi;
      u_centroidi.real = this->centroid[i];
      *(outbuffer + offset + 0) = (u_centroidi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_centroidi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_centroidi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_centroidi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->centroid[i]);
      }
      *(outbuffer + offset++) = objectpos_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < objectpos_length; i++){
      union {
        float real;
        uint32_t base;
      } u_objectposi;
      u_objectposi.real = this->objectpos[i];
      *(outbuffer + offset + 0) = (u_objectposi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_objectposi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_objectposi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_objectposi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->objectpos[i]);
      }
      *(outbuffer + offset++) = objectrot_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < objectrot_length; i++){
      union {
        float real;
        uint32_t base;
      } u_objectroti;
      u_objectroti.real = this->objectrot[i];
      *(outbuffer + offset + 0) = (u_objectroti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_objectroti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_objectroti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_objectroti.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->objectrot[i]);
      }
      *(outbuffer + offset++) = objectjoint_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < objectjoint_length; i++){
      union {
        float real;
        uint32_t base;
      } u_objectjointi;
      u_objectjointi.real = this->objectjoint[i];
      *(outbuffer + offset + 0) = (u_objectjointi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_objectjointi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_objectjointi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_objectjointi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->objectjoint[i]);
      }
      *(outbuffer + offset++) = torque_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < torque_length; i++){
      union {
        float real;
        uint32_t base;
      } u_torquei;
      u_torquei.real = this->torque[i];
      *(outbuffer + offset + 0) = (u_torquei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_torquei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_torquei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_torquei.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->torque[i]);
      }
      *(outbuffer + offset++) = color_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < color_length; i++){
      union {
        float real;
        uint32_t base;
      } u_colori;
      u_colori.real = this->color[i];
      *(outbuffer + offset + 0) = (u_colori.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_colori.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_colori.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_colori.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->color[i]);
      }
      *(outbuffer + offset++) = stereo_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < stereo_length; i++){
      union {
        float real;
        uint32_t base;
      } u_stereoi;
      u_stereoi.real = this->stereo[i];
      *(outbuffer + offset + 0) = (u_stereoi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_stereoi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_stereoi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_stereoi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->stereo[i]);
      }
      *(outbuffer + offset++) = stereolabel_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < stereolabel_length; i++){
      union {
        float real;
        uint32_t base;
      } u_stereolabeli;
      u_stereolabeli.real = this->stereolabel[i];
      *(outbuffer + offset + 0) = (u_stereolabeli.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_stereolabeli.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_stereolabeli.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_stereolabeli.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->stereolabel[i]);
      }
      *(outbuffer + offset++) = psf_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < psf_length; i++){
      union {
        float real;
        uint32_t base;
      } u_psfi;
      u_psfi.real = this->psf[i];
      *(outbuffer + offset + 0) = (u_psfi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_psfi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_psfi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_psfi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->psf[i]);
      }
      *(outbuffer + offset++) = face_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < face_length; i++){
      union {
        float real;
        uint32_t base;
      } u_facei;
      u_facei.real = this->face[i];
      *(outbuffer + offset + 0) = (u_facei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_facei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_facei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_facei.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->face[i]);
      }
      *(outbuffer + offset++) = mep_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < mep_length; i++){
      union {
        float real;
        uint32_t base;
      } u_mepi;
      u_mepi.real = this->mep[i];
      *(outbuffer + offset + 0) = (u_mepi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_mepi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_mepi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_mepi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->mep[i]);
      }
      *(outbuffer + offset++) = flow_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < flow_length; i++){
      union {
        float real;
        uint32_t base;
      } u_flowi;
      u_flowi.real = this->flow[i];
      *(outbuffer + offset + 0) = (u_flowi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_flowi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_flowi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_flowi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->flow[i]);
      }
      *(outbuffer + offset++) = stereomep_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < stereomep_length; i++){
      union {
        float real;
        uint32_t base;
      } u_stereomepi;
      u_stereomepi.real = this->stereomep[i];
      *(outbuffer + offset + 0) = (u_stereomepi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_stereomepi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_stereomepi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_stereomepi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->stereomep[i]);
      }
      *(outbuffer + offset++) = objectinfo_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < objectinfo_length; i++){
      union {
        float real;
        uint32_t base;
      } u_objectinfoi;
      u_objectinfoi.real = this->objectinfo[i];
      *(outbuffer + offset + 0) = (u_objectinfoi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_objectinfoi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_objectinfoi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_objectinfoi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->objectinfo[i]);
      }
      union {
        float real;
        uint32_t base;
      } u_jsimtime;
      u_jsimtime.real = this->jsimtime;
      *(outbuffer + offset + 0) = (u_jsimtime.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_jsimtime.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_jsimtime.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_jsimtime.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->jsimtime);
      *(outbuffer + offset++) = jsimpgain_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < jsimpgain_length; i++){
      union {
        float real;
        uint32_t base;
      } u_jsimpgaini;
      u_jsimpgaini.real = this->jsimpgain[i];
      *(outbuffer + offset + 0) = (u_jsimpgaini.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_jsimpgaini.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_jsimpgaini.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_jsimpgaini.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->jsimpgain[i]);
      }
      *(outbuffer + offset++) = jsimpower_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < jsimpower_length; i++){
      union {
        float real;
        uint32_t base;
      } u_jsimpoweri;
      u_jsimpoweri.real = this->jsimpower[i];
      *(outbuffer + offset + 0) = (u_jsimpoweri.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_jsimpoweri.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_jsimpoweri.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_jsimpoweri.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->jsimpower[i]);
      }
      *(outbuffer + offset++) = slider_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < slider_length; i++){
      union {
        float real;
        uint32_t base;
      } u_slideri;
      u_slideri.real = this->slider[i];
      *(outbuffer + offset + 0) = (u_slideri.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_slideri.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_slideri.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_slideri.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->slider[i]);
      }
      union {
        float real;
        uint32_t base;
      } u_nscycltime;
      u_nscycltime.real = this->nscycltime;
      *(outbuffer + offset + 0) = (u_nscycltime.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_nscycltime.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_nscycltime.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_nscycltime.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->nscycltime);
      union {
        float real;
        uint32_t base;
      } u_nsproctime;
      u_nsproctime.real = this->nsproctime;
      *(outbuffer + offset + 0) = (u_nsproctime.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_nsproctime.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_nsproctime.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_nsproctime.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->nsproctime);
      uint32_t length_extradata = strlen(this->extradata);
      memcpy(outbuffer + offset, &length_extradata, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->extradata, length_extradata);
      offset += length_extradata;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint8_t reference_lengthT = *(inbuffer + offset++);
      if(reference_lengthT > reference_length)
        this->reference = (float*)realloc(this->reference, reference_lengthT * sizeof(float));
      offset += 3;
      reference_length = reference_lengthT;
      for( uint8_t i = 0; i < reference_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_reference;
      u_st_reference.base = 0;
      u_st_reference.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_reference.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_reference.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_reference.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_reference = u_st_reference.real;
      offset += sizeof(this->st_reference);
        memcpy( &(this->reference[i]), &(this->st_reference), sizeof(float));
      }
      uint8_t potentio_lengthT = *(inbuffer + offset++);
      if(potentio_lengthT > potentio_length)
        this->potentio = (float*)realloc(this->potentio, potentio_lengthT * sizeof(float));
      offset += 3;
      potentio_length = potentio_lengthT;
      for( uint8_t i = 0; i < potentio_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_potentio;
      u_st_potentio.base = 0;
      u_st_potentio.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_potentio.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_potentio.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_potentio.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_potentio = u_st_potentio.real;
      offset += sizeof(this->st_potentio);
        memcpy( &(this->potentio[i]), &(this->st_potentio), sizeof(float));
      }
      uint8_t error_lengthT = *(inbuffer + offset++);
      if(error_lengthT > error_length)
        this->error = (float*)realloc(this->error, error_lengthT * sizeof(float));
      offset += 3;
      error_length = error_lengthT;
      for( uint8_t i = 0; i < error_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_error;
      u_st_error.base = 0;
      u_st_error.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_error.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_error.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_error.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_error = u_st_error.real;
      offset += sizeof(this->st_error);
        memcpy( &(this->error[i]), &(this->st_error), sizeof(float));
      }
      uint8_t sense_lengthT = *(inbuffer + offset++);
      if(sense_lengthT > sense_length)
        this->sense = (float*)realloc(this->sense, sense_lengthT * sizeof(float));
      offset += 3;
      sense_length = sense_lengthT;
      for( uint8_t i = 0; i < sense_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_sense;
      u_st_sense.base = 0;
      u_st_sense.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_sense.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_sense.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_sense.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_sense = u_st_sense.real;
      offset += sizeof(this->st_sense);
        memcpy( &(this->sense[i]), &(this->st_sense), sizeof(float));
      }
      uint8_t fsr_lengthT = *(inbuffer + offset++);
      if(fsr_lengthT > fsr_length)
        this->fsr = (float*)realloc(this->fsr, fsr_lengthT * sizeof(float));
      offset += 3;
      fsr_length = fsr_lengthT;
      for( uint8_t i = 0; i < fsr_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_fsr;
      u_st_fsr.base = 0;
      u_st_fsr.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_fsr.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_fsr.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_fsr.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_fsr = u_st_fsr.real;
      offset += sizeof(this->st_fsr);
        memcpy( &(this->fsr[i]), &(this->st_fsr), sizeof(float));
      }
      uint8_t thermo_lengthT = *(inbuffer + offset++);
      if(thermo_lengthT > thermo_length)
        this->thermo = (float*)realloc(this->thermo, thermo_lengthT * sizeof(float));
      offset += 3;
      thermo_length = thermo_lengthT;
      for( uint8_t i = 0; i < thermo_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_thermo;
      u_st_thermo.base = 0;
      u_st_thermo.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_thermo.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_thermo.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_thermo.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_thermo = u_st_thermo.real;
      offset += sizeof(this->st_thermo);
        memcpy( &(this->thermo[i]), &(this->st_thermo), sizeof(float));
      }
      uint8_t qjoint_lengthT = *(inbuffer + offset++);
      if(qjoint_lengthT > qjoint_length)
        this->qjoint = (float*)realloc(this->qjoint, qjoint_lengthT * sizeof(float));
      offset += 3;
      qjoint_length = qjoint_lengthT;
      for( uint8_t i = 0; i < qjoint_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_qjoint;
      u_st_qjoint.base = 0;
      u_st_qjoint.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_qjoint.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_qjoint.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_qjoint.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_qjoint = u_st_qjoint.real;
      offset += sizeof(this->st_qjoint);
        memcpy( &(this->qjoint[i]), &(this->st_qjoint), sizeof(float));
      }
      uint8_t qjointinfo_lengthT = *(inbuffer + offset++);
      if(qjointinfo_lengthT > qjointinfo_length)
        this->qjointinfo = (float*)realloc(this->qjointinfo, qjointinfo_lengthT * sizeof(float));
      offset += 3;
      qjointinfo_length = qjointinfo_lengthT;
      for( uint8_t i = 0; i < qjointinfo_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_qjointinfo;
      u_st_qjointinfo.base = 0;
      u_st_qjointinfo.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_qjointinfo.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_qjointinfo.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_qjointinfo.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_qjointinfo = u_st_qjointinfo.real;
      offset += sizeof(this->st_qjointinfo);
        memcpy( &(this->qjointinfo[i]), &(this->st_qjointinfo), sizeof(float));
      }
      uint8_t jointangle_lengthT = *(inbuffer + offset++);
      if(jointangle_lengthT > jointangle_length)
        this->jointangle = (float*)realloc(this->jointangle, jointangle_lengthT * sizeof(float));
      offset += 3;
      jointangle_length = jointangle_lengthT;
      for( uint8_t i = 0; i < jointangle_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_jointangle;
      u_st_jointangle.base = 0;
      u_st_jointangle.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_jointangle.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_jointangle.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_jointangle.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_jointangle = u_st_jointangle.real;
      offset += sizeof(this->st_jointangle);
        memcpy( &(this->jointangle[i]), &(this->st_jointangle), sizeof(float));
      }
      uint8_t opft_lengthT = *(inbuffer + offset++);
      if(opft_lengthT > opft_length)
        this->opft = (float*)realloc(this->opft, opft_lengthT * sizeof(float));
      offset += 3;
      opft_length = opft_lengthT;
      for( uint8_t i = 0; i < opft_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_opft;
      u_st_opft.base = 0;
      u_st_opft.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_opft.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_opft.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_opft.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_opft = u_st_opft.real;
      offset += sizeof(this->st_opft);
        memcpy( &(this->opft[i]), &(this->st_opft), sizeof(float));
      }
      uint8_t h815dvin_lengthT = *(inbuffer + offset++);
      if(h815dvin_lengthT > h815dvin_length)
        this->h815dvin = (float*)realloc(this->h815dvin, h815dvin_lengthT * sizeof(float));
      offset += 3;
      h815dvin_length = h815dvin_lengthT;
      for( uint8_t i = 0; i < h815dvin_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_h815dvin;
      u_st_h815dvin.base = 0;
      u_st_h815dvin.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_h815dvin.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_h815dvin.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_h815dvin.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_h815dvin = u_st_h815dvin.real;
      offset += sizeof(this->st_h815dvin);
        memcpy( &(this->h815dvin[i]), &(this->st_h815dvin), sizeof(float));
      }
      uint8_t h815motorthermo_lengthT = *(inbuffer + offset++);
      if(h815motorthermo_lengthT > h815motorthermo_length)
        this->h815motorthermo = (float*)realloc(this->h815motorthermo, h815motorthermo_lengthT * sizeof(float));
      offset += 3;
      h815motorthermo_length = h815motorthermo_lengthT;
      for( uint8_t i = 0; i < h815motorthermo_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_h815motorthermo;
      u_st_h815motorthermo.base = 0;
      u_st_h815motorthermo.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_h815motorthermo.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_h815motorthermo.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_h815motorthermo.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_h815motorthermo = u_st_h815motorthermo.real;
      offset += sizeof(this->st_h815motorthermo);
        memcpy( &(this->h815motorthermo[i]), &(this->st_h815motorthermo), sizeof(float));
      }
      uint8_t h815output_lengthT = *(inbuffer + offset++);
      if(h815output_lengthT > h815output_length)
        this->h815output = (float*)realloc(this->h815output, h815output_lengthT * sizeof(float));
      offset += 3;
      h815output_length = h815output_lengthT;
      for( uint8_t i = 0; i < h815output_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_h815output;
      u_st_h815output.base = 0;
      u_st_h815output.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_h815output.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_h815output.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_h815output.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_h815output = u_st_h815output.real;
      offset += sizeof(this->st_h815output);
        memcpy( &(this->h815output[i]), &(this->st_h815output), sizeof(float));
      }
      uint8_t h815maxpwm_lengthT = *(inbuffer + offset++);
      if(h815maxpwm_lengthT > h815maxpwm_length)
        this->h815maxpwm = (float*)realloc(this->h815maxpwm, h815maxpwm_lengthT * sizeof(float));
      offset += 3;
      h815maxpwm_length = h815maxpwm_lengthT;
      for( uint8_t i = 0; i < h815maxpwm_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_h815maxpwm;
      u_st_h815maxpwm.base = 0;
      u_st_h815maxpwm.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_h815maxpwm.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_h815maxpwm.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_h815maxpwm.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_h815maxpwm = u_st_h815maxpwm.real;
      offset += sizeof(this->st_h815maxpwm);
        memcpy( &(this->h815maxpwm[i]), &(this->st_h815maxpwm), sizeof(float));
      }
      uint8_t h815status_lengthT = *(inbuffer + offset++);
      if(h815status_lengthT > h815status_length)
        this->h815status = (float*)realloc(this->h815status, h815status_lengthT * sizeof(float));
      offset += 3;
      h815status_length = h815status_lengthT;
      for( uint8_t i = 0; i < h815status_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_h815status;
      u_st_h815status.base = 0;
      u_st_h815status.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_h815status.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_h815status.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_h815status.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_h815status = u_st_h815status.real;
      offset += sizeof(this->st_h815status);
        memcpy( &(this->h815status[i]), &(this->st_h815status), sizeof(float));
      }
      uint8_t h815thermo_lengthT = *(inbuffer + offset++);
      if(h815thermo_lengthT > h815thermo_length)
        this->h815thermo = (float*)realloc(this->h815thermo, h815thermo_lengthT * sizeof(float));
      offset += 3;
      h815thermo_length = h815thermo_lengthT;
      for( uint8_t i = 0; i < h815thermo_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_h815thermo;
      u_st_h815thermo.base = 0;
      u_st_h815thermo.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_h815thermo.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_h815thermo.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_h815thermo.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_h815thermo = u_st_h815thermo.real;
      offset += sizeof(this->st_h815thermo);
        memcpy( &(this->h815thermo[i]), &(this->st_h815thermo), sizeof(float));
      }
      uint8_t h815cycletime_lengthT = *(inbuffer + offset++);
      if(h815cycletime_lengthT > h815cycletime_length)
        this->h815cycletime = (float*)realloc(this->h815cycletime, h815cycletime_lengthT * sizeof(float));
      offset += 3;
      h815cycletime_length = h815cycletime_lengthT;
      for( uint8_t i = 0; i < h815cycletime_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_h815cycletime;
      u_st_h815cycletime.base = 0;
      u_st_h815cycletime.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_h815cycletime.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_h815cycletime.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_h815cycletime.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_h815cycletime = u_st_h815cycletime.real;
      offset += sizeof(this->st_h815cycletime);
        memcpy( &(this->h815cycletime[i]), &(this->st_h815cycletime), sizeof(float));
      }
      uint8_t h815rpm_lengthT = *(inbuffer + offset++);
      if(h815rpm_lengthT > h815rpm_length)
        this->h815rpm = (float*)realloc(this->h815rpm, h815rpm_lengthT * sizeof(float));
      offset += 3;
      h815rpm_length = h815rpm_lengthT;
      for( uint8_t i = 0; i < h815rpm_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_h815rpm;
      u_st_h815rpm.base = 0;
      u_st_h815rpm.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_h815rpm.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_h815rpm.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_h815rpm.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_h815rpm = u_st_h815rpm.real;
      offset += sizeof(this->st_h815rpm);
        memcpy( &(this->h815rpm[i]), &(this->st_h815rpm), sizeof(float));
      }
      uint8_t h815motorstatus_lengthT = *(inbuffer + offset++);
      if(h815motorstatus_lengthT > h815motorstatus_length)
        this->h815motorstatus = (float*)realloc(this->h815motorstatus, h815motorstatus_lengthT * sizeof(float));
      offset += 3;
      h815motorstatus_length = h815motorstatus_lengthT;
      for( uint8_t i = 0; i < h815motorstatus_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_h815motorstatus;
      u_st_h815motorstatus.base = 0;
      u_st_h815motorstatus.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_h815motorstatus.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_h815motorstatus.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_h815motorstatus.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_h815motorstatus = u_st_h815motorstatus.real;
      offset += sizeof(this->st_h815motorstatus);
        memcpy( &(this->h815motorstatus[i]), &(this->st_h815motorstatus), sizeof(float));
      }
      uint8_t h815encoder_lengthT = *(inbuffer + offset++);
      if(h815encoder_lengthT > h815encoder_length)
        this->h815encoder = (float*)realloc(this->h815encoder, h815encoder_lengthT * sizeof(float));
      offset += 3;
      h815encoder_length = h815encoder_lengthT;
      for( uint8_t i = 0; i < h815encoder_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_h815encoder;
      u_st_h815encoder.base = 0;
      u_st_h815encoder.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_h815encoder.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_h815encoder.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_h815encoder.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_h815encoder = u_st_h815encoder.real;
      offset += sizeof(this->st_h815encoder);
        memcpy( &(this->h815encoder[i]), &(this->st_h815encoder), sizeof(float));
      }
      uint8_t fpgatimeoutcounter_lengthT = *(inbuffer + offset++);
      if(fpgatimeoutcounter_lengthT > fpgatimeoutcounter_length)
        this->fpgatimeoutcounter = (float*)realloc(this->fpgatimeoutcounter, fpgatimeoutcounter_lengthT * sizeof(float));
      offset += 3;
      fpgatimeoutcounter_length = fpgatimeoutcounter_lengthT;
      for( uint8_t i = 0; i < fpgatimeoutcounter_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_fpgatimeoutcounter;
      u_st_fpgatimeoutcounter.base = 0;
      u_st_fpgatimeoutcounter.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_fpgatimeoutcounter.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_fpgatimeoutcounter.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_fpgatimeoutcounter.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_fpgatimeoutcounter = u_st_fpgatimeoutcounter.real;
      offset += sizeof(this->st_fpgatimeoutcounter);
        memcpy( &(this->fpgatimeoutcounter[i]), &(this->st_fpgatimeoutcounter), sizeof(float));
      }
      uint8_t fpgatimeout_lengthT = *(inbuffer + offset++);
      if(fpgatimeout_lengthT > fpgatimeout_length)
        this->fpgatimeout = (float*)realloc(this->fpgatimeout, fpgatimeout_lengthT * sizeof(float));
      offset += 3;
      fpgatimeout_length = fpgatimeout_lengthT;
      for( uint8_t i = 0; i < fpgatimeout_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_fpgatimeout;
      u_st_fpgatimeout.base = 0;
      u_st_fpgatimeout.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_fpgatimeout.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_fpgatimeout.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_fpgatimeout.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_fpgatimeout = u_st_fpgatimeout.real;
      offset += sizeof(this->st_fpgatimeout);
        memcpy( &(this->fpgatimeout[i]), &(this->st_fpgatimeout), sizeof(float));
      }
      uint8_t fpgavin_lengthT = *(inbuffer + offset++);
      if(fpgavin_lengthT > fpgavin_length)
        this->fpgavin = (float*)realloc(this->fpgavin, fpgavin_lengthT * sizeof(float));
      offset += 3;
      fpgavin_length = fpgavin_lengthT;
      for( uint8_t i = 0; i < fpgavin_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_fpgavin;
      u_st_fpgavin.base = 0;
      u_st_fpgavin.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_fpgavin.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_fpgavin.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_fpgavin.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_fpgavin = u_st_fpgavin.real;
      offset += sizeof(this->st_fpgavin);
        memcpy( &(this->fpgavin[i]), &(this->st_fpgavin), sizeof(float));
      }
      uint8_t fpgam10v_lengthT = *(inbuffer + offset++);
      if(fpgam10v_lengthT > fpgam10v_length)
        this->fpgam10v = (float*)realloc(this->fpgam10v, fpgam10v_lengthT * sizeof(float));
      offset += 3;
      fpgam10v_length = fpgam10v_lengthT;
      for( uint8_t i = 0; i < fpgam10v_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_fpgam10v;
      u_st_fpgam10v.base = 0;
      u_st_fpgam10v.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_fpgam10v.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_fpgam10v.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_fpgam10v.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_fpgam10v = u_st_fpgam10v.real;
      offset += sizeof(this->st_fpgam10v);
        memcpy( &(this->fpgam10v[i]), &(this->st_fpgam10v), sizeof(float));
      }
      uint8_t fpgas5v_lengthT = *(inbuffer + offset++);
      if(fpgas5v_lengthT > fpgas5v_length)
        this->fpgas5v = (float*)realloc(this->fpgas5v, fpgas5v_lengthT * sizeof(float));
      offset += 3;
      fpgas5v_length = fpgas5v_lengthT;
      for( uint8_t i = 0; i < fpgas5v_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_fpgas5v;
      u_st_fpgas5v.base = 0;
      u_st_fpgas5v.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_fpgas5v.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_fpgas5v.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_fpgas5v.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_fpgas5v = u_st_fpgas5v.real;
      offset += sizeof(this->st_fpgas5v);
        memcpy( &(this->fpgas5v[i]), &(this->st_fpgas5v), sizeof(float));
      }
      uint8_t maxpos_lengthT = *(inbuffer + offset++);
      if(maxpos_lengthT > maxpos_length)
        this->maxpos = (float*)realloc(this->maxpos, maxpos_lengthT * sizeof(float));
      offset += 3;
      maxpos_length = maxpos_lengthT;
      for( uint8_t i = 0; i < maxpos_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_maxpos;
      u_st_maxpos.base = 0;
      u_st_maxpos.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_maxpos.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_maxpos.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_maxpos.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_maxpos = u_st_maxpos.real;
      offset += sizeof(this->st_maxpos);
        memcpy( &(this->maxpos[i]), &(this->st_maxpos), sizeof(float));
      }
      uint8_t minpos_lengthT = *(inbuffer + offset++);
      if(minpos_lengthT > minpos_length)
        this->minpos = (float*)realloc(this->minpos, minpos_lengthT * sizeof(float));
      offset += 3;
      minpos_length = minpos_lengthT;
      for( uint8_t i = 0; i < minpos_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_minpos;
      u_st_minpos.base = 0;
      u_st_minpos.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_minpos.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_minpos.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_minpos.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_minpos = u_st_minpos.real;
      offset += sizeof(this->st_minpos);
        memcpy( &(this->minpos[i]), &(this->st_minpos), sizeof(float));
      }
      uint8_t limitpos_lengthT = *(inbuffer + offset++);
      if(limitpos_lengthT > limitpos_length)
        this->limitpos = (float*)realloc(this->limitpos, limitpos_lengthT * sizeof(float));
      offset += 3;
      limitpos_length = limitpos_lengthT;
      for( uint8_t i = 0; i < limitpos_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_limitpos;
      u_st_limitpos.base = 0;
      u_st_limitpos.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_limitpos.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_limitpos.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_limitpos.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_limitpos = u_st_limitpos.real;
      offset += sizeof(this->st_limitpos);
        memcpy( &(this->limitpos[i]), &(this->st_limitpos), sizeof(float));
      }
      uint8_t controlstatus_lengthT = *(inbuffer + offset++);
      if(controlstatus_lengthT > controlstatus_length)
        this->controlstatus = (float*)realloc(this->controlstatus, controlstatus_lengthT * sizeof(float));
      offset += 3;
      controlstatus_length = controlstatus_lengthT;
      for( uint8_t i = 0; i < controlstatus_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_controlstatus;
      u_st_controlstatus.base = 0;
      u_st_controlstatus.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_controlstatus.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_controlstatus.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_controlstatus.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_controlstatus = u_st_controlstatus.real;
      offset += sizeof(this->st_controlstatus);
        memcpy( &(this->controlstatus[i]), &(this->st_controlstatus), sizeof(float));
      }
      uint8_t fixmode_lengthT = *(inbuffer + offset++);
      if(fixmode_lengthT > fixmode_length)
        this->fixmode = (float*)realloc(this->fixmode, fixmode_lengthT * sizeof(float));
      offset += 3;
      fixmode_length = fixmode_lengthT;
      for( uint8_t i = 0; i < fixmode_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_fixmode;
      u_st_fixmode.base = 0;
      u_st_fixmode.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_fixmode.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_fixmode.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_fixmode.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_fixmode = u_st_fixmode.real;
      offset += sizeof(this->st_fixmode);
        memcpy( &(this->fixmode[i]), &(this->st_fixmode), sizeof(float));
      }
      uint8_t connectp_lengthT = *(inbuffer + offset++);
      if(connectp_lengthT > connectp_length)
        this->connectp = (float*)realloc(this->connectp, connectp_lengthT * sizeof(float));
      offset += 3;
      connectp_length = connectp_lengthT;
      for( uint8_t i = 0; i < connectp_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_connectp;
      u_st_connectp.base = 0;
      u_st_connectp.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_connectp.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_connectp.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_connectp.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_connectp = u_st_connectp.real;
      offset += sizeof(this->st_connectp);
        memcpy( &(this->connectp[i]), &(this->st_connectp), sizeof(float));
      }
      uint8_t tension_lengthT = *(inbuffer + offset++);
      if(tension_lengthT > tension_length)
        this->tension = (float*)realloc(this->tension, tension_lengthT * sizeof(float));
      offset += 3;
      tension_length = tension_lengthT;
      for( uint8_t i = 0; i < tension_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_tension;
      u_st_tension.base = 0;
      u_st_tension.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_tension.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_tension.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_tension.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_tension = u_st_tension.real;
      offset += sizeof(this->st_tension);
        memcpy( &(this->tension[i]), &(this->st_tension), sizeof(float));
      }
      uint8_t adxl_lengthT = *(inbuffer + offset++);
      if(adxl_lengthT > adxl_length)
        this->adxl = (float*)realloc(this->adxl, adxl_lengthT * sizeof(float));
      offset += 3;
      adxl_length = adxl_lengthT;
      for( uint8_t i = 0; i < adxl_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_adxl;
      u_st_adxl.base = 0;
      u_st_adxl.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_adxl.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_adxl.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_adxl.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_adxl = u_st_adxl.real;
      offset += sizeof(this->st_adxl);
        memcpy( &(this->adxl[i]), &(this->st_adxl), sizeof(float));
      }
      uint8_t suit_lengthT = *(inbuffer + offset++);
      if(suit_lengthT > suit_length)
        this->suit = (float*)realloc(this->suit, suit_lengthT * sizeof(float));
      offset += 3;
      suit_length = suit_lengthT;
      for( uint8_t i = 0; i < suit_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_suit;
      u_st_suit.base = 0;
      u_st_suit.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_suit.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_suit.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_suit.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_suit = u_st_suit.real;
      offset += sizeof(this->st_suit);
        memcpy( &(this->suit[i]), &(this->st_suit), sizeof(float));
      }
      uint8_t gyro_lengthT = *(inbuffer + offset++);
      if(gyro_lengthT > gyro_length)
        this->gyro = (float*)realloc(this->gyro, gyro_lengthT * sizeof(float));
      offset += 3;
      gyro_length = gyro_lengthT;
      for( uint8_t i = 0; i < gyro_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_gyro;
      u_st_gyro.base = 0;
      u_st_gyro.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_gyro.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_gyro.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_gyro.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_gyro = u_st_gyro.real;
      offset += sizeof(this->st_gyro);
        memcpy( &(this->gyro[i]), &(this->st_gyro), sizeof(float));
      }
      uint8_t posture_lengthT = *(inbuffer + offset++);
      if(posture_lengthT > posture_length)
        this->posture = (float*)realloc(this->posture, posture_lengthT * sizeof(float));
      offset += 3;
      posture_length = posture_lengthT;
      for( uint8_t i = 0; i < posture_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_posture;
      u_st_posture.base = 0;
      u_st_posture.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_posture.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_posture.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_posture.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_posture = u_st_posture.real;
      offset += sizeof(this->st_posture);
        memcpy( &(this->posture[i]), &(this->st_posture), sizeof(float));
      }
      uint8_t euler_lengthT = *(inbuffer + offset++);
      if(euler_lengthT > euler_length)
        this->euler = (float*)realloc(this->euler, euler_lengthT * sizeof(float));
      offset += 3;
      euler_length = euler_lengthT;
      for( uint8_t i = 0; i < euler_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_euler;
      u_st_euler.base = 0;
      u_st_euler.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_euler.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_euler.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_euler.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_euler = u_st_euler.real;
      offset += sizeof(this->st_euler);
        memcpy( &(this->euler[i]), &(this->st_euler), sizeof(float));
      }
      uint8_t magne_lengthT = *(inbuffer + offset++);
      if(magne_lengthT > magne_length)
        this->magne = (float*)realloc(this->magne, magne_lengthT * sizeof(float));
      offset += 3;
      magne_length = magne_lengthT;
      for( uint8_t i = 0; i < magne_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_magne;
      u_st_magne.base = 0;
      u_st_magne.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_magne.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_magne.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_magne.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_magne = u_st_magne.real;
      offset += sizeof(this->st_magne);
        memcpy( &(this->magne[i]), &(this->st_magne), sizeof(float));
      }
      uint8_t rencoder_lengthT = *(inbuffer + offset++);
      if(rencoder_lengthT > rencoder_length)
        this->rencoder = (float*)realloc(this->rencoder, rencoder_lengthT * sizeof(float));
      offset += 3;
      rencoder_length = rencoder_lengthT;
      for( uint8_t i = 0; i < rencoder_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_rencoder;
      u_st_rencoder.base = 0;
      u_st_rencoder.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_rencoder.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_rencoder.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_rencoder.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_rencoder = u_st_rencoder.real;
      offset += sizeof(this->st_rencoder);
        memcpy( &(this->rencoder[i]), &(this->st_rencoder), sizeof(float));
      }
      uint8_t zmp_lengthT = *(inbuffer + offset++);
      if(zmp_lengthT > zmp_length)
        this->zmp = (float*)realloc(this->zmp, zmp_lengthT * sizeof(float));
      offset += 3;
      zmp_length = zmp_lengthT;
      for( uint8_t i = 0; i < zmp_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_zmp;
      u_st_zmp.base = 0;
      u_st_zmp.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_zmp.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_zmp.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_zmp.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_zmp = u_st_zmp.real;
      offset += sizeof(this->st_zmp);
        memcpy( &(this->zmp[i]), &(this->st_zmp), sizeof(float));
      }
      uint8_t weight_lengthT = *(inbuffer + offset++);
      if(weight_lengthT > weight_length)
        this->weight = (float*)realloc(this->weight, weight_lengthT * sizeof(float));
      offset += 3;
      weight_length = weight_lengthT;
      for( uint8_t i = 0; i < weight_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_weight;
      u_st_weight.base = 0;
      u_st_weight.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_weight.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_weight.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_weight.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_weight = u_st_weight.real;
      offset += sizeof(this->st_weight);
        memcpy( &(this->weight[i]), &(this->st_weight), sizeof(float));
      }
      uint8_t tactiles_lengthT = *(inbuffer + offset++);
      if(tactiles_lengthT > tactiles_length)
        this->tactiles = (float*)realloc(this->tactiles, tactiles_lengthT * sizeof(float));
      offset += 3;
      tactiles_length = tactiles_lengthT;
      for( uint8_t i = 0; i < tactiles_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_tactiles;
      u_st_tactiles.base = 0;
      u_st_tactiles.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_tactiles.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_tactiles.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_tactiles.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_tactiles = u_st_tactiles.real;
      offset += sizeof(this->st_tactiles);
        memcpy( &(this->tactiles[i]), &(this->st_tactiles), sizeof(float));
      }
      uint8_t usonic_lengthT = *(inbuffer + offset++);
      if(usonic_lengthT > usonic_length)
        this->usonic = (float*)realloc(this->usonic, usonic_lengthT * sizeof(float));
      offset += 3;
      usonic_length = usonic_lengthT;
      for( uint8_t i = 0; i < usonic_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_usonic;
      u_st_usonic.base = 0;
      u_st_usonic.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_usonic.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_usonic.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_usonic.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_usonic = u_st_usonic.real;
      offset += sizeof(this->st_usonic);
        memcpy( &(this->usonic[i]), &(this->st_usonic), sizeof(float));
      }
      uint8_t forceplate_lengthT = *(inbuffer + offset++);
      if(forceplate_lengthT > forceplate_length)
        this->forceplate = (float*)realloc(this->forceplate, forceplate_lengthT * sizeof(float));
      offset += 3;
      forceplate_length = forceplate_lengthT;
      for( uint8_t i = 0; i < forceplate_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_forceplate;
      u_st_forceplate.base = 0;
      u_st_forceplate.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_forceplate.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_forceplate.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_forceplate.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_forceplate = u_st_forceplate.real;
      offset += sizeof(this->st_forceplate);
        memcpy( &(this->forceplate[i]), &(this->st_forceplate), sizeof(float));
      }
      uint8_t pgain_lengthT = *(inbuffer + offset++);
      if(pgain_lengthT > pgain_length)
        this->pgain = (float*)realloc(this->pgain, pgain_lengthT * sizeof(float));
      offset += 3;
      pgain_length = pgain_lengthT;
      for( uint8_t i = 0; i < pgain_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_pgain;
      u_st_pgain.base = 0;
      u_st_pgain.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pgain.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pgain.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pgain.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_pgain = u_st_pgain.real;
      offset += sizeof(this->st_pgain);
        memcpy( &(this->pgain[i]), &(this->st_pgain), sizeof(float));
      }
      uint8_t dgain_lengthT = *(inbuffer + offset++);
      if(dgain_lengthT > dgain_length)
        this->dgain = (float*)realloc(this->dgain, dgain_lengthT * sizeof(float));
      offset += 3;
      dgain_length = dgain_lengthT;
      for( uint8_t i = 0; i < dgain_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_dgain;
      u_st_dgain.base = 0;
      u_st_dgain.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_dgain.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_dgain.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_dgain.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_dgain = u_st_dgain.real;
      offset += sizeof(this->st_dgain);
        memcpy( &(this->dgain[i]), &(this->st_dgain), sizeof(float));
      }
      uint8_t igain_lengthT = *(inbuffer + offset++);
      if(igain_lengthT > igain_length)
        this->igain = (float*)realloc(this->igain, igain_lengthT * sizeof(float));
      offset += 3;
      igain_length = igain_lengthT;
      for( uint8_t i = 0; i < igain_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_igain;
      u_st_igain.base = 0;
      u_st_igain.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_igain.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_igain.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_igain.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_igain = u_st_igain.real;
      offset += sizeof(this->st_igain);
        memcpy( &(this->igain[i]), &(this->st_igain), sizeof(float));
      }
      uint8_t forceref_lengthT = *(inbuffer + offset++);
      if(forceref_lengthT > forceref_length)
        this->forceref = (float*)realloc(this->forceref, forceref_lengthT * sizeof(float));
      offset += 3;
      forceref_length = forceref_lengthT;
      for( uint8_t i = 0; i < forceref_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_forceref;
      u_st_forceref.base = 0;
      u_st_forceref.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_forceref.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_forceref.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_forceref.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_forceref = u_st_forceref.real;
      offset += sizeof(this->st_forceref);
        memcpy( &(this->forceref[i]), &(this->st_forceref), sizeof(float));
      }
      uint8_t ccforceref_lengthT = *(inbuffer + offset++);
      if(ccforceref_lengthT > ccforceref_length)
        this->ccforceref = (float*)realloc(this->ccforceref, ccforceref_lengthT * sizeof(float));
      offset += 3;
      ccforceref_length = ccforceref_lengthT;
      for( uint8_t i = 0; i < ccforceref_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_ccforceref;
      u_st_ccforceref.base = 0;
      u_st_ccforceref.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_ccforceref.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_ccforceref.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_ccforceref.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_ccforceref = u_st_ccforceref.real;
      offset += sizeof(this->st_ccforceref);
        memcpy( &(this->ccforceref[i]), &(this->st_ccforceref), sizeof(float));
      }
      uint8_t fcpgain_lengthT = *(inbuffer + offset++);
      if(fcpgain_lengthT > fcpgain_length)
        this->fcpgain = (float*)realloc(this->fcpgain, fcpgain_lengthT * sizeof(float));
      offset += 3;
      fcpgain_length = fcpgain_lengthT;
      for( uint8_t i = 0; i < fcpgain_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_fcpgain;
      u_st_fcpgain.base = 0;
      u_st_fcpgain.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_fcpgain.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_fcpgain.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_fcpgain.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_fcpgain = u_st_fcpgain.real;
      offset += sizeof(this->st_fcpgain);
        memcpy( &(this->fcpgain[i]), &(this->st_fcpgain), sizeof(float));
      }
      uint8_t fcdgain_lengthT = *(inbuffer + offset++);
      if(fcdgain_lengthT > fcdgain_length)
        this->fcdgain = (float*)realloc(this->fcdgain, fcdgain_lengthT * sizeof(float));
      offset += 3;
      fcdgain_length = fcdgain_lengthT;
      for( uint8_t i = 0; i < fcdgain_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_fcdgain;
      u_st_fcdgain.base = 0;
      u_st_fcdgain.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_fcdgain.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_fcdgain.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_fcdgain.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_fcdgain = u_st_fcdgain.real;
      offset += sizeof(this->st_fcdgain);
        memcpy( &(this->fcdgain[i]), &(this->st_fcdgain), sizeof(float));
      }
      uint8_t fcigain_lengthT = *(inbuffer + offset++);
      if(fcigain_lengthT > fcigain_length)
        this->fcigain = (float*)realloc(this->fcigain, fcigain_lengthT * sizeof(float));
      offset += 3;
      fcigain_length = fcigain_lengthT;
      for( uint8_t i = 0; i < fcigain_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_fcigain;
      u_st_fcigain.base = 0;
      u_st_fcigain.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_fcigain.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_fcigain.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_fcigain.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_fcigain = u_st_fcigain.real;
      offset += sizeof(this->st_fcigain);
        memcpy( &(this->fcigain[i]), &(this->st_fcigain), sizeof(float));
      }
      uint8_t fccycle_lengthT = *(inbuffer + offset++);
      if(fccycle_lengthT > fccycle_length)
        this->fccycle = (float*)realloc(this->fccycle, fccycle_lengthT * sizeof(float));
      offset += 3;
      fccycle_length = fccycle_lengthT;
      for( uint8_t i = 0; i < fccycle_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_fccycle;
      u_st_fccycle.base = 0;
      u_st_fccycle.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_fccycle.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_fccycle.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_fccycle.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_fccycle = u_st_fccycle.real;
      offset += sizeof(this->st_fccycle);
        memcpy( &(this->fccycle[i]), &(this->st_fccycle), sizeof(float));
      }
      uint8_t fcthreshold_lengthT = *(inbuffer + offset++);
      if(fcthreshold_lengthT > fcthreshold_length)
        this->fcthreshold = (float*)realloc(this->fcthreshold, fcthreshold_lengthT * sizeof(float));
      offset += 3;
      fcthreshold_length = fcthreshold_lengthT;
      for( uint8_t i = 0; i < fcthreshold_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_fcthreshold;
      u_st_fcthreshold.base = 0;
      u_st_fcthreshold.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_fcthreshold.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_fcthreshold.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_fcthreshold.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_fcthreshold = u_st_fcthreshold.real;
      offset += sizeof(this->st_fcthreshold);
        memcpy( &(this->fcthreshold[i]), &(this->st_fcthreshold), sizeof(float));
      }
      uint8_t flimit_lengthT = *(inbuffer + offset++);
      if(flimit_lengthT > flimit_length)
        this->flimit = (float*)realloc(this->flimit, flimit_lengthT * sizeof(float));
      offset += 3;
      flimit_length = flimit_lengthT;
      for( uint8_t i = 0; i < flimit_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_flimit;
      u_st_flimit.base = 0;
      u_st_flimit.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_flimit.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_flimit.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_flimit.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_flimit = u_st_flimit.real;
      offset += sizeof(this->st_flimit);
        memcpy( &(this->flimit[i]), &(this->st_flimit), sizeof(float));
      }
      uint8_t accinertia_lengthT = *(inbuffer + offset++);
      if(accinertia_lengthT > accinertia_length)
        this->accinertia = (float*)realloc(this->accinertia, accinertia_lengthT * sizeof(float));
      offset += 3;
      accinertia_length = accinertia_lengthT;
      for( uint8_t i = 0; i < accinertia_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_accinertia;
      u_st_accinertia.base = 0;
      u_st_accinertia.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_accinertia.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_accinertia.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_accinertia.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_accinertia = u_st_accinertia.real;
      offset += sizeof(this->st_accinertia);
        memcpy( &(this->accinertia[i]), &(this->st_accinertia), sizeof(float));
      }
      uint8_t accfriction_lengthT = *(inbuffer + offset++);
      if(accfriction_lengthT > accfriction_length)
        this->accfriction = (float*)realloc(this->accfriction, accfriction_lengthT * sizeof(float));
      offset += 3;
      accfriction_length = accfriction_lengthT;
      for( uint8_t i = 0; i < accfriction_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_accfriction;
      u_st_accfriction.base = 0;
      u_st_accfriction.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_accfriction.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_accfriction.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_accfriction.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_accfriction = u_st_accfriction.real;
      offset += sizeof(this->st_accfriction);
        memcpy( &(this->accfriction[i]), &(this->st_accfriction), sizeof(float));
      }
      uint8_t acctension_lengthT = *(inbuffer + offset++);
      if(acctension_lengthT > acctension_length)
        this->acctension = (float*)realloc(this->acctension, acctension_lengthT * sizeof(float));
      offset += 3;
      acctension_length = acctension_lengthT;
      for( uint8_t i = 0; i < acctension_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_acctension;
      u_st_acctension.base = 0;
      u_st_acctension.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_acctension.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_acctension.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_acctension.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_acctension = u_st_acctension.real;
      offset += sizeof(this->st_acctension);
        memcpy( &(this->acctension[i]), &(this->st_acctension), sizeof(float));
      }
      uint8_t loadcelloffset_lengthT = *(inbuffer + offset++);
      if(loadcelloffset_lengthT > loadcelloffset_length)
        this->loadcelloffset = (float*)realloc(this->loadcelloffset, loadcelloffset_lengthT * sizeof(float));
      offset += 3;
      loadcelloffset_length = loadcelloffset_lengthT;
      for( uint8_t i = 0; i < loadcelloffset_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_loadcelloffset;
      u_st_loadcelloffset.base = 0;
      u_st_loadcelloffset.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_loadcelloffset.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_loadcelloffset.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_loadcelloffset.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_loadcelloffset = u_st_loadcelloffset.real;
      offset += sizeof(this->st_loadcelloffset);
        memcpy( &(this->loadcelloffset[i]), &(this->st_loadcelloffset), sizeof(float));
      }
      uint8_t motorgearratio_lengthT = *(inbuffer + offset++);
      if(motorgearratio_lengthT > motorgearratio_length)
        this->motorgearratio = (float*)realloc(this->motorgearratio, motorgearratio_lengthT * sizeof(float));
      offset += 3;
      motorgearratio_length = motorgearratio_lengthT;
      for( uint8_t i = 0; i < motorgearratio_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_motorgearratio;
      u_st_motorgearratio.base = 0;
      u_st_motorgearratio.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_motorgearratio.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_motorgearratio.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_motorgearratio.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_motorgearratio = u_st_motorgearratio.real;
      offset += sizeof(this->st_motorgearratio);
        memcpy( &(this->motorgearratio[i]), &(this->st_motorgearratio), sizeof(float));
      }
      uint8_t motorwatt_lengthT = *(inbuffer + offset++);
      if(motorwatt_lengthT > motorwatt_length)
        this->motorwatt = (float*)realloc(this->motorwatt, motorwatt_lengthT * sizeof(float));
      offset += 3;
      motorwatt_length = motorwatt_lengthT;
      for( uint8_t i = 0; i < motorwatt_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_motorwatt;
      u_st_motorwatt.base = 0;
      u_st_motorwatt.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_motorwatt.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_motorwatt.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_motorwatt.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_motorwatt = u_st_motorwatt.real;
      offset += sizeof(this->st_motorwatt);
        memcpy( &(this->motorwatt[i]), &(this->st_motorwatt), sizeof(float));
      }
      uint8_t springcoef_lengthT = *(inbuffer + offset++);
      if(springcoef_lengthT > springcoef_length)
        this->springcoef = (float*)realloc(this->springcoef, springcoef_lengthT * sizeof(float));
      offset += 3;
      springcoef_length = springcoef_lengthT;
      for( uint8_t i = 0; i < springcoef_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_springcoef;
      u_st_springcoef.base = 0;
      u_st_springcoef.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_springcoef.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_springcoef.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_springcoef.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_springcoef = u_st_springcoef.real;
      offset += sizeof(this->st_springcoef);
        memcpy( &(this->springcoef[i]), &(this->st_springcoef), sizeof(float));
      }
      uint8_t curlim_lengthT = *(inbuffer + offset++);
      if(curlim_lengthT > curlim_length)
        this->curlim = (float*)realloc(this->curlim, curlim_lengthT * sizeof(float));
      offset += 3;
      curlim_length = curlim_lengthT;
      for( uint8_t i = 0; i < curlim_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_curlim;
      u_st_curlim.base = 0;
      u_st_curlim.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_curlim.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_curlim.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_curlim.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_curlim = u_st_curlim.real;
      offset += sizeof(this->st_curlim);
        memcpy( &(this->curlim[i]), &(this->st_curlim), sizeof(float));
      }
      uint8_t controlmode_lengthT = *(inbuffer + offset++);
      if(controlmode_lengthT > controlmode_length)
        this->controlmode = (float*)realloc(this->controlmode, controlmode_lengthT * sizeof(float));
      offset += 3;
      controlmode_length = controlmode_lengthT;
      for( uint8_t i = 0; i < controlmode_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_controlmode;
      u_st_controlmode.base = 0;
      u_st_controlmode.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_controlmode.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_controlmode.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_controlmode.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_controlmode = u_st_controlmode.real;
      offset += sizeof(this->st_controlmode);
        memcpy( &(this->controlmode[i]), &(this->st_controlmode), sizeof(float));
      }
      uint8_t worldpos_lengthT = *(inbuffer + offset++);
      if(worldpos_lengthT > worldpos_length)
        this->worldpos = (float*)realloc(this->worldpos, worldpos_lengthT * sizeof(float));
      offset += 3;
      worldpos_length = worldpos_lengthT;
      for( uint8_t i = 0; i < worldpos_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_worldpos;
      u_st_worldpos.base = 0;
      u_st_worldpos.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_worldpos.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_worldpos.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_worldpos.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_worldpos = u_st_worldpos.real;
      offset += sizeof(this->st_worldpos);
        memcpy( &(this->worldpos[i]), &(this->st_worldpos), sizeof(float));
      }
      uint8_t worldrot_lengthT = *(inbuffer + offset++);
      if(worldrot_lengthT > worldrot_length)
        this->worldrot = (float*)realloc(this->worldrot, worldrot_lengthT * sizeof(float));
      offset += 3;
      worldrot_length = worldrot_lengthT;
      for( uint8_t i = 0; i < worldrot_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_worldrot;
      u_st_worldrot.base = 0;
      u_st_worldrot.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_worldrot.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_worldrot.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_worldrot.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_worldrot = u_st_worldrot.real;
      offset += sizeof(this->st_worldrot);
        memcpy( &(this->worldrot[i]), &(this->st_worldrot), sizeof(float));
      }
      uint8_t centroid_lengthT = *(inbuffer + offset++);
      if(centroid_lengthT > centroid_length)
        this->centroid = (float*)realloc(this->centroid, centroid_lengthT * sizeof(float));
      offset += 3;
      centroid_length = centroid_lengthT;
      for( uint8_t i = 0; i < centroid_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_centroid;
      u_st_centroid.base = 0;
      u_st_centroid.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_centroid.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_centroid.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_centroid.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_centroid = u_st_centroid.real;
      offset += sizeof(this->st_centroid);
        memcpy( &(this->centroid[i]), &(this->st_centroid), sizeof(float));
      }
      uint8_t objectpos_lengthT = *(inbuffer + offset++);
      if(objectpos_lengthT > objectpos_length)
        this->objectpos = (float*)realloc(this->objectpos, objectpos_lengthT * sizeof(float));
      offset += 3;
      objectpos_length = objectpos_lengthT;
      for( uint8_t i = 0; i < objectpos_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_objectpos;
      u_st_objectpos.base = 0;
      u_st_objectpos.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_objectpos.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_objectpos.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_objectpos.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_objectpos = u_st_objectpos.real;
      offset += sizeof(this->st_objectpos);
        memcpy( &(this->objectpos[i]), &(this->st_objectpos), sizeof(float));
      }
      uint8_t objectrot_lengthT = *(inbuffer + offset++);
      if(objectrot_lengthT > objectrot_length)
        this->objectrot = (float*)realloc(this->objectrot, objectrot_lengthT * sizeof(float));
      offset += 3;
      objectrot_length = objectrot_lengthT;
      for( uint8_t i = 0; i < objectrot_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_objectrot;
      u_st_objectrot.base = 0;
      u_st_objectrot.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_objectrot.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_objectrot.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_objectrot.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_objectrot = u_st_objectrot.real;
      offset += sizeof(this->st_objectrot);
        memcpy( &(this->objectrot[i]), &(this->st_objectrot), sizeof(float));
      }
      uint8_t objectjoint_lengthT = *(inbuffer + offset++);
      if(objectjoint_lengthT > objectjoint_length)
        this->objectjoint = (float*)realloc(this->objectjoint, objectjoint_lengthT * sizeof(float));
      offset += 3;
      objectjoint_length = objectjoint_lengthT;
      for( uint8_t i = 0; i < objectjoint_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_objectjoint;
      u_st_objectjoint.base = 0;
      u_st_objectjoint.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_objectjoint.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_objectjoint.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_objectjoint.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_objectjoint = u_st_objectjoint.real;
      offset += sizeof(this->st_objectjoint);
        memcpy( &(this->objectjoint[i]), &(this->st_objectjoint), sizeof(float));
      }
      uint8_t torque_lengthT = *(inbuffer + offset++);
      if(torque_lengthT > torque_length)
        this->torque = (float*)realloc(this->torque, torque_lengthT * sizeof(float));
      offset += 3;
      torque_length = torque_lengthT;
      for( uint8_t i = 0; i < torque_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_torque;
      u_st_torque.base = 0;
      u_st_torque.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_torque.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_torque.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_torque.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_torque = u_st_torque.real;
      offset += sizeof(this->st_torque);
        memcpy( &(this->torque[i]), &(this->st_torque), sizeof(float));
      }
      uint8_t color_lengthT = *(inbuffer + offset++);
      if(color_lengthT > color_length)
        this->color = (float*)realloc(this->color, color_lengthT * sizeof(float));
      offset += 3;
      color_length = color_lengthT;
      for( uint8_t i = 0; i < color_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_color;
      u_st_color.base = 0;
      u_st_color.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_color.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_color.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_color.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_color = u_st_color.real;
      offset += sizeof(this->st_color);
        memcpy( &(this->color[i]), &(this->st_color), sizeof(float));
      }
      uint8_t stereo_lengthT = *(inbuffer + offset++);
      if(stereo_lengthT > stereo_length)
        this->stereo = (float*)realloc(this->stereo, stereo_lengthT * sizeof(float));
      offset += 3;
      stereo_length = stereo_lengthT;
      for( uint8_t i = 0; i < stereo_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_stereo;
      u_st_stereo.base = 0;
      u_st_stereo.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_stereo.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_stereo.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_stereo.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_stereo = u_st_stereo.real;
      offset += sizeof(this->st_stereo);
        memcpy( &(this->stereo[i]), &(this->st_stereo), sizeof(float));
      }
      uint8_t stereolabel_lengthT = *(inbuffer + offset++);
      if(stereolabel_lengthT > stereolabel_length)
        this->stereolabel = (float*)realloc(this->stereolabel, stereolabel_lengthT * sizeof(float));
      offset += 3;
      stereolabel_length = stereolabel_lengthT;
      for( uint8_t i = 0; i < stereolabel_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_stereolabel;
      u_st_stereolabel.base = 0;
      u_st_stereolabel.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_stereolabel.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_stereolabel.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_stereolabel.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_stereolabel = u_st_stereolabel.real;
      offset += sizeof(this->st_stereolabel);
        memcpy( &(this->stereolabel[i]), &(this->st_stereolabel), sizeof(float));
      }
      uint8_t psf_lengthT = *(inbuffer + offset++);
      if(psf_lengthT > psf_length)
        this->psf = (float*)realloc(this->psf, psf_lengthT * sizeof(float));
      offset += 3;
      psf_length = psf_lengthT;
      for( uint8_t i = 0; i < psf_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_psf;
      u_st_psf.base = 0;
      u_st_psf.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_psf.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_psf.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_psf.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_psf = u_st_psf.real;
      offset += sizeof(this->st_psf);
        memcpy( &(this->psf[i]), &(this->st_psf), sizeof(float));
      }
      uint8_t face_lengthT = *(inbuffer + offset++);
      if(face_lengthT > face_length)
        this->face = (float*)realloc(this->face, face_lengthT * sizeof(float));
      offset += 3;
      face_length = face_lengthT;
      for( uint8_t i = 0; i < face_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_face;
      u_st_face.base = 0;
      u_st_face.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_face.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_face.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_face.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_face = u_st_face.real;
      offset += sizeof(this->st_face);
        memcpy( &(this->face[i]), &(this->st_face), sizeof(float));
      }
      uint8_t mep_lengthT = *(inbuffer + offset++);
      if(mep_lengthT > mep_length)
        this->mep = (float*)realloc(this->mep, mep_lengthT * sizeof(float));
      offset += 3;
      mep_length = mep_lengthT;
      for( uint8_t i = 0; i < mep_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_mep;
      u_st_mep.base = 0;
      u_st_mep.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_mep.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_mep.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_mep.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_mep = u_st_mep.real;
      offset += sizeof(this->st_mep);
        memcpy( &(this->mep[i]), &(this->st_mep), sizeof(float));
      }
      uint8_t flow_lengthT = *(inbuffer + offset++);
      if(flow_lengthT > flow_length)
        this->flow = (float*)realloc(this->flow, flow_lengthT * sizeof(float));
      offset += 3;
      flow_length = flow_lengthT;
      for( uint8_t i = 0; i < flow_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_flow;
      u_st_flow.base = 0;
      u_st_flow.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_flow.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_flow.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_flow.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_flow = u_st_flow.real;
      offset += sizeof(this->st_flow);
        memcpy( &(this->flow[i]), &(this->st_flow), sizeof(float));
      }
      uint8_t stereomep_lengthT = *(inbuffer + offset++);
      if(stereomep_lengthT > stereomep_length)
        this->stereomep = (float*)realloc(this->stereomep, stereomep_lengthT * sizeof(float));
      offset += 3;
      stereomep_length = stereomep_lengthT;
      for( uint8_t i = 0; i < stereomep_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_stereomep;
      u_st_stereomep.base = 0;
      u_st_stereomep.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_stereomep.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_stereomep.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_stereomep.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_stereomep = u_st_stereomep.real;
      offset += sizeof(this->st_stereomep);
        memcpy( &(this->stereomep[i]), &(this->st_stereomep), sizeof(float));
      }
      uint8_t objectinfo_lengthT = *(inbuffer + offset++);
      if(objectinfo_lengthT > objectinfo_length)
        this->objectinfo = (float*)realloc(this->objectinfo, objectinfo_lengthT * sizeof(float));
      offset += 3;
      objectinfo_length = objectinfo_lengthT;
      for( uint8_t i = 0; i < objectinfo_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_objectinfo;
      u_st_objectinfo.base = 0;
      u_st_objectinfo.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_objectinfo.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_objectinfo.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_objectinfo.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_objectinfo = u_st_objectinfo.real;
      offset += sizeof(this->st_objectinfo);
        memcpy( &(this->objectinfo[i]), &(this->st_objectinfo), sizeof(float));
      }
      union {
        float real;
        uint32_t base;
      } u_jsimtime;
      u_jsimtime.base = 0;
      u_jsimtime.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_jsimtime.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_jsimtime.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_jsimtime.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->jsimtime = u_jsimtime.real;
      offset += sizeof(this->jsimtime);
      uint8_t jsimpgain_lengthT = *(inbuffer + offset++);
      if(jsimpgain_lengthT > jsimpgain_length)
        this->jsimpgain = (float*)realloc(this->jsimpgain, jsimpgain_lengthT * sizeof(float));
      offset += 3;
      jsimpgain_length = jsimpgain_lengthT;
      for( uint8_t i = 0; i < jsimpgain_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_jsimpgain;
      u_st_jsimpgain.base = 0;
      u_st_jsimpgain.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_jsimpgain.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_jsimpgain.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_jsimpgain.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_jsimpgain = u_st_jsimpgain.real;
      offset += sizeof(this->st_jsimpgain);
        memcpy( &(this->jsimpgain[i]), &(this->st_jsimpgain), sizeof(float));
      }
      uint8_t jsimpower_lengthT = *(inbuffer + offset++);
      if(jsimpower_lengthT > jsimpower_length)
        this->jsimpower = (float*)realloc(this->jsimpower, jsimpower_lengthT * sizeof(float));
      offset += 3;
      jsimpower_length = jsimpower_lengthT;
      for( uint8_t i = 0; i < jsimpower_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_jsimpower;
      u_st_jsimpower.base = 0;
      u_st_jsimpower.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_jsimpower.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_jsimpower.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_jsimpower.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_jsimpower = u_st_jsimpower.real;
      offset += sizeof(this->st_jsimpower);
        memcpy( &(this->jsimpower[i]), &(this->st_jsimpower), sizeof(float));
      }
      uint8_t slider_lengthT = *(inbuffer + offset++);
      if(slider_lengthT > slider_length)
        this->slider = (float*)realloc(this->slider, slider_lengthT * sizeof(float));
      offset += 3;
      slider_length = slider_lengthT;
      for( uint8_t i = 0; i < slider_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_slider;
      u_st_slider.base = 0;
      u_st_slider.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_slider.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_slider.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_slider.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_slider = u_st_slider.real;
      offset += sizeof(this->st_slider);
        memcpy( &(this->slider[i]), &(this->st_slider), sizeof(float));
      }
      union {
        float real;
        uint32_t base;
      } u_nscycltime;
      u_nscycltime.base = 0;
      u_nscycltime.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_nscycltime.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_nscycltime.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_nscycltime.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->nscycltime = u_nscycltime.real;
      offset += sizeof(this->nscycltime);
      union {
        float real;
        uint32_t base;
      } u_nsproctime;
      u_nsproctime.base = 0;
      u_nsproctime.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_nsproctime.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_nsproctime.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_nsproctime.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->nsproctime = u_nsproctime.real;
      offset += sizeof(this->nsproctime);
      uint32_t length_extradata;
      memcpy(&length_extradata, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_extradata; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_extradata-1]=0;
      this->extradata = (char *)(inbuffer + offset-1);
      offset += length_extradata;
     return offset;
    }

    const char * getType(){ return "nervous_log/RobotState"; };
    const char * getMD5(){ return "d3c6f2c020a5555a14304b0680e5aa71"; };

  };

}
#endif