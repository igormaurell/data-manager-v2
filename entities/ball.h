#ifndef BALL_H
#define BALL_H

#include "definitions.h"

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

    /*Setters*/
    void setVisionData(Mat_<float> _state, float _confidence);

    /*Getters*/
    Mat_<float> getState();
    Mat_<float> getVelocity();
    float getConfibility();
};

struct visionBall{
    visionBall(): confidence(0.f), found(false){}
    float x, y, z, confidence;
    bool found;
};

#endif // BALL_H
