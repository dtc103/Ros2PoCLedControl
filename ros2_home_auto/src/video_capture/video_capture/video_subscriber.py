import rclpy
from rclpy.node import Node

import cv2
from cv_bridge import CvBridge

from sensor_msgs.msg import Image

class VideoSubscriber(Node):
    def __init__(self):
        super().__init__("video_subscriber")

        self.video_subscription = self.create_subscription(Image, "video", self.video_sub_callback, 10)

        self.br = CvBridge()

    def video_sub_callback(self, data):
        self.get_logger().info("Received data")

        frame = self.br.imgmsg_to_cv2(data)

        cv2.imshow("frame", frame)

        cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)

    node = VideoSubscriber()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()

if __name__ == '__main__':
    main()