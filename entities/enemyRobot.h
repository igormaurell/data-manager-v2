#ifndef ENEMYROBOT_H
#define ENEMYROBOT_H

#include "robot.h"

class EnemyRobot : public Robot
{
public:
    EnemyRobot(int _id);

    /*Setters*/
    void setVisionData(Mat_<float> &_state, float _confiability);

};

#endif // ENEMYROBOT_H
