/*
 ******************************************************************************
 * File Name          : imu_mpu9250.cpp
 * Description        : IMU(MPU9250) Interface
 ******************************************************************************
 */

#ifndef __cplusplus
#error "Please define __cplusplus, because this is a c++ based file "
#endif

#include "imu/imu_mpu9250.h"

IMU::IMU(SPI_HandleTypeDef* hspi, ros::NodeHandle* nh)
{
  init(hspi, nh);
}

void IMU::init(SPI_HandleTypeDef* hspi, ros::NodeHandle* nh)
{
  reset_calib_flag_ = 0;

  SPI_connection_flag_ = true;

  acc_.zero();
  gyro_.zero();
  mag_.zero();
  nh_ = nh;

  imu_config_server_ = new ros::ServiceServer<jsk_imu_mini_msgs::ImuConfigRequest,jsk_imu_mini_msgs::ImuConfigResponse,IMU>("/imu_config_cmd", &IMU::imuConfigCallback, this);
  nh_->advertiseService(*imu_config_server_);
  imu_debug_pub_ = new ros::Publisher("debug", &imu_debug_msg_);
  nh_->advertise(*imu_debug_pub_);

  ahb_suspend_flag_ = false;
  mag_filtering_flag_ = true;
  mag_outlier_counter_ = 0;

  hspi_ = hspi;
  HAL_Delay(100);
  bool ret = readCalibData();
  if ( ! ret ) {
      acc_offset_.zero();
      gyro_offset_.zero();
      mag_offset_.zero();
      writeCalibData();
      nh_->loginfo("all offset values are set to 0");
  }
  gyroInit();
  accInit();
  magInit();

  /* change to 13.5Mhz for polling sensor data from acc, gyro and mag */
  hspi_->Instance->CR1 &= (uint32_t)(~SPI_BAUDRATEPRESCALER_256);  // reset
  hspi_->Instance->CR1 |= (uint32_t)(SPI_BAUDRATEPRESCALER_8);     // 8 = 13.5Mhz

  //
  debugPrint("init done");
  nh_->loginfo("init done");
}

uint16_t IMU::update(uint16_t queue_size)
{
  if (nh_->connected() && (!nh_->getHardware()->getUartDriver()->getTx()->idleFlag()))
    ahb_suspend_flag_ = true;  // should suspend USART1 of DMA(ros) for a while

  read();  // read from SPI

  process();

  update_ = true;
  return true;
}

void IMU::ledOutput()
{
  if (calibrate_acc_ || calibrate_gyro_ || calibrate_mag_)
    LED0_L;
  else
    LED0_H;
}

bool IMU::getCalibrated()
{
  if (!calibrate_acc_ && !calibrate_gyro_ && !calibrate_mag_)
    return true;
  else
    return false;
}

bool IMU::readCalibData()
{
  HAL_StatusTypeDef status = HAL_ERROR;

  status = FLASH_WaitForLastOperation((uint32_t)FLASH_TIMEOUT_VALUE);

  if (status == HAL_OK)
  {
    for (int i = 0; i < 3; i++)
    {
      acc_offset_[i] = (*(__IO float*)(CALIB_DATA_ADDRESS + CALIB_ACC_ADDRESS + 4 * i));
      gyro_offset_[i] = (*(__IO float*)(CALIB_DATA_ADDRESS + CALIB_GYRO_ADDRESS + 4 * i));
      mag_offset_[i] = (*(__IO float*)(CALIB_DATA_ADDRESS + CALIB_MAG_ADDRESS + 4 * i));
    }
    /* If the program operation is completed, disable the PG Bit */
    FLASH->CR &= (~FLASH_CR_PG);
  } else {
    debugPrint("falsh timeout");
    return false;
  }

  if ( acc_offset_[0] != acc_offset_[0] || acc_offset_[1] != acc_offset_[1] || acc_offset_[2] != acc_offset_[2] )
  {
      debugPrint("internal acc_offset_ includes NaN values.");
      return false;
  }
  if ( gyro_offset_[0] != gyro_offset_[0] || gyro_offset_[1] != gyro_offset_[1] || gyro_offset_[2] != gyro_offset_[2] )
  {
      debugPrint("internal gyro_offset_ includes NaN values.");
      return false;
  }
  if ( mag_offset_[0] != mag_offset_[0] || mag_offset_[1] != mag_offset_[1] || mag_offset_[2] != mag_offset_[2] )
  {
      debugPrint("internal mag_offset_ includes NaN values.");
      return false;
  }
  return true;
}

