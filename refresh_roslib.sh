#!/bin/sh

DIRECTORY_MAIN=$(pwd)
DIRECTORY_ROS_LIB=$(pwd)/ros_lib/
DIRECTORY_TEMP=$DIRECTORY_MAIN/temp

cd $DIRECTORY_MAIN
catkin build jsk_imu_mini_msgs
mkdir $DIRECTORY_TEMP/Inc -p
cd $DIRECTORY_TEMP
rosrun rosserial_stm32 make_libraries.py .
cp -r $DIRECTORY_TEMP/Inc/jsk_imu_mini_msgs $DIRECTORY_ROS_LIB/
cd ../
rm -rf temp/
