#ifndef CLOCK_H
#define CLOCK_H
#include "definitions.h"
#include <ctime>
#include <cmath>
using namespace std;

class Clock
{
private:
    map<string, double> timestamps;
    double start;

public:
    Clock();

    void setStartTime();

    void stamp(string _stamper);
    void delStamper(string _stamper);
    void clearTimestamp();

    double getDeltaT(string _stamper1, string _stamper2);
    double getTimestamp(string _stamper);
};

#endif //CLOCK_H
