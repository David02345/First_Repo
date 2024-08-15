#include "rclcpp/rclcpp.hpp"

class Test3DOFNode : public rclcpp::Node
{
public:
  Test3DOFNode() : Node("dof_test")
  {
    RCLCPP_INFO(this->get_logger(), "Test 3-DOF Node has been started.");
  }
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Test3DOFNode>());
  rclcpp::shutdown();
  return 0;
}

