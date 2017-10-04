#ifndef DEFINITIONS_H
#define DEFINITIONS_H

//QT includes
#include <QUdpSocket>

//OpenCV includes
#include <opencv/cv.h>
#include <opencv2/video/tracking.hpp>
using namespace cv;

//STL includes
#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

//OpenGL includes

//ProtoLIB includes
#include "messages_data_manager.pb.h"

enum TeamColor{
    Blue, Yellow
};

const string CONFIG_PATH = "../data-manager-v2/config/config.json";

const int FRAMES_FOUNDED = 5;
const int FRAMES_NOT_FOUNDED = 50;

const int NUM_CAMERAS = 4;

const int NUM_MAX_ROBOTS = 12;

const int TEAM_COLOR = Blue;

#endif // DEFINITIONS_H
