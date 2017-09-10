#include "robot.h"

/*Constructor*/
Robot::Robot(int _id): id(_id), confidence_v(0), frames_in(0), frames_out(0)
{
    state = Mat_<float>(3,1);
    state_v = Mat_<float>(3,1);
    velocity = Mat_<float>(3,1);
}

Robot::operator RobotPackage() const
{
    RobotPackage package;
    package.set_id(id);
    package.set_x(state[0][0]);
    package.set_y(state[1][0]);
    package.set_orientation(state[2][0]);
    return package;
}

/*Setters*/
void Robot::setVisionData(visionRobot& vision_robot)
{
    state_v = vision_robot.state.clone();
    confidence_v = vision_robot.confidence;
}

/*Getters*/
int Robot::getId(){
    return id;
}

Mat_<float> Robot::getState(){
    return state.clone();
}

float Robot::getconfidence(){
    return confidence_v;
}

Mat_<float> Robot::getVelocity(){
    return velocity;
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
