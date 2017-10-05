#include "enemyRobot.h"

/*Constructor*/
EnemyRobot::EnemyRobot(int _id): Robot(_id){}

/*Setters*/
void EnemyRobot::setVisionData(visionRobot& vision_robot)
{
    pose = vision_robot.pose.clone();
    confidence = vision_robot.confidence;
}