bool IMU::writeCalibData()
{
  HAL_StatusTypeDef r;

  r = HAL_FLASH_Unlock();
  if (r != HAL_OK) {
    debugPrint("Flash access failed.");
    return false;
  }

  FLASH_EraseInitTypeDef EraseInitStruct;
  uint32_t SectorError = 0;
  EraseInitStruct.TypeErase = FLASH_TYPEERASE_SECTORS;
  EraseInitStruct.Sector = CALIB_DATA_SECTOR;
  EraseInitStruct.NbSectors = 1;
  EraseInitStruct.VoltageRange = FLASH_VOLTAGE_RANGE_3;

  r = HAL_FLASHEx_Erase(&EraseInitStruct, &SectorError);
  if (r != HAL_OK) {
    debugPrint("Flash erase failed.");
    return false;
  }

  for (int i = 0; i < 3; i++)
  {
    HAL_FLASH_Program(FLASH_TYPEPROGRAM_WORD, CALIB_DATA_ADDRESS + CALIB_ACC_ADDRESS + 4 * i,
                      (*(__IO uint64_t*)(&acc_offset_[i])));
    HAL_FLASH_Program(FLASH_TYPEPROGRAM_WORD, CALIB_DATA_ADDRESS + CALIB_GYRO_ADDRESS + 4 * i,
                      (*(__IO uint64_t*)(&gyro_offset_[i])));
    HAL_FLASH_Program(FLASH_TYPEPROGRAM_WORD, CALIB_DATA_ADDRESS + CALIB_MAG_ADDRESS + 4 * i,
                      (*(__IO uint64_t*)(&mag_offset_[i])));
  }

  r = HAL_FLASH_Lock();

  return true;
}

void IMU::mpuWrite(uint8_t address, uint8_t value)
{
  IMU_SPI_CS_L;
  HAL_SPI_Transmit(hspi_, &address, 1, 1000);
  HAL_SPI_Transmit(hspi_, &value, 1, 1000);
  IMU_SPI_CS_H;
}

uint8_t IMU::mpuRead(uint8_t address)
{
  HAL_StatusTypeDef r;
  uint8_t t_data[1] = { 0 };
  t_data[0] = address | 0x80;
  uint8_t temp;
  IMU_SPI_CS_L;
  HAL_SPI_Transmit(hspi_, t_data, 1, 1000);
  r = HAL_SPI_Receive(hspi_, &temp, 1, 1000);
  if ( r == HAL_OK ) {
    SPI_connection_flag_ = true;
  } else {
    SPI_connection_flag_ = false;
  }
  IMU_SPI_CS_H;
  return temp;
}

void IMU::gyroInit(void)
{
  HAL_Delay(100);
  mpuWrite(0x6B, 0x80);  // PWR_MGMT_1    -- DEVICE_RESET 1
  HAL_Delay(10);
  // mpuWrite( 0x6B, 0x01);             //PWR_MGMT_1    -- SLEEP 0; CYCLE 0; TEMP_DIS 0; CLKSEL 3 (PLL with Z Gyro
  // reference)
  HAL_Delay(1);                   // very important!, some duration for process the setting
  mpuWrite(0x6A, 0x10);           // disable i2c communication
  HAL_Delay(1);                   // very importnat! between gyro and acc
  mpuWrite(0x1A, GYRO_DLPF_CFG);  // CONFIG        -- EXT_SYNC_SET 0 (disable input pin for data sync) ; default
                                  // DLPF_CFG = 0 => ACC bandwidth = 260Hz  GYRO bandwidth = 256Hz)
  HAL_Delay(1);                   // very importnat! between gyro and acc
  mpuWrite(0x1B, 0x18);           // GYRO_CONFIG   -- FS_SEL = 3: Full scale set to 2000 deg/sec
  HAL_Delay(10);                  // very importnat! between gyro and acc

  // calib in the first time
  calibrate_gyro_ = 0;

  raw_gyro_p_.zero();
}

