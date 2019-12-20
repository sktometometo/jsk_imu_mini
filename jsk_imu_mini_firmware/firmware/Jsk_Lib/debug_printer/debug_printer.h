/*
 ******************************************************************************
 * File Name          : debug_printer.h
 * Description        : Debug Printer Class
 ******************************************************************************
 */

#ifndef __cplusplus
#error "Please define __cplusplus, because this is a c++ based file "
#endif

#ifndef __DEBUG_PRINTER_H
#define __DEBUG_PRINTER_H

/* Standard C/C++ library */
#include <string>

/* STM32HAL */
#include "stm32f4xx_hal.h"

/* jsk_imu_mini_library */
#include "config.h"

/* ros */
#include <ros.h>
#include <jsk_imu_mini_msgs/Debug.h>

class DebugPrinter
{
public:
    
    DebugPrinter();
    DebugPrinter(ros::NodeHandle*);
    ~DebugPrinter();
    void init(ros::NodeHandle*);
    void print(const char *);
    void print(std::string);

private:

    ros::NodeHandle* node_handle_;
    ros::Publisher* debug_publisher_;
    jsk_imu_mini_msgs::Debug debug_msg_;

};

#endif
