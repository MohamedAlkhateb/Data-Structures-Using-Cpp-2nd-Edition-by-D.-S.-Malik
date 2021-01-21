#include <iostream>
#include "extDateType.h"

using namespace std;

int main()
{
    extDateType date;
    date.printDate();
    date.printExtDateType();

    date.setDate(9, 24, 2000);
    date.printExtDateType();
}
