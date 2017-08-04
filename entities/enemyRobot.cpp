#include "enemyRobot.h"

/*Constructor*/
EnemyRobot::EnemyRobot(int _id): Robot(_id){}

/*Setters*/
void EnemyRobot::setVisionData(Mat_<float> &_state, float _confidence)
{
    Mat_<float> last_state_v;
    last_state_v = state_v.clone();

    EnemyRobot::setVisionData(_state, _confidence);

    //velocity
}
