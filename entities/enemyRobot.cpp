#include "enemyRobot.h"

/*Constructor*/
EnemyRobot::EnemyRobot(int _id): Robot(_id)
{
    state = Mat_<float>(3,1,0.f);
}

/*Setters*/
void EnemyRobot::setVisionData(visionRobot& vision_robot)
{
    cout<<"IN"<<endl;
    cout<<vision_robot.pose[0]<<" "<<vision_robot.pose[1]<<" "<<vision_robot.pose[2]<<endl;
    state = vision_robot.pose.clone();
    confidence = vision_robot.confidence;
}
