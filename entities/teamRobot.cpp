#include "teamRobot.h"

/*Constructor*/
TeamRobot::TeamRobot(int _id): Robot(_id)
{
    capacitor_charge = 0;
    batery_charge = 0;
    orientation = 0;
}


/*Setters*/
void TeamRobot::setFeedbackData(Mat_<float> &_velocity, float _cc, float _bc, float _orientation)
{
    velocity = _velocity.clone();
    capacitor_charge = _cc;
    batery_charge = _bc;
    orientation = _orientation;
}


/*Getters*/
float TeamRobot::getCapacitorCharge()
{
    return capacitor_charge;
}

float TeamRobot::getBateryCharge()
{
    return batery_charge;
}

float TeamRobot::getOrientetion()
{
    return orientation;
}
