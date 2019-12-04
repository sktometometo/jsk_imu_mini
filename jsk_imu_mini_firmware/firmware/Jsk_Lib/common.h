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
#include "sensors/imu/imu_mpu9250.h"
#include "state_estimate/state_estimate.h"

/* ros related */
ros::NodeHandle  nh_;
static RosNode *testnode;

/* sensors */
IMU imu_;
StateEstimate estimator_;

#endif /*__ common_H */
