#include "ball.h"

/*Constructor*/
Ball::Ball()
{
    state = Mat_<float>(3,1);
    velocity = Mat_<float>(2,1);

    state_v = Mat_<float>(3,1);
    confiability_v = 0;
}

/*Setters*/
void Ball::setVisionData(Mat_<float> &_state, float _confiability)
{
    Mat_<float> last_state_v;
    last_state_v = Mat_<float>(3,1);
    state_v = _state.clone();
    confiability_v = _confiability;

    //velocity
}

/*Getters*/
Mat_<float> Ball::getState()
{
    return state.clone();
}

Mat_<float> Ball::getVelocity()
{
    return velocity.clone();
}

float Ball::getConfibility()
{
    return confiability_v;
}

