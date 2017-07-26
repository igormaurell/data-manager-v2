#ifndef TEAMROBOT_H
#define TEAMROBOT_H

#include "robot.h"

class TeamRobot : public Robot
{
private:
    /*Feedback data*/
    Mat_<float> velocity;
    float capacitor_charge;
    float batery_charge;
    float orientation;

public:
    TeamRobot(int _id);
};

#endif // TEAMROBOT_H
