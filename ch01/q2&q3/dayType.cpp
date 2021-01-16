#include <iostream>
#include "dayType.h"

dayType::dayType(string d)
{
    setDay(d);
}

void dayType::setDay(string d)
{
    dayNum = getDayNumber(d);
}

void dayType::printDay()
{
    cout << "Day: " << getDayName(dayNum) << endl;
}

string dayType::nextDay()
{
    if (7 == dayNum)
        return getDayName(1);
    return getDayName(dayNum + 1);
}

string dayType::previousDay()
{
    if (1 == dayNum)
        return getDayName(7);
    return getDayName(dayNum - 1);
}

string dayType::calculate(int number)
{
    int d = dayNum;
    for (int i = number; i > 0; i--)
    {
        if (d == 7)
            d = 1;
        else
            d++;
    }

    return getDayName(d);
}

int dayType::getDayNumber(string d)
{
    if ("Saturday" == d)
        return 1;
    else if ("Sunday" == d)
        return 2;
    else if ("Monday" == d)
        return 3;
    else if ("Tuesday" == d)
        return 4;
    else if ("Wednesday" == d)
        return 5;
    else if ("Thursday" == d)
        return 6;
    else if ("Friday" == d)
        return 7;
    else
    {
        cerr << "There is no day with that name" << endl;
        return -1;
    }
}

string dayType::getDayName(int dayNum)
{
    if (1 == dayNum)
        return "Saturday";
    else if (2 == dayNum)
        return "Sunday";
    else if (3 == dayNum)
        return "Monday";
    else if (4 == dayNum)
        return "Tuesday";
    else if (5 == dayNum)
        return "Wednesday";
    else if (6 == dayNum)
        return "Thursday";
    else if (7 == dayNum)
        return "Friday";
    else
    {
        cerr << "There is no day with that name" << endl;
        return "";
    }
}