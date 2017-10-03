#include "clock.h"
map<string, double> Clock::timestamps;
double Clock::start;

Clock::Clock()
{
    start = -1;
}

void Clock::setStartTime()
{
    Clock::start = clock();
    clearTimestamp();
    cout<<"Iniciando ciclo de relógio. Start: "<<start<<endl;
}

void Clock::stamp(string _stamper)
{
    if(start!=-1) {
        Clock::timestamps[_stamper] = (double)(clock()-start);
        cout<<"Tempo marcado: <"<<_stamper<<", "<<clock()-start<<">"<<endl;
    }
    else cout<<"Error: start ainda nao foi setado."<<endl;
}
void Clock::delStamper(string _stamper)
{
    Clock::timestamps.erase(_stamper);
}
void Clock::clearTimestamp()
{
    Clock::timestamps.clear();
}

double Clock::getDeltaT(string _stamper1, string _stamper2)
{
    return abs(Clock::timestamps[_stamper1] - Clock::timestamps[_stamper2]);
}
double Clock::getTimestamp(string _stamper)
{
    return Clock::timestamps[_stamper];
}
