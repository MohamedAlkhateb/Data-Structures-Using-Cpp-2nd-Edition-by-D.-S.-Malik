#include "romanType.h"

int main()
{
    romanType romanNumeral1("MCXIV");
    romanNumeral1.convertAndStore();
    romanNumeral1.printDecimalNumber();
    romanType romanNumeral2("CCCLIX");
    romanNumeral2.convertAndStore();
    romanNumeral2.printDecimalNumber();
    romanType romanNumeral3("MDCLXVI");
    romanNumeral3.convertAndStore();
    romanNumeral3.printDecimalNumber();
}