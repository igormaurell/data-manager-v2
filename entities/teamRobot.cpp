#include "teamRobot.h"

/*Constructor*/
TeamRobot::TeamRobot(int _id): Robot(_id),capacitor_charge(0.f), batery_charge(0.f), orientation(0.f),
    skill(""), tactic(""), kick_type(LOW), kick_power(0.0), dribbler_velocity(0.0)
{
    state = Mat_<float>(9,1);
    deltat_state = Mat_<float>(9,1);
    command = Mat_<float>(3,1);
}

/*Setters*/
void TeamRobot::setVisionData(visionRobot &vision_robot)
{
    for(int i = 0 ; i < 3 ; i++) state[i][0]= vision_robot.pose[i-3][0];
    for(int i = 0 ; i < 3 ; i++) deltat_state[i][0]= vision_robot.time;
}
void TeamRobot::setFeedbackData(feedbackRobot& feedback_robot)
{
    for(int i = 3 ; i < state.rows ; i++) state[i][0]= feedback_robot.state[i-3][0];
    for(int i = 3 ; i < deltat_state.rows ; i++) deltat_state[i][0]= feedback_robot.time;
    capacitor_charge = feedback_robot.capacitor_charge;
    batery_charge = feedback_robot.batery_charge;
}
void TeamRobot::setAIData(AIRobotPackage& ai_robot)
{
    skill = ai_robot.skill();
    tactic = ai_robot.tactic();
    target = make_pair(ai_robot.target_x(), ai_robot.target_y());

    int nodes = ai_robot.path_planning().x_size();
    PathPlanningPackage path_pack = ai_robot.path_planning();
    for(int i = 0 ; i < nodes ; i++) {
        path.push_back(make_pair(path_pack.x(i), path_pack.y(i)));
    }

    command[0][0] = ai_robot.velocity_x();
    command[1][0] = ai_robot.velocity_y();
    command[2][0] = ai_robot.velocity_theta();

    if(ai_robot.low_kick()) {
        kick_type = LOW;
        kick_power = ai_robot.low_kick();
    }
    else if(ai_robot.high_kick()) {
        kick_type = HIGH;
        kick_power = ai_robot.high_kick();
    }
    else {
        kick_type = LOW;
        kick_power = 0.0;
    }

    dribbler_velocity = ai_robot.dribbler();
}

/*Getters*/
float TeamRobot::getCapacitorCharge()
{
    return capacitor_charge;
}

float TeamRobot::getBateryCharge()
{
    return batery_charge;
}

float TeamRobot::getOrientetion()
{
    return orientation;
}
