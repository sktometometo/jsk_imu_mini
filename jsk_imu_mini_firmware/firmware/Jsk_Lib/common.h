/******************
 *
 * JSK MBZIRC
 */
#ifndef __COMMON_H
#define __COMMON_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include <rosnode.h>
/* configurations of sensors */
#include "config.h"
//for sensors
#include "sensors/imu/imu_mpu9250.h"
/* State Estimate, including attitude, altitude and pos */
#if ATTITUDE_ESTIMATE_FLAG || HEIGHT_ESTIMATE_FLAG || POS_ESTIMATE_FLAG
#include "state_estimate/state_estimate.h"
#endif
/* encoder related */
//encoder::ENCODER_ Enc_handle_left;
//encoder::ENCODER_ Enc_handle_right;

/* ros related */
//ros node_handler
ros::NodeHandle  nh_;
//ros node  ugvnode
static RosNode *testnode;

/* sensors */
IMU imu_;
//
#if ATTITUDE_ESTIMATE_FLAG || HEIGHT_ESTIMATE_FLAG || POS_ESTIMATE_FLAG
StateEstimate estimator_;
#endif

#endif /*__ common_H */
