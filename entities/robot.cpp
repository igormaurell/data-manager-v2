#include "robot.h"

/*Constructor*/
Robot::Robot(int _id)
{
    id = _id;

    state = Mat_<float>(3,1);
    state_v = Mat_<float>(3,1);
    confiability_v = 0;

    velocity = Mat_<float>(3,1);

    frames_in = frames_out = 0;
}


/*Setters*/
void Robot::setVisionData(Mat_<float> &_state, float _confiability)
{
    state_v = _state.clone();
    confiability_v = _confiability;
}

/*Getters*/
int Robot::getId(){
    return id;
}

Mat_<float> Robot::getState(){
    return state.clone();
}

float Robot::getConfiability(){
    return confiability_v;
}

Mat_<float> Robot::getVelocity(){
    return velocity;
}


/*Control methods*/
bool Robot::founded()
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
