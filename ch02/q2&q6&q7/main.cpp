#include <iostream>
#include "dateType.h"

using namespace std;

int main()
{
    dateType date(15, 100, 0);
    date.printDate();

    date.setDate(2, 29, 2000);
    date.printDate();

    date.setDate(2, 29, 2001);
    date.printDate();

    date.setDate(15, 100, 0);
    cout << "Month = " << date.getMonth() << " Day = " << date.getDay() << " year = " << date.getYear() << endl;

    date.setDate(3, 18, 2011);
    cout << date.daysPassedYear() << endl;
    cout << date.daysRemainingYear() << endl;
    date.setDate(3, 18, 2011);
    date.calculateNewDate(25);
    date.printDate();
}