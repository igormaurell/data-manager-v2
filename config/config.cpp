#include "config.h"

NetworkConfig Config::network;
ControlConfig Config::control;

NetworkConfig::NetworkConfig()
{
}

void NetworkConfig::load(const json file)
{
    ai_ip = file["ai"]["ip"].get<string>();
    ai_send_port = file["ai"]["send_port"].get<int>();
    ai_receive_port = file["ai"]["receive_port"].get<int>();
    ai = QHostAddress(QString::fromStdString(ai_ip));

    vision_ip = file["vision"]["ip"].get<string>();
    vision_port = file["vision"]["port"].get<int>();
    multi_vision = QHostAddress(QString::fromStdString(vision_ip));

    referee_ip = file["referee"]["ip"].get<string>();
    referee_port = file["referee"]["port"].get<int>();
    multi_referee = QHostAddress(QString::fromStdString(referee_ip));

    mqtt_ip = file["mqtt"]["ip"].get<string>();
    mqtt_port = file["mqtt"]["port"].get<int>();
}

ostream& operator <<(ostream& out, NetworkConfig network){
}

ControlConfig::ControlConfig(): field_side(ControlPackage::Left), team_color(ControlPackage::Yellow), id_gk(0)
{
}

Config::Config()
{

}

void Config::load()
{
    cout<<"CARREGANDO CONFIGURAÇÕES..."<<endl;
    fstream json_file(CONFIG_PATH);
    json json_config;
    json_file >> json_config;

    cout<<"NETWORK..."<<endl;
    network.load(json_config["network"]);
    cout<<"FEITO."<<endl;

    cout<<"CONFIGURAÇÕES CARREGADAS."<<endl;
}
