/******************
 *
 * jsk_imu_mini_library ( based on JSK MBZIRC )
 */
#ifndef __COMMON_H
#define __COMMON_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* jsk_imu_mini_library */
#include <rosnode.h>
#include "config.h"
#include "imu/imu_mpu9250.h"
#include "attitude_estimator/attitude_estimator.h"

/* ros related */
ros::NodeHandle  nh_;
static RosNode *testnode;

/* sensors */
IMU imu_;
AttitudeEstimator estimator_;

#endif /*__ common_H */
