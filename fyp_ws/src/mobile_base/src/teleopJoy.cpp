#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <sensor_msgs/Joy.h>
#include <std_msgs/Empty.h>
#include <mobile_base/joy.h>
#include <stdlib.h>

float heading,speed;
int joyX = 0, joyY =0;
int joyMax = 1000;
int joyMin = -1000;
int joyMid = 0;
int joyMidUpper = joyMid + 100;
int joyMidLower = joyMid - 100;

int speedFwd = 0;
int speedTurn = 0;
int speedLeft = 0;
int speedRight = 0;

int motorSpeed = 0;
int motorSpeedMax = 255;
int motorSpeedMin = 90;
int lastdata = 0;

class TeleopMobile
{
public:
  TeleopMobile();

private:
  void joyCallback(const sensor_msgs::Joy::ConstPtr& joy);
  
  long map(long x, long in_min, long in_max, long out_min, long out_max);
  long constrain(long in, long min, long max);
  long smooth(long ref,long alpah, long input);
  ros::NodeHandle nh_;
  
  int linear_, angular_;
  double l_scale_, a_scale_;
//   ros::Publisher vel_pub_;
  ros::Publisher joy_pub_;

  ros::Subscriber joy_sub_;

};



TeleopMobile::TeleopMobile():
  linear_(1),
  angular_(2)
{

  nh_.param("axis_linear", linear_, linear_);
  nh_.param("axis_angular", angular_, angular_);
  nh_.param("scale_angular", a_scale_, a_scale_);
  nh_.param("scale_linear", l_scale_, l_scale_);


//   vel_pub_ = nh_.advertise<geometry_msgs::Twist>("turtle1/cmd_vel", 1);
  joy_pub_ = nh_.advertise<mobile_base::joy>("mobile_md", 1);

  joy_sub_ = nh_.subscribe<sensor_msgs::Joy>("joy", 1, &TeleopMobile::joyCallback, this);

}


long TeleopMobile::map(long x, long in_min, long in_max, long out_min, long out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}


long TeleopMobile::constrain(long in, long min, long max)
{
  long out;
  if(in >= max)
  {
    out = max;
  }
  else if(in <= min)
  {
    out = min;
  }
  else
  {
    out = in;
  }

  return out;
}

long TeleopMobile::smooth(long ref, long alpha, long input)
{
  long out;
  
  if(input < ref)
  {
    out = input + alpha;
  }
  else if (input > ref)
  {
    out = input - alpha;
  }
    
  return out;
}




void TeleopMobile::joyCallback(const sensor_msgs::Joy::ConstPtr& joySensor)
{
    
//   geometry_msgs::Twist twist;
//   twist.angular.z = a_scale_*joy->axes[angular_];
//   twist.linear.x = l_scale_*joy->axes[linear_];
//   vel_pub_.publish(twist);
  

  ROS_INFO("hello");
  ROS_INFO("%f", joySensor->axes[0]);
  ROS_INFO("%f", joySensor->axes[3]);
  
  mobile_base::joy mobile;
  
  ROS_INFO("---------------------");

  ROS_INFO("lastdata = %d", lastdata);
  ROS_INFO("speedA = %d", mobile.speedA);
  ROS_INFO("dirB = %d", mobile.dirB);
  ROS_INFO("speedB = %d", mobile.speedB);

  ROS_INFO("---------------------");
  
  joyX = 1000 * joySensor->axes[0];
  joyY = 1000 * joySensor->axes[3];

  ROS_INFO("%d", joyX);
  ROS_INFO("%d", joyY);

    
  speedFwd = map(joyY,joyMax,joyMin,motorSpeedMax,-motorSpeedMax);
  speedTurn = map(joyX,joyMax,joyMin,-motorSpeedMax,motorSpeedMax);

  ROS_INFO("speedForward = %d", speedFwd);
  ROS_INFO("speedTurn = %d", speedTurn);


  speedLeft = speedFwd + speedTurn;
  speedRight = speedFwd - speedTurn;

  speedLeft = constrain(speedLeft, -255, 255);
  speedRight = constrain(speedRight, -255, 255);

  // smooth(ref,alpha,in);
  
  if(speedLeft > 0)
    mobile.dirA = 1;
  else
    mobile.dirA = 0;
  
  if(speedRight > 0)
    mobile.dirB = 0;
  else
    mobile.dirB = 1;

  mobile.speedA = abs(speedLeft);
  mobile.speedB = abs(speedRight);
  


   // mobile.speedA = joySensor->axes[0];
   // mobile.speedB = joySensor->axes[3];

  ROS_INFO("---------------------");
  ROS_INFO("speedLeft = %d", speedLeft);
  ROS_INFO("speedRight = %d", speedRight);
  ROS_INFO("---------------------");

  ROS_INFO("dirA = %d", mobile.dirA);
  ROS_INFO("speedA = %d", mobile.speedA);
  ROS_INFO("dirB = %d", mobile.dirB);
  ROS_INFO("speedB = %d", mobile.speedB);

  ROS_INFO("---------------------");

  lastdata = speedLeft;

  // spe = map(joyX,-1,0,0,255);
  // speed = l_scale_*joySensor->axes[3];



  



  // if (heading < -0.5)
  // {
  //   mobile.dirA = 1; 
  //   mobile.dirB = 0; 
  //   mobile.speedA = speed;
  // }
  // else if (heading > 0.5) 
  // {
  //   mobile.dirA = 0; 
  //   mobile.dirB = 1;
  //   mobile.speedB = speed;
  // }  
  // else{
  //   if (speed > 0){
  //     mobile.dirA = 1; 
  //     mobile.dirB = 1; 
  //     mobile.speedA = speed;
  //     mobile.speedB = speed;
  //   }
  //   else if (speed < 0)
  //   {
  //     mobile.dirA = 0; 
  //     mobile.dirB = 0; 
  //     mobile.speedA = speed*-1;
  //     mobile.speedB = speed*-1;
  //   }
  //   else{
  //     mobile.dirA = 0; 
  //     mobile.dirB = 0; 
  //     mobile.speedA = 0;
  //     mobile.speedB = 0;
  //   }
  // }




//   joy->axes[];

  
  joy_pub_.publish(mobile);

}


int main(int argc, char** argv)
{
  ros::init(argc, argv, "input_joy");
  TeleopMobile teleop_mobile;

  ros::spin();
}