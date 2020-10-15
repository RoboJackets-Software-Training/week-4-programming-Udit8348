#include <ros/ros.h>

// -= (EXERCISE 1) add the include for the string message! =-
#include <std_msgs/String.h>
// -========================================================-

// -= (EXERCISE 1) your callback function should be defined here! =-
void callback_function(std_msgs::String string_msg)
{
    //Logging, this works similar to <<
    ROS_INFO_STREAM(string_msg.data);
}

// -===============================================================-

int main(int argc, char** argv){
    ros::init(argc, argv, "your_node");
    ros::NodeHandle p_nh = ros::NodeHandle("~");

    // -= (EXERCISE 1) create the ros subscriber here, and have it use your callback function! =-
    ros::Subscriber subscriber = p_nh.subscribe("/string_topic", 1, &callback_function);

    // -========================================================================================-

    ros::spin();
    return 0;
}