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
    float confiability_v;

public:
    Ball();

    /*Setters*/
    void setVisionData(Mat_<float> &_state, float _confiability);

    /*Getters*/
    Mat_<float> getState();
    Mat_<float> getVelocity();
    float getConfibility();
};

#endif // BALL_H
