#include "robot.h"

/*Constructor*/
Robot::Robot(int _id)
{
    id = _id;

    state = Mat_<float>(3,1);
    state_v = Mat_<float>(3,1);
    confidence_v = 0;

    velocity = Mat_<float>(3,1);

    frames_in = frames_out = 0;
}


/*Setters*/
void Robot::setVisionData(Mat_<float> &_state, float _confidence)
{
    state_v = _state.clone();
    confidence_v = _confidence;
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
