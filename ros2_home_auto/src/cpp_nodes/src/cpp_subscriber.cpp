#include <chrono>
#include <cstdlib>
#include <memory>
#include <cv_bridge/cv_bridge.h>
#include <image_transport/image_transport.hpp>
#include <opencv2/opencv.hpp>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"

using std::placeholders::_1;

class VideoSubscriber : public rclcpp::Node{
    public:
        VideoSubscriber() : Node("video_subscriber"){
            subscription_ = this->create_subscription<sensor_msgs::msg::Image>("video", 10, std::bind(&VideoSubscriber::subscriptor_callback, this, _1));
        }

    private:
        void subscriptor_callback(const sensor_msgs::msg::Image & msg) const {
            RCLCPP_INFO(this->get_logger(), "received message");

            cv::imshow("frame", cv_bridge::toCvCopy(msg, msg.encoding)->image);
            cv::waitKey(1);
        }

        rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;
};


int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);

    rclcpp::spin(std::make_shared<VideoSubscriber>());

    rclcpp::shutdown();

    return 0;
}
