#include <iostream>
#include "dayType.h"

int main()
{
    dayType day("Sunday");
    day.printDay();
    cout << "Next Day: " << day.nextDay() << endl;
    cout << "Prevoius Day: " << day.previousDay() << endl;
    day.setDay("Tuesday");
    cout << "The day after calculation: " << day.calculate(13) << endl;
}