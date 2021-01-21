#include <iostream>
#include "circleType.h"

using namespace std;

int main()
{
    circleType circle(10);

    circle.printRadious();
    circle.printCoordinates();

    circle.calculateAndPrintArea();
    circle.calculateAndPrintCircumference();

    circle.setRadious(20);
    circle.printRadious();
}