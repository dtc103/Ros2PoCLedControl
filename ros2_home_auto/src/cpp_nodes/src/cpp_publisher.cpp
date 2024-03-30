#include <chrono>
#include <cstdlib>
#include <memory>
#include <functional>
#include <cv_bridge/cv_bridge.h>
#include <image_transport/image_transport.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"

using namespace std::chrono_literals;

class VideoPublisher : public rclcpp::Node{
    public:
        VideoPublisher() : Node("video_publisher"){
            publisher_ = this->create_publisher<sensor_msgs::msg::Image>("video", 10);
            timer_ = this->create_wall_timer(40ms, std::bind(&VideoPublisher::video_publisher_callback, this));
            cam = cv::VideoCapture(0);
        }

    private:
        void video_publisher_callback(){
            RCLCPP_INFO(this->get_logger(), "sending");

            cv::Mat img;

            cam >> img;

            cv::Mat resized_img;
            cv::resize(img, resized_img, cv::Size(1280, 720), cv::INTER_LINEAR);

            cv::imshow("frame", resized_img);
            cv::waitKey(1);
        }

        rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publisher_;
        rclcpp::TimerBase::SharedPtr timer_;
        cv::VideoCapture cam;
};

int main(int argc, char ** argv)
{
    // rclcpp::init(argc, argv);

    // rclcpp::spin(std::make_shared<VideoPublisher>());

    // rclcpp::shutdown();

    cv::VideoCapture cam(0);

    while(true){
        cv::Mat img;
        cam >> img;

        // cv::Mat resized_img;
        // cv::resize(img, resized_img, cv::Size(1280, 720), cv::INTER_LINEAR);

        cv::imshow("frame", img);
        cv::waitKey(1);
    }

    



    return 0;
}
