#ifndef ROBOT_H
#define ROBOT_H

#include "messages_vision_manager.pb.h"
#include "definitions.h"

struct visionRobot{
    visionRobot(): found(false), confidence(0.f){ pose = Mat_<float>(3,1); }
    Mat_<float> pose;
    float confidence;
    bool found;
};

class Robot
{
private:
    int id; //Id of the robot

    /*Control data*/
    int frames_in; //number of frames inside the field
    int frames_out; //number of frames outside the field

protected:
    /*Final data*/
    Mat_<float> pose; //final pose (after kalman or particle-filter)
    Mat_<float> velocity; //velocity of a robot (from feedback-manager or position vector difference)
    //final confidence will be a covariance matrix

    /*vision-manager data*/
    Mat_<float> pose_v; //visualized pose (from vision-manager)
    float confidence_v; //confidence of visualization (from vision-manager)

public:
    Robot(int id);

    operator RobotPackage() const;

    /*Setters*/
    void setVisionData(visionRobot &vision_robot); //method to set all of the vision data

    /*Getters*/
    int getId();
    Mat_<float> getPose();
    float getconfidence();
    Mat_<float> getVelocity();

    /*Control methods*/
    bool found(); //verify if the robot is playing
    void operator ++(); //increases frames_in and put 0 on frames_out
    void operator --(); //increases frames_out and put 0 on frames_in
};

#endif // ROBOT_H
