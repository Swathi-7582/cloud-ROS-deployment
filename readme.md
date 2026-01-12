# Cloud ROS Deployment on AWS

This project implements the problem statement:
"Deploy ROS Noetic on Cloud so developers can run robotic simulations remotely."

## Cloud Specs
- AWS EC2 t2.micro
- Ubuntu 20.04 LTS
- ROS Noetic Desktop Full

## Setup on AWS
Launch Ubuntu 20.04 EC2
Connect via SSH
Run:
bash aws/ec2_setup.sh

## Build ROS workspace
cd ros_ws
catkin_make
source devel/setup.bash

## Run
roscore
rosrun cloud_robot publisher
rosrun cloud_robot subscriber

This verifies ROS is running successfully on cloud infrastructure.
