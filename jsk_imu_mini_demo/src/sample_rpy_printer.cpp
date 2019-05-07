#include "ros/ros.h"
#include "jsk_imu_mini_msgs/Imu.h"

#include <tf/transform_listener.h>

#include <iostream>

void printCallback( const jsk_imu_mini_msgs::Imu::ConstPtr& msg )
{
    double r,p,y;
    tf::Quaternion quat( msg->orientation.x, msg->orientation.y, msg->orientation.z, msg->orientation.w );
    tf::Matrix3x3( quat ).getRPY( r, p, y );

    std::cout << "roll  : " << r << std::endl;
    std::cout << "pitch : " << p << std::endl;
    std::cout << "yaw   : " << y << std::endl;
    std::cout << std::endl;
}

int main(int argc, char **argv)
{
    if ( argc < 2 ) {
        std::cout << "usage: sample_rpy_publisher <topicname of jsk_imu_mini_msgs/Imu>" << std::endl;
        return 0;
    }
    std::string topicname_quaternion(argv[1]);

    ros::init( argc, argv, "rpy_printer" );
    ros::NodeHandle nh;

    ros::Subscriber sub = nh.subscribe( topicname_quaternion.c_str(), 10, printCallback );

    ros::spin();

    return 0;
}
