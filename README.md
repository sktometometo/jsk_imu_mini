# The mini jsk_imu hardware firmware repository
This circuit can publish IMU data and 4 ADC channel data.

## Requirements

* Ubuntu bionic + ROS melodic
* rosserial_client
* rosserial_server
* [GCC ARM Toolchain](https://launchpad.net/~team-gcc-arm-embedded/+archive/ubuntu/ppa)
* [STM32 Cube Programmer](https://www.st.com/ja/development-tools/stm32cubeprog.html)

Please uninstall gcc-arm-none-eabi if you already install it.

```
$ sudo apt-get remove gcc-arm-none-eabi
```

Please install GNU Arm embedded toolchain

```
$ sudo add-apt-repository ppa:team-gcc-arm-embedded/ppa
$ sudo apt update
$ sudo apt install gcc-arm-embedded
```

And Please install STM32 Cube Programmer and set PATH to 

```
# Install STM32 Cube Programmer
# and add <STM32 Cube Programmer dir>/bin to executable path
$ echo "export PATH=PATH:<STM32 Cube Programmer dir>/bin" >> ~/.bashrc
```

## Build and Burn firmware


### build firmware

```
$ roscd jsk_imu_mini_firmware/firmware
$ make
```

### Burn firmware

```
$ roscd jsk_imu_mini_firmware/firmware
$ STM32_Programmer_CLI -c port=SWD -d ./build/jsk_imu_mini.bin 0x8000000 -s
```

### Regenerate ros_lib

refresh ros_lib if necessary

```
$ rosrun jsk_imu_mini_firmware refresh_roslib.sh
```

## How to use a

```
# connect via rosserial and publish messages
$ rosrun rosserial_server serial_node _baud:=921600 _port:=<serial port>

# calibration command
## set 0 to acc, gyro and mag calibration offset
$ rostopic pub -1 <topic name of imu_config_cmd> std_msgs/UInt8 "data: 0"

## calibrate offset of acc and gyro
$ rostopic pub -1 <topic name of imu_config_cmd> std_msgs/UInt8 "data: 1"

## calibrate offset of mag
$ rostopic pub -1 <topic name of imu_config_cmd> std_msgs/UInt8 "data: 2"

## load calibration offset values of acc, gyro and mag from internal flash 
$ rostopic pub -1 <topic name of imu_config_cmd> std_msgs/UInt8 "data: 3"

## save calibration offset values of acc, gyro and mag to internal flash 
$ rostopic pub -1 <topic name of imu_config_cmd> std_msgs/UInt8 "data: 4"


# set a coord to the board
$ rostopic pub -1 <topic name of desire_coordinate> jsk_imu_mini_msgs/DesireCoord "roll: 0.0 pitch: 0.0 yaw: 0.0 coord_type: 0" 


# launch rpy sample program
$ catkin build jsk_imu_mini_demo
$ source ~/catkin_ws/devel/setup.bash
$ roslaunch jsk_imu_mini_demo sample_rpy_publisher.launch
```

## Notice

If published imu datas include NaN values like shown in below, please calibrate acc, gyro and mag, save the calibration offset to internal flash and reboot the board.
```
$ rostopic echo /imu 

---
stamp: 
  secs: 0
  nsecs: 0
orientation: 
  x: nan
  y: nan
  z: nan
  w: nan
acc_data: [nan, nan, nan]
gyro_data: [nan, nan, nan]
mag_data: [nan, nan, nan]
---
```

```
## calibration
$ rostopic pub -1 <topic name of imu_config_cmd> std_msgs/UInt8 "data: 1"
$ rostopic pub -1 <topic name of imu_config_cmd> std_msgs/UInt8 "data: 2"

## saving calibrated offset to internal flash
$ rostopic pub -1 <topic name of imu_config_cmd> std_msgs/UInt8 "data: 4"

## reboot the board
```

You can reboot the jsk_imu_mini board with a button shown in a picture below.

![reset_button](./image/jsk_imu_mini_reset.png)

And you can see whether there is a problem with the board by subscribing /debug topic.
```
$ rostopic echo /debug

stamp:
  secs: 1554799273
  nsecs:   9137796
data: [INFO] MPU_CALIB_LOAD_CMD received.
---
stamp:
  secs: 1554799273
  nsecs:   9137796
data: [ERROR]Internal flashed calibration offsets include NaN value. 0 is used instead.
---
stamp:
  secs: 1554799282
  nsecs: 208670728
data: [INFO] RESET_CALIB_CMD received. All offset values are set to 0.
---
stamp:
  secs: 1554799287
  nsecs: 651782886
data: [INFO] MPU_ACC_GYRO_CALIB_CMD received. Acc and Gyro are calibrated.
---
stamp:
  secs: 1554799293
  nsecs: 729296664
data: [INFO] MPU_MAG_CALIB_CMD received. Mag is calibrated.
---
stamp: 
  secs: 1554799342
  nsecs: 203316158
data: [INFO] MPU_CALIB_SAVE_CMD received.
---
```
