#ifndef DayType_H
#define DayType_H

#include <string>

using namespace std;

class dayType
{
public:
    dayType(string = "Saturday");
    void setDay(string);
    void printDay();
    string nextDay();
    string previousDay();
    string calculate(int);

private:
    int dayNum;
    int getDayNumber(string);
    string getDayName(int);
};

#endif