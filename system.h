#ifndef SYSTEM_H
#define SYSTEM_H
#include <QObject>

#include "config.h"
#include "definitions.h"
#include "visionManager.h"
#include "aiManager.h"
#include "feedbackManager.h"
#include "messages_data_manager.pb.h"
#include "teamRobot.h"
#include "enemyRobot.h"
#include "ball.h"

class System: public QObject
{
    Q_OBJECT
private:
    QUdpSocket *ai_send;
    QUdpSocket *ai_receive;
    QUdpSocket *vision;
    QUdpSocket *referee;

    Ball *ball;
    vector<TeamRobot*> team;
    vector<EnemyRobot*> enemy;

    AIManager *ai_manager;
    FeedbackManager *feedback_manager;
    VisionManager *vision_manager;

    SSL_Referee referee_data;

private slots:
    void readAIData();
    void readVisionData();
    void readRefereeData();

public:
    System();
    ~System();

    void sendAIData();
    void resetRefereeData();

    void start();
    void stop();
};

#endif // SYSTEM_H
