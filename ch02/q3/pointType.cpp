#include <iostream>
#include "pointType.h"

using namespace std;

pointType::pointType(int x, int y)
{
    setPoint(x, y);
}

void pointType::setPoint(int x, int y)
{
    x_coordinate = x;
    y_coordinate = y;
}

int pointType::getX()
{
    return x_coordinate;
}

int pointType::getY()
{
    return y_coordinate;
}

void pointType::printCoordinates()
{
    cout << "(" << x_coordinate << ", " << y_coordinate << ")" << endl;
}