#!/bin/sh

DIRECTORY_MAIN=$(rospack find jsk_imu_mini_firmware)
DIRECTORY_ROS_LIB=$DIRECTORY_MAIN/ros_lib/
DIRECTORY_TEMP=$DIRECTORY_MAIN/temp

# 古いバージョンの消去
rm -rf $DIRECTORY_ROS_LIB/jsk_imu_mini_msgs

# msgファイルなどのbuild
catkin build jsk_imu_mini_msgs

# headerの生成
mkdir $DIRECTORY_TEMP
cd $DIRECTORY_TEMP
rosrun rosserial_client make_libraries .

# ros_libのコピー
cp -r $DIRECTORY_TEMP/ros_lib $DIRECTORY_ROS_LIB/

# 一時ファイルの削除
cd ../
rm -rf temp/
