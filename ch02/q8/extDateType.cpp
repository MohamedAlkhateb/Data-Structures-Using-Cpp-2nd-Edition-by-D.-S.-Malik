#include <iostream>
#include "extDateType.h"

using namespace std;

extDateType::extDateType(){}
extDateType::extDateType(int month, int day, int year) : dateType(month, day, year) {}

void extDateType::printExtDateType()
{
    cout << months[getMonth()] << " " << getDay() << ", " << getYear() << endl;
}