void IMU::accInit(void)
{
  mpuWrite(0x1C, 0x10);  // ACCEL_CONFIG  -- AFS_SEL=2 (Full Scale = +/-8G)  ; ACCELL_HPF=0   //note something is wrong
                         // in the spec.
  HAL_Delay(1);
  // old: acceleration bandwidth is 460Hz
  mpuWrite(0x1D, ACC_DLPF_CFG);
  HAL_Delay(10);
  calibrate_acc_ = 0;

  raw_acc_p_.zero();
}

void IMU::magInit(void)
{
  HAL_Delay(10);
  // at this stage, the MAG is configured via the original MAG init function in I2C bypass mode
  // now we configure MPU as a I2C Master device to handle the MAG via the I2C AUX port (done here for HMC5883)
  mpuWrite(0x6A, 0x20);  // USER_CTRL -- DMP_EN=0 ; FIFO_EN=0 ; I2C_MST_EN=1 (I2C master mode) ; I2C_IF_DIS=0 ;
                         // FIFO_RESET=0 ; I2C_MST_RESET=0 ; SIG_COND_RESET=0
  HAL_Delay(10);
  mpuWrite(0x37, 0x00);  // INT_PIN_CFG -- INT_LEVEL=0 ; INT_OPEN=0 ; LATCH_INT_EN=0 ; INT_RD_CLEAR=0 ;
                         // FSYNC_INT_LEVEL=0 ; FSYNC_INT_EN=0 ; I2C_BYPASS_EN=0 ; CLKOUT_EN=0
  HAL_Delay(1);
  mpuWrite(0x24, 0x0D);  // I2C_MST_CTRL -- MULT_MST_EN=0 ; WAIT_FOR_ES=0 ; SLV_3_FIFO_EN=0 ; I2C_MST_P_NSR=0 ;
                         // I2C_MST_CLK=13 (I2C slave speed bus = 400kHz)
  HAL_Delay(1);

  // write mode
  mpuWrite(0x25, MAG_ADDRESS);
  HAL_Delay(1);
  mpuWrite(0x26, 0x0B);
  HAL_Delay(1);
  mpuWrite(0x63, 0x01);
  HAL_Delay(1);
  mpuWrite(0x27, 0x81);
  HAL_Delay(1);

  mpuWrite(0x26, 0x0A);
  HAL_Delay(1);
  mpuWrite(0x63, 0x16);
  HAL_Delay(1);
  mpuWrite(0x27, 0x81);
  HAL_Delay(1);

  // read mode
  mpuWrite(0x25, 0x80 | MAG_ADDRESS);  // I2C_SLV0_ADDR -- I2C_SLV4_RW=1 (read operation) ; I2C_SLV4_ADDR=MAG_ADDRESS
  HAL_Delay(1);
  mpuWrite(0x26, MAG_DATA_REGISTER);  // I2C_SLV0_REG -- 6 data bytes of MAG are stored in 6 registers. First register
                                      // address is MAG_DATA_REGISTER
  HAL_Delay(1);
  mpuWrite(0x27, 0x87);
  HAL_Delay(1);

  calibrate_mag_ = 0;
}

