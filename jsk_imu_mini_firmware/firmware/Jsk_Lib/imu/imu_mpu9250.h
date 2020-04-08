/*
 ******************************************************************************
 * File Name          : imu_mpu9250.h
 * Description        : IMU(MPU9250) Interface
 ******************************************************************************
 */

#ifndef __cplusplus
#error "Please define __cplusplus, because this is a c++ based file "
#endif

#ifndef __IMU_H
#define __IMU_H

#include <vector>

/* STM32HAL */
#include "stm32f4xx_hal.h"
#include <stm32f4xx_hal_flash_ex.h>

/* jsk_imu_mini_library */
#include "config.h"
/* #include "arm_math.h" */
#include "math/AP_Math.h"

/* ros */
#include <ros.h>
#include <std_msgs/UInt8.h>
#include <jsk_imu_mini_msgs/Debug.h>
#include <jsk_imu_mini_msgs/ImuConfig.h>

#define IMU_SPI_CS_H HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_SET)
#define IMU_SPI_CS_L HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_RESET)

/* magenetometer update at about 100Hz, but the entire sensor data polling process is at 1KHz, should add prescaler for
 * meg */
#define MAG_PRESCALER 4
/* magnetometer has bad noise bacause of the polling process, I think. So, we use a threshold filter method to remove
 * the outlier */
#define MAG_GENERAL_THRESH 20.0f
#define MAG_OUTLIER_MAX_COUNT 500  //= 500ms, 1count = 1ms

typedef Vector3f Imugyro;

class IMU
{
public:
  static const uint16_t DEFAULT_DATA_SIZE = 10;

  IMU(SPI_HandleTypeDef* hspi, ros::NodeHandle* nh);
  IMU(){};
  ~IMU()
  {
  }
  void init(SPI_HandleTypeDef* hspi, ros::NodeHandle* nh);
  // chen 0526 change update function
  // void update();
  uint16_t update(uint16_t queue_size = DEFAULT_DATA_SIZE);
  void ledOutput();

  bool getUpdate()
  {
    return update_;
  }
  void setUpdate(bool update)
  {
    update_ = update;
  }
  bool getCalibrated();

  // for flash memory access
  static const uint32_t FLASH_TIMEOUT_VALUE = 50000;      /* 50 s */
  static const uint32_t CALIB_DATA_ADDRESS = 0x08010000;  // 0x08018000; //32KB sector:  cortex m7
  // 0x80xxxxxx is Bloc base addresse on AXIM interface(stmf7 manual P74)
  // AXIM and TCIM share the same memory, but the addresses are different
  // we don't need sector erase for the writing part here, please see L57 in attitude_estimate.c
  static const uint32_t CALIB_DATA_SECTOR = FLASH_SECTOR_4;
  static const uint8_t CALIB_DATA_LENGTH = 36;  // 3 * 2 * 4, no need of gyro to save
  static const uint8_t CALIB_ACC_ADDRESS = 0;
  static const uint8_t CALIB_GYRO_ADDRESS = 12;
  static const uint8_t CALIB_MAG_ADDRESS = 24;

  static const uint32_t CALIBRATING_STEP = 1000;
  static const uint32_t CALIBRATING_MAG_STEP = 1200;  // about 30s (0.01s * 3000; 0.001s * 30000)

  static const uint8_t GYRO_DLPF_CFG = 0x01;  // 0x04 //0: 250Hz, 0.97ms; 3: 41Hz, 5.9ms(kduino); 4: 20Hz: 9.9ms
  static const uint8_t ACC_DLPF_CFG = 0x03;   // 0x03: 41Hz, 11.80ms
  static const uint8_t ACC_LPF_FACTOR = 42;   // old: 16
  static const uint8_t GYRO_LPF_FACTOR = 12;  // old: 8
  static const uint8_t MAG_ADDRESS = 0x0C;
  static const uint8_t MAG_DATA_REGISTER = 0x03;

  /* calibration cmd form ROS */
  static const uint8_t RESET_CALIB_CMD = 0x00;
  static const uint8_t MPU_ACC_GYRO_CALIB_CMD = 0x01;
  static const uint8_t MPU_MAG_CALIB_CMD = 0x02;
  static const uint8_t MPU_CALIB_LOAD_CMD = 0x03;
  static const uint8_t MPU_CALIB_SAVE_CMD = 0x04;

  Vector3f getAcc()
  {
    return acc_;
  }
  Vector3f getGyro()
  {
    return gyro_;
  }
  Vector3f getMag()
  {
    return mag_;
  }

  // chen 0526  add gyro acc vector
  std::vector<Imugyro> gyroacc_quene;
  Imugyro ave_gyro;
  Imugyro ave_gyroacc;
#define SYSFREQ 1000;

private:
  SPI_HandleTypeDef* hspi_;

  ros::NodeHandle* nh_;
  ros::ServiceServer<jsk_imu_mini_msgs::ImuConfigRequest,jsk_imu_mini_msgs::ImuConfigResponse,IMU>* imu_config_server_;
  ros::Publisher* imu_debug_pub_;
  jsk_imu_mini_msgs::Debug imu_debug_msg_;

  uint8_t acc_gyro_calib_flag_;
  uint8_t mag_calib_flag_;
  uint8_t reset_calib_flag_;

  Vector3f raw_gyro_adc_, raw_acc_adc_, raw_mag_adc_;

  Vector3f raw_acc_, raw_gyro_, raw_mag_;
  Vector3f acc_, gyro_, mag_;

  Vector3f raw_gyro_p_;
  Vector3f raw_acc_p_;

  int calibrate_acc_;
  int calibrate_gyro_;
  int calibrate_mag_;

  Vector3f acc_offset_;
  Vector3f gyro_offset_;
  Vector3f mag_offset_;
  Vector3f mag_max_;
  Vector3f mag_min_;

  bool mag_filtering_flag_;
  uint16_t mag_outlier_counter_;

  bool update_;

  bool ahb_suspend_flag_;  // to avoid the confliction between SPI1 and USART1(ros)

  bool SPI_connection_flag_;

  void gyroInit(void);
  void accInit(void);
  void magInit(void);

  bool read(void);
  void process(void);

  void mpuWrite(uint8_t address, uint8_t value);
  uint8_t mpuRead(uint8_t address);

  bool readCalibData(void);
  bool writeCalibData(void);

  void imuConfigCallback(const jsk_imu_mini_msgs::ImuConfigRequest& req, jsk_imu_mini_msgs::ImuConfigResponse& res);

  void debugPrint(const char* message);
};
#endif
