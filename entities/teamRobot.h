#ifndef TEAMROBOT_H
#define TEAMROBOT_H
#include "messages_ai_data_manager.pb.h"
#include "robot.h"

enum KickType{
    LOW, HIGH
};

struct feedbackRobot{
    feedbackRobot(): capacitor_charge(0.f), batery_charge(0.f), time(0.f), orientation(0.f) { state = Mat_<float>(5,1); }
    Mat_<float> state;
    float capacitor_charge;
    float batery_charge;
    float time;
    float orientation;
};

class TeamRobot: public Robot
{
private:
    /*kalman data*/
    Mat_<float> observation;
    Mat_<float> deltat_state;
    Mat H;

    /*feedback-manager data*/
    float capacitor_charge;
    float batery_charge;

    /*ai-manager data*/
    string skill;
    string tactic;
    pair<float, float> target;
    vector< pair<float, float> > path;
    Mat_<float> command;
    KickType kick_type;
    float kick_power;
    float dribbler_velocity;

public:
    TeamRobot(int _id);

    /*Setters*/
    void setVisionData(visionRobot& vision_robot);
    void setFeedbackData(feedbackRobot& feedback_robot);
    void setAIData(AIRobotPackage& ai_robot);

    /*Getters*/
    float getCapacitorCharge();
    float getBateryCharge();
};

#endif // TEAMROBOT_H
