#ifndef BALL_H
#define BALL_H

#include "definitions.h"
#include "messages_vision_manager.pb.h"

struct visionBall{
    visionBall(): confidence(0.f), found(false){ state = Mat_<float>(3,1); }
    Mat_<float> state;
    float confidence;
    bool found;
};

class Ball
{
private:
    /*Final data*/
    Mat_<float> state;
    Mat_<float> velocity;

    /*Vision data*/
    Mat_<float> state_v;
    float confidence_v;

public:
    Ball();

    operator BallPackage() const;

    /*Setters*/
    void setVisionData(visionBall& vision_ball);

    /*Getters*/
    Mat_<float> getState();
    Mat_<float> getVelocity();
    float getConfibility();
};
#endif // BALL_H
