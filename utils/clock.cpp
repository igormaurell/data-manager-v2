#include "clock.h"

Clock::Clock()
{
    start = clock();
}

void Clock::setStartTime()
{
    start = clock();
    clearTimestamp();
}

void Clock::stamp(string _stamper)
{
    timestamps[_stamper] = (double)(clock()-start);
}
void Clock::delStamper(string _stamper)
{
    timestamps.erase(_stamper);
}
void Clock::clearTimestamp()
{
    timestamps.clear();
}

double Clock::getDeltaT(string _stamper1, string _stamper2)
{
    return abs(timestamps[_stamper1] - timestamps[_stamper2]);
}
double Clock::getTimestamp(string _stamper)
{
    return timestamps[_stamper];
}
