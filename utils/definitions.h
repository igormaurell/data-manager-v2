#ifndef DEFINITIONS_H
#define DEFINITIONS_H

//QT includes


//OpenCV includes
#include <opencv/cv.h>
#include <opencv/cxcore.h>
using namespace cv;

//STL includes
#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

//OpenGL includes

//ProtoLIB includes
#include "mensagem_gerente_dados.pb.h"

enum TeamColor{
    Blue, Yellow
};


const int FRAMES_FOUNDED = 4;
const int FRAMES_NOT_FOUNDED = 50;

const int NUM_CAMERAS = 4;

const int MAX_ID_ROBOTS = 12;

const int TEAM_COLOR = Blue;

#endif // DEFINITIONS_H
