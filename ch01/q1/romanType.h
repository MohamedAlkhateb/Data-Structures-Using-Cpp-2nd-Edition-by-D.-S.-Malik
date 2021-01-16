#ifndef RomanType_H
#define RomanType_H

#include <string>

using namespace std;

class romanType
{
public:
    romanType(string);
    void convertAndStore();
    void printRomanNumeral();
    void printDecimalNumber();

private:
    string romanNumeral;
    int decimalNumber;
    int convertCharacterToNumber(char);
};

#endif
