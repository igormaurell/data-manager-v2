#ifndef CONFIG_H
#define CONFIG_H
#include "json.hpp"
#include "definitions.h"
#include "messages_control.pb.h"

#include <fstream>

using namespace std;
using json = nlohmann::json;

class Config;

class NetworkConfig{
public:
    NetworkConfig();
    void load(const json file);

    friend ostream& operator <<(ostream& out, NetworkConfig network);

    string ai_ip;
    int ai_receive_port;
    int ai_send_port;
    QHostAddress ai;

    string vision_ip;
    int vision_port;
    QHostAddress multi_vision;

    string referee_ip;
    int referee_port;
    QHostAddress multi_referee;

    string mqtt_ip;
    int mqtt_port;
};

class ControlConfig{
    public:
    ControlConfig();

    ControlPackage::FieldSide field_side;
    ControlPackage::TeamColor team_color;
    int id_gk;
};

class Config{
public:
    Config();
    static void load();

    static NetworkConfig network;
    static ControlConfig control;
};

#endif // CONFIG_H