bool IMU::read()
{
  HAL_StatusTypeDef r;
  static int i = 0;
  uint8_t adc_gyro[6];
  uint8_t adc_acc[6];
  uint8_t adc_mag[7];

  uint8_t t_data[1];
  t_data[0] = 0x43 | 0x80;

  IMU_SPI_CS_L;
  HAL_SPI_Transmit(hspi_, t_data, 1, 1000);
  r = HAL_SPI_Receive(hspi_, adc_gyro, 6, 1000);
  if ( r == HAL_OK ) {
    SPI_connection_flag_ = true;
  } else {
    SPI_connection_flag_ = false;
    return false;
  }
  IMU_SPI_CS_H;

  /* we need add some delay between each sensor reading */
  raw_gyro_adc_[0] = (int16_t)(adc_gyro[0] << 8 | adc_gyro[1]) * 2000.0f / 32767.0f * M_PI / 180.0f;
  raw_gyro_adc_[1] = (int16_t)(adc_gyro[2] << 8 | adc_gyro[3]) * 2000.0f / 32767.0f * M_PI / 180.0f;
  raw_gyro_adc_[2] = (int16_t)(adc_gyro[4] << 8 | adc_gyro[5]) * 2000.0f / 32767.0f * M_PI / 180.0f;

  t_data[0] = 0x3B | 0x80;
  IMU_SPI_CS_L;
  HAL_SPI_Transmit(hspi_, t_data, 1, 1000);
  r = HAL_SPI_Receive(hspi_, adc_acc, 6, 1000);
  if ( r == HAL_OK ) {
    SPI_connection_flag_ = true;
  } else {
    SPI_connection_flag_ = false;
    false;
  }
  IMU_SPI_CS_H;

  /* we need add some delay between each sensor reading */
  raw_acc_adc_[0] = (int16_t)(adc_acc[0] << 8 | adc_acc[1]) / 4096.0f * GRAVITY_MSS;
  raw_acc_adc_[1] = (int16_t)(adc_acc[2] << 8 | adc_acc[3]) / 4096.0f * GRAVITY_MSS;
  raw_acc_adc_[2] = (int16_t)(adc_acc[4] << 8 | adc_acc[5]) / 4096.0f * GRAVITY_MSS;

  if (i == MAG_PRESCALER)
  {
    // mag is in low speed
    hspi_->Instance->CR1 &= (uint32_t)(~SPI_BAUDRATEPRESCALER_256);  // reset
    hspi_->Instance->CR1 |= (uint32_t)(SPI_BAUDRATEPRESCALER_64);    // 128 = 0.8Mhz
    t_data[0] = 0x49 | 0x80;
    IMU_SPI_CS_L;
    HAL_SPI_Transmit(hspi_, t_data, 1, 1000);
    r = HAL_SPI_Receive(hspi_, adc_mag, 7, 1000);
    if ( r == HAL_OK ) {
      SPI_connection_flag_ = true;
    } else {
      SPI_connection_flag_ = false;
      return false;
    }
    IMU_SPI_CS_H;

    hspi_->Instance->CR1 &= (uint32_t)(~SPI_BAUDRATEPRESCALER_256);  // reset
    hspi_->Instance->CR1 |= (uint32_t)(SPI_BAUDRATEPRESCALER_8);     // 8 = 13.5Mhz

    // uT(10e-6 T)
    raw_mag_adc_[0] = (int16_t)(adc_mag[1] << 8 | adc_mag[0]) * 4912.0f / 32760.0f;
    raw_mag_adc_[1] = (int16_t)(adc_mag[3] << 8 | adc_mag[2]) * 4912.0f / 32760.0f;
    raw_mag_adc_[2] = (int16_t)(adc_mag[5] << 8 | adc_mag[4]) * 4912.0f / 32760.0f;
  }
  if (i == MAG_PRESCALER)
    i = 0;
  else
    i++;

  return true;
}

