#include <iostream>
#include "pointType.h"

using namespace std;

int main()
{
    pointType point;
    point.printCoordinates();

    point.setPoint(3, 5);

    cout << "(" << point.getX() << ", " << point.getY() << ")" << endl;
}