#include "ball.h"

/*Constructor*/
Ball::Ball()
{
    state = Mat_<float>(3,1);
    velocity = Mat_<float>(2,1);

    state_v = Mat_<float>(3,1);
    confidence_v = 0;
}

Ball::operator BallPackage() const
{
    BallPackage package;
    package.set_x(state[0][0]);
    package.set_y(state[1][0]);
    package.set_z(state[2][0]);
    return package;
}

/*Setters*/
void Ball::setVisionData(visionBall& vision_ball)
{
    Mat_<float> last_state_v;
    last_state_v = Mat_<float>(3,1);
    state_v = vision_ball.state.clone();
    confidence_v = vision_ball.confidence;

    //calculate velocity
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
    return confidence_v;
}

