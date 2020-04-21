/******************
 *
 * JSK MBZIRC
 */
#ifndef __COMMON_H
#define __COMMON_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include <rosnode.h>
//for sensors
#include "sensors/imu/imu_mpu9250.h"
/* State Estimate, including attitude, altitude and pos */
#include "state_estimate/state_estimate.h"

/* ros related */
//ros node_handler
ros::NodeHandle  nh_;
//ros node  ugvnode
static RosNode *testnode;

/* sensors */
IMU imu_;
//
StateEstimate estimator_;

#endif /*__ common_H */
