#!/bin/sh

DIRECTORY_MAIN=$(rospack find jsk_imu_mini_firmware)
DIRECTORY_ROS_LIB=$DIRECTORY_MAIN/ros_lib/

# 古いバージョンの消去
if [ -e $DIRECTORY_ROS_LIB ]; then
    rm -rf $DIRECTORY_ROS_LIB/*
else
    mkdir $DIRECTORY_ROS_LIB
fi

# msgファイルなどのbuild
catkin build jsk_imu_mini_msgs

# headerの生成
rosrun jsk_imu_mini_firmware make_libraries.py $DIRECTORY_ROS_LIB
