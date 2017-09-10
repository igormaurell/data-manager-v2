#ifndef TEAMROBOT_H
#define TEAMROBOT_H
#include "messages_ai_data_manager.pb.h"
#include "robot.h"

enum KickType{
    LOW, HIGH
};

struct feedbackRobot{
    feedbackRobot(): capacitor_charge(0), batery_charge(0), orientation(0) { velocity = Mat_<float>(3,1); }
    Mat_<float> velocity;
    float capacitor_charge;
    float batery_charge;
    float orientation;
};

class TeamRobot: public Robot
{
private:
    /*Final data (from feedback-manager)*/
    float capacitor_charge;
    float batery_charge;
    float orientation;

    /*Final data (from ai-manager)*/
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
    void setFeedbackData(feedbackRobot& feedback_robot);
    void setAIData(AIRobotPackage& ai_robot);

    /*Getters*/
    float getCapacitorCharge();
    float getBateryCharge();
    float getOrientetion();
};

#endif // TEAMROBOT_H
