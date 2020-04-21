/*
******************************************************************************
* File Name          : state_estimate.h
* Description        : state(attitude, altitude, pos) estimate interface
******************************************************************************
*/

#ifndef __cplusplus
#error "Please define __cplusplus, because this is a c++ based file "
#endif

#ifndef __STATE_ESTIMATE_H
#define __STATE_ESTIMATE_H

#include "stm32f4xx_hal.h"
/* #include "arm_math.h" */
#include <ros.h>

/* sensors */
////////////////////////////////////////
//TODO: should include the super class//
////////////////////////////////////////
#include "sensors/imu/imu_mpu9250.h"

/* */
#include "state_estimate/attitude/attitude_estimate.h"

class StateEstimate
{
public:
  StateEstimate()
  {
  }
  ~StateEstimate(){}

void  init(IMU* imu, ros::NodeHandle* nh)
  {
    nh_ = nh;

    attitude_estimate_flag_ = true;
    imu_ = imu;
    attitude_estimator_.init(imu_, nh_);

  }

  void update()
  {
    attitude_estimator_.update();
  }

  AttitudeEstimate* getAttEstimator(){ return &attitude_estimator_;}

//private:
  ros::NodeHandle* nh_;

  IMU* imu_;

  AttitudeEstimate attitude_estimator_;

  bool attitude_estimate_flag_;
};

#endif
