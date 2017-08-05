#ifndef ROBOT_H
#define ROBOT_H

#include "definitions.h"

class Robot
{
private:
    int id; //Id of the robot

    /*Control data*/
    int frames_in; //number of frames inside the field
    int frames_out; //number of frames outside the field

protected:
    /*Final data*/
    Mat_<float> state; //final state (after kalman or particle-filter)
    Mat_<float> velocity; //velocity of a robot (from feedback-manager or position vector difference)
    //final confidence will be a covariance matrix

    /*Vision data*/
    Mat_<float> state_v; //visualized state (from vision-manager)
    float confidence_v; //confidence of visualization (from vision-manager)

public:
    Robot(int id);

    /*Setters*/
    void setVisionData(Mat_<float> _state, float _confidence); //method to set all of the vision data

    /*Getters*/
    int getId();
    Mat_<float> getState();
    float getconfidence();
    Mat_<float> getVelocity();

    /*Control methods*/
    bool found(); //verify if the robot is playing
    void operator ++(); //increases frames_in and put 0 on frames_out
    void operator --(); //increases frames_out and put 0 on frames_in
};

struct visionRobot{
    visionRobot(): found(false), confidence(0.f){}
    float x, y, orientation, confidence;
    bool found;
};

#endif // ROBOT_H
