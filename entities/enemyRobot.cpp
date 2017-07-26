#include "enemyRobot.h"

EnemyRobot::EnemyRobot(int _id)
{
    Robot:Robot(_id);
    velocity = Mat_<float>(3,1);
}
