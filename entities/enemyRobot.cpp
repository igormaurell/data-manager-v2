#include "enemyRobot.h"

/*Constructor*/
EnemyRobot::EnemyRobot(int _id): Robot(_id){}

/*Setters*/
void EnemyRobot::setVisionData(Mat_<float> &_state, float _confiability)
{
    Mat_<float> last_state_v;
    last_state_v = state_v.clone();

    EnemyRobot::setVisionData(_state, _confiability);

    //velocity
}
