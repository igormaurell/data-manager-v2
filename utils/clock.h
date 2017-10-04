#ifndef CLOCK_H
#define CLOCK_H
#include <iostream>
#include <map>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;

class Clock
{
private:
    static map<string, double> timestamps;
    static double start;

public:
    Clock();

    static void setStartTime();

    static void stamp(string _stamper);
    static void delStamper(string _stamper);
    static void clearTimestamp();

    static double getDeltaT(string _stamper1, string _stamper2);
    static double getTimestamp(string _stamper);
};

#endif //CLOCK_H
