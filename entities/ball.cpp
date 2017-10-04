#include "ball.h"

/*Constructor*/
Ball::Ball()
{
    pose = Mat_<float>(3,1);
    velocity = Mat_<float>(2,1);

    pose_v = Mat_<float>(3,1);
    confidence_v = 0;
}

Ball::operator BallPackage() const
{
    BallPackage package;
    package.set_x(pose[0][0]);
    package.set_y(pose[1][0]);
    package.set_z(pose[2][0]);
    return package;
}

/*Setters*/
void Ball::setVisionData(visionBall& vision_ball)
{
    Mat_<float> last_pose_v;
    last_pose_v = Mat_<float>(3,1);
    pose_v = vision_ball.pose.clone();
    confidence_v = vision_ball.confidence;

    //calculate velocity
}

/*Getters*/
Mat_<float> Ball::getPose()
{
    return pose.clone();
}

Mat_<float> Ball::getVelocity()
{
    return velocity.clone();
}

float Ball::getConfibility()
{
    return confidence_v;
}

