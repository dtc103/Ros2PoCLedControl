import rclpy
from rclpy.node import Node

import cv2
from cv_bridge import CvBridge

from sensor_msgs.msg import Image


class VideoPublisher(Node):
    def __init__(self):
        super().__init__("video_publisher")

        self.video_pub = self.create_publisher(Image, "video", 10)
        self.video_timer = self.create_timer(0.02, self.video_publisher_callback)

        self.cam = cv2.VideoCapture(0, cv2.CAP_GSTREAMER)
        self.cam.set(cv2.CAP_PROP_FRAME_WIDTH, 640)
        self.cam.set(cv2.CAP_PROP_FRAME_HEIGHT, 480)

        self.br = CvBridge()

    def video_publisher_callback(self):
        ret, frame = self.cam.read()
        
        edge_detection = cv2.Canny(image=frame, threshold1 = 50, threshold2 = 150)

        if ret == True:
            self.video_pub.publish(self.br.cv2_to_imgmsg(edge_detection))
            #self.get_logger().info("publishing video frame")

        


def main(args=None):
    rclpy.init(args=args)

    node = VideoPublisher()

    rclpy.spin(node)

    cv2.destroyAllWindows()

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
