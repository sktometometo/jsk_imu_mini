#!/bin/sh

DIRECTORY_MAIN=$(rospack find jsk_imu_mini_firmware)
DIRECTORY_ROS_LIB=$DIRECTORY_MAIN/ros_lib/
DIRECTORY_TEMP=$DIRECTORY_MAIN/temp/

# 一時ディレクトリの作成
if [ ! -e $DIRECTORY_TEMP ]; then
    mkdir $DIRECTORY_TEMP
fi

# 古いバージョンの消去
# if [ -e $DIRECTORY_ROS_LIB/ros ]; then
#     rm -rf $DIRECTORY_ROS_LIB/ros
# fi
# if [ -e $DIRECTORY_ROS_LIB/jsk_imu_mini_msgs ]; then
#     rm -rf $DIRECTORY_ROS_LIB/jsk_imu_mini_msgs
# fi
#
# ros_lib/ros/subscriber.h に subscriber2が追加されているため,古いバージョンを削除しないように変更

# msgファイルなどのbuild
catkin build jsk_imu_mini_msgs

# non-platformbasedなheader類の生成
rosrun rosserial_client make_libraries $DIRECTORY_TEMP

# 新しいファイル類の移動
cp -r $DIRECTORY_TEMP/ros_lib/jsk_imu_mini_msgs $DIRECTORY_ROS_LIB/jsk_imu_mini_msgs
cp -r $DIRECTORY_TEMP/ros_lib/ros $DIRECTORY_ROS_LIB/ros
cp -r $DIRECTORY_TEMP/ros_lib/nav_msgs $DIRECTORY_ROS_LIB/nav_msgs
cp -r $DIRECTORY_TEMP/ros_lib/std_msgs $DIRECTORY_ROS_LIB/std_msgs
cp -r $DIRECTORY_TEMP/ros_lib/geometry_msgs $DIRECTORY_ROS_LIB/geometry_msgs

# 一時ディレクトリの削除
if [ -e $DIRECTORY_TEMP ]; then
    rm -rf $DIRECTORY_TEMP
fi
