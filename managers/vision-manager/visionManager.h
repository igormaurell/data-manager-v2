#ifndef VISIONMANAGER_H
#define VISIONMANAGER_H
#include <messages_robocup_ssl_detection.pb.h>
#include <messages_robocup_ssl_geometry.pb.h>
#include <messages_robocup_ssl_wrapper.pb.h>
#include <messages_vision_manager.pb.h>

#include "definitions.h"
#include "ball.h"
#include "enemyRobot.h"
#include "teamRobot.h"

class VisionManager
{
private:
    Ball* ball;
    vector<EnemyRobot*> enemies;
    vector<TeamRobot*> allies;

    visionBall ball_v;
    vector<visionRobot> blue_v;
    vector<visionRobot> yellow_v;

    vector<bool> read_cameras;

    bool allFieldRead();
    void resetVisionData();
    void updateEntities();

public:
    VisionManager(Ball* _ball, vector<EnemyRobot*> _enemies, vector<TeamRobot*> _allies);

    void readVisionData(const SSL_DetectionFrame &camFrame);
};

#endif // VISIONMANAGER_H
