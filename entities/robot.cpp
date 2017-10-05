#include "robot.h"

/*Constructor*/
Robot::Robot(int _id): id(_id), confidence(0.f), frames_in(0), frames_out(0)
{
    pose = Mat_<float>(3,1);
}

Robot::operator RobotPackage() const
{
    RobotPackage package;
    package.set_id(id);
    package.set_x(pose[0][0]);
    package.set_y(pose[1][0]);
    package.set_orientation(pose[2][0]);
    return package;
}

/*Getters*/
int Robot::getId(){
    return id;
}

Mat_<float> Robot::getPose(){
    return pose.clone();
}

float Robot::getconfidence(){
    return confidence;
}

/*Control methods*/
bool Robot::found()
{
    if(frames_out>0 && frames_out<FRAMES_NOT_FOUNDED){
        return true;
    }
    else if(frames_in>=FRAMES_FOUNDED){
        return true;
    }
    else{
        return false;
    }
}

void Robot::operator ++()
{
    frames_out = 0;
    frames_in++;
}

void Robot::operator --()
{
    frames_in = 0;
    frames_out++;
}
