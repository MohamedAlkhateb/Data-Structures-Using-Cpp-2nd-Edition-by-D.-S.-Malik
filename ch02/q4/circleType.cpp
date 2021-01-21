#include <iostream>
#include <cmath>
#include "circleType.h"

using namespace std;

circleType::circleType(int r, int x, int y)
{
    radious = r;
}

void circleType::setRadious(int r)
{
    radious = r;
}

void circleType::printRadious()
{
    cout << "Radious = " << radious << endl;
}

void circleType::calculateAndPrintArea()
{
    cout << "Area = " << 3.14 * pow(radious, 2) << endl;
}

void circleType::calculateAndPrintCircumference()
{
    cout << "Circumference = " << 2 * 3.14 * radious << endl;
}