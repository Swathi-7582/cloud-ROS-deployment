#include <ros/ros.h>
#include <std_msgs/String.h>
#include <sstream>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "cloud_publisher");
    ros::NodeHandle nh;
    ros::Publisher pub = nh.advertise<std_msgs::String>("cloud_status", 10);
    ros::Rate rate(1);

    while (ros::ok())
    {
        std_msgs::String msg;
        std::stringstream ss;
        ss << "ROS running on AWS cloud";
        msg.data = ss.str();
        pub.publish(msg);
        ros::spinOnce();
        rate.sleep();
    }
}
