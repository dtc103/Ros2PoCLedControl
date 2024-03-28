import time

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.action.server import ServerGoalHandle
#from rpi_ws281x import PixelStrip, Color

from custom_interfaces.msg import Color, ColorArray
from custom_interfaces.srv import SetColors
from custom_interfaces.action import SetColorAction

from std_msgs.msg import String

class ColorInstantiator(Color):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)


class ColourServer(Node):
    def __init__(self):
        super().__init__('ColourServer')

        # parameters
        self.declare_parameter("led_count", 1)
        self.declare_parameter("led_pin", 18)

        self.led_count = self.get_parameter("led_count").get_parameter_value().integer_value
        self.led_pin = self.get_parameter("led_pin").get_parameter_value().integer_value

        self.colors = [Color(r=0, g=0, b=0, a=255) for i in range(0, self.led_count)]

        #self.strip = PixelStrip(self.led_count, self.led_pin)
        #self.strip.begin()

        # topics
        self.color_array_publisher_= self.create_publisher(ColorArray, "led_colour", 10)
        self.color_array_timer_ = self.create_timer(1, self.publish_colour_array)

        # service
        self.set_color_srv = self.create_service(SetColors, "set_color", self.set_color_srv)

        # action
        self.set_colour_action = ActionServer(self, SetColorAction, "set_colors", self.set_color_action)


    def publish_colour_array(self):
        msg = ColorArray()
        msg.colors = [Color(r=155, g=150, b=255), Color(r=155, g=5, b=90), Color(r=32, g=1234, b=13), Color(r=0, g=1, b=55)]
        self.get_logger().info(f"Publishing: {self.led_count}, {self.led_pin}")
        self.color_array_publisher_.publish(msg)

    def set_color_action(self, goal_handle: ServerGoalHandle):
        self.get_logger().info("Executing goal...")
        
        result = SetColorAction.Result()
        feedback = SetColorAction.Feedback()
        
        feedback.status = "Checking Message Layout"
        goal_handle.publish_feedback(feedback)

        colors = goal_handle.request.colors

        if len(colors) != self.led_count:
            self.get_logger().warn("color input array has more colours that led counts")
            result.success = False
            goal_handle.abort()
            return result
        
        feedback.status = "Setting Colors"
        goal_handle.publish_feedback(feedback)

        #do the hardware stuff here
        #dummy waiting for testing
        self.get_logger("Hardware configurating...")
        time.sleep(2)

        feedback.status = "Colors Successfully Set"
        goal_handle.publish_feedback(feedback)

        goal_handle.succeed()
        result.success = True

        return result
    
    def set_color_srv(self, request, response):
        self.get_logger().info("Starting service")

        colors = request.colors

        if len(colors) != self.led_count:
            self.get_logger().warn("color input array has more colours that led counts")
            response.success = False
            return response
        
        #do some hardware stuff here
        #dummy waiting for testing
        self.get_logger().info("Hardware configurating...")
        time.sleep(2)

        response.success = True
        return response
    

def main(args=None):
    rclpy.init(args=args)
    node = ColourServer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
