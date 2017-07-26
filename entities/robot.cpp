#include "robot.h"

/*Constructor*/
Robot::Robot(int _id)
{
    id = _id;

    state = Mat_<float>(3,1);
    state_v = Mat_<float>(3,1);
    confiability_v = 0;

    frames_in = frames_out = 0;
}

/*Seters*/
void Robot::setVisionData(Mat_<float> &_position, float _confiability)
{
    state_v = _position;
    confiability_v = _confiability;
}

void Robot::setFeedbackData(Mat_<float> &_velocity, float _cg, float _bc, float _orientation)
{
    velocity = _velocity;
    capacitor_charge = _cg;
    batery_charge = _bc;
    orientation = _orientation;
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
