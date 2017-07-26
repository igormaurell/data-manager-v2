#ifndef ENEMYROBOT_H
#define ENEMYROBOT_H

#include "robot.h"

class EnemyRobot : public Robot
{
private:
    Mat_<float> velocity;
public:
    EnemyRobot(int _id);
};

#endif // ENEMYROBOT_H
