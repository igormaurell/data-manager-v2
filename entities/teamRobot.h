#ifndef TEAMROBOT_H
#define TEAMROBOT_H

#include "robot.h"

class TeamRobot : public Robot
{
private:
    /*Final data (from feedback-manager)*/
    float capacitor_charge;
    float batery_charge;
    float orientation;

public:
    TeamRobot(int _id);

    /*Setters*/
    void setFeedbackData(Mat_<float> &_velocity, float _cg, float _bc, float _orientation);

    /*Getters*/
    float getCapacitorCharge();
    float getBateryCharge();
    float getOrientetion();
};

#endif // TEAMROBOT_H
