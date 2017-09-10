#include "enemyRobot.h"

/*Constructor*/
EnemyRobot::EnemyRobot(int _id): Robot(_id){}

/*Setters*/
void EnemyRobot::setVisionData(visionRobot& vision_robot)
{
    Mat_<float> last_state_v;
    last_state_v = state_v.clone();

    Robot::setVisionData(vision_robot);

    //calculate velocity
}
