#include "teamRobot.h"

TeamRobot::TeamRobot(int _id)
{
    Robot::Robot(_id);

    velocity = Mat_<float>(3,1);
    capacitor_charge = 0;
    batery_charge = 0;
    orientation = 0;
}
