# The mini jsk_imu hardware firmware repository
This circuit can publish IMU data and 4 ADC channel data.

## Depending on
* rosserial_server
* TrueSTUDIO
* STM32CubeMx

## How to use
```
# build jsk_imu_mini_msgs and generate ros libraries for stm
./refresh_roslib.sh

# build and write firmware via TrueSTUDIO

roslaunch rosserial_stm rosserial.launch
rosrun rosserial_server serial_node _baud:=921600 _port:=<serial port>
```
