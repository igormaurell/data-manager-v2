#ifndef ROBOT_H
#define ROBOT_H

#include "definitions.h"

class Robot
{
private:
    int id;

    /*Vision data*/
    Mat_<float> state; //final state (after kalman or particle-filter)
    Mat_<float> state_v; //visualized state (from vision-manager)
    float confiability_v; //confiability of visualization (from vision-manager)

    /*Feedback data*/
    Mat_<float> velocity;
    float capacitor_charge;
    float batery_charge;
    float orientation;

    /*Control*/
    int frames_in;
    int frames_out;

public:
    Robot(int id);

    /*Seters*/
    void setVisionData(Mat_<float> &_position, float _confiability);

    /*Control functions*/
    bool founded(); //verify if the robot is playing
    void operator ++(); //increases frames_in and put 0 on frames_out
    void operator --(); //increases frames_out and put 0 on frames_in
};

#endif // ROBOT_H