void IMU::process(void)
{
  /* gyro part */
  if (calibrate_gyro_ > 0)
  {
    if (calibrate_gyro_ == CALIBRATING_STEP)
      gyro_offset_.zero();

    gyro_offset_ += raw_gyro_adc_;
    if (calibrate_gyro_ == 1)
    {
      gyro_offset_ /= (float)CALIBRATING_STEP;
    }
    calibrate_gyro_--;
  }
  else
  {
    gyro_ = raw_gyro_adc_ - gyro_offset_;
  }

  /* acc part */
  if (calibrate_acc_ > 0)
  {
    if (calibrate_acc_ == CALIBRATING_STEP)
      acc_offset_.zero();
    acc_offset_ += raw_acc_adc_;

    if (calibrate_acc_ == 1)
    {
      acc_offset_[0] /= (float)CALIBRATING_STEP;
      acc_offset_[1] /= (float)CALIBRATING_STEP;
      acc_offset_[2] /= (float)CALIBRATING_STEP;
      Vector3f gravity_direction(acc_offset_[0], acc_offset_[1], acc_offset_[2]);
      gravity_direction.normalize();
      acc_offset_ -= gravity_direction * GRAVITY_MSS;

      writeCalibData();
    }
    calibrate_acc_--;
  }
  else
  {
    acc_ = (raw_acc_p_ / ACC_LPF_FACTOR);
  }

  /* mag part */
  if (calibrate_mag_ > 0)
  {
    if (calibrate_mag_ == CALIBRATING_MAG_STEP)
    {
      mag_offset_.zero();
      mag_min_ = raw_mag_adc_;
      mag_max_ = raw_mag_adc_;
    }
    // 30s: you have 30s to turn the multi in all directions
    for (int i = 0; i < 3; i++)
    {
      if (raw_mag_adc_[i] < mag_min_[i])
        mag_min_[i] = raw_mag_adc_[i];
      if (raw_mag_adc_[i] > mag_max_[i])
        mag_max_[i] = raw_mag_adc_[i];
    }
    // http://www.aichi-mi.com/old_pages/5_2_transistor_gijutu/transistor_gijutu.htm

    if (calibrate_mag_ == 1)
    {
      mag_offset_ = (mag_min_ + mag_max_) / 2;
    }
    calibrate_mag_--;
  }
  else
  {
    /* transform coordinate */
    /*
    raw_mag_[0] = raw_mag_adc_[1] - mag_offset_[1];
    raw_mag_[1] = raw_mag_adc_[0] - mag_offset_[0];
    raw_mag_[2] = -(raw_mag_adc_[2] - mag_offset_[2]);
    */

    /* filtering => because the magnetemeter generates too much outlier, not know the reason */
    /*
    if (mag_filtering_flag_)
    {
      bool mag_outlier_flag = false;
      for (int i = 0; i < 3; i++)
      {
        if (fabs(raw_mag_[i] - mag_[i]) > MAG_GENERAL_THRESH)
          mag_outlier_flag = true;
      }

      if (!mag_outlier_flag)
      {
        mag_ = raw_mag_;
        mag_outlier_counter_ = 0;
      }
      else
      {
        if (++mag_outlier_counter_ > MAG_OUTLIER_MAX_COUNT)
        {
          mag_outlier_counter_ = 0;
          mag_ = raw_mag_;
        }
      }
    }
    else
    {
      if (!raw_mag_adc_.is_zero())
      {  // should notice that the raw_mag_adc may be 0 in the early stage
        mag_ = raw_mag_;
        mag_filtering_flag_ = true;
      }
    }
    */
    mag_[0] = raw_mag_adc_[1] - mag_offset_[1];
    mag_[1] = raw_mag_adc_[0] - mag_offset_[0];
    mag_[2] = -(raw_mag_adc_[2] - mag_offset_[2]);
  }

  if ( ! SPI_connection_flag_ ) {
    debugPrint("SPI connection is not valid.");
  }
}

void IMU::imuConfigCallback(const jsk_imu_mini_msgs::ImuConfigRequest& req, jsk_imu_mini_msgs::ImuConfigResponse& res)
{
  switch (req.data)
  {
    case RESET_CALIB_CMD:
      debugPrint("RESET_CALIB_CMD recieved. All offset values are set to 0.");
      acc_offset_.zero();
      gyro_offset_.zero();
      mag_offset_.zero();
      break;
    case MPU_ACC_GYRO_CALIB_CMD:
      debugPrint("MPU_ACC_GYRO_CALIB_CMD recieved. Acc and Gyro will be calibrated.");
      calibrate_gyro_ = CALIBRATING_STEP;
      calibrate_acc_ = CALIBRATING_STEP;
      break;
    case MPU_MAG_CALIB_CMD:
      debugPrint("MPU_MAG_CALIB_CMD recieved. Mag will be calibrated.");
      calibrate_mag_ = CALIBRATING_MAG_STEP;
      break;
    case MPU_CALIB_LOAD_CMD:
      debugPrint("MPU_CALIB_LOAD_CMD recieved.");
      readCalibData();
      break;
    case MPU_CALIB_SAVE_CMD:
      debugPrint("MPU_CALIB_SAVE_CMD recieved.");
      writeCalibData();
      break;
    default:
      debugPrint("Unknown command recieved.");
      break;
  }
}

void IMU::debugPrint(const char* message)
{
    imu_debug_msg_.stamp = nh_->now();
    imu_debug_msg_.data = message;
    imu_debug_pub_->publish(&imu_debug_msg_);
}
