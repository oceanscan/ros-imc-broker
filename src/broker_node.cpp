
// ROS headers.
#include <ros/ros.h>

// Local headers.
#include <ros_imc_broker/Broker.hpp>

int
main(int argc, char** argv)
{
  ros::init(argc, argv, "ros_imc_broker_node", ros::init_options::AnonymousName);

  ros::NodeHandle nh;
  ros_imc_broker::Broker broker(nh);
  ros::spin();

  return 0;
}
