#include <iostream>
#include "romanType.h"

romanType::romanType(string number) : romanNumeral(number), decimalNumber(0) {}

void romanType::convertAndStore()
{
    int counter = 0;

    while (romanNumeral[counter])
    {
        int c1, c2;
        c1 = convertCharacterToNumber(romanNumeral[counter]);
        if (romanNumeral[counter + 1])
        {
            c2 = convertCharacterToNumber(romanNumeral[counter + 1]);
        }
        else
        {
            decimalNumber += c1;
            counter++;
            continue;
        }

        if (c1 == -1 || c2 == -1)
        {
            return;
        }

        if (c1 >= c2)
        {
            decimalNumber += c1;
            counter++;
        }
        else
        {
            decimalNumber += c2 - c1;
            counter += 2;
        }
    }
}

void romanType::printRomanNumeral()
{
    cout << "RomanNumeral = " << romanNumeral << endl;
}

void romanType::printDecimalNumber()
{
    cout << "DecimalNumber = " << decimalNumber << endl;
}

int romanType::convertCharacterToNumber(char c)
{
    switch (c)
    {
    case 'M':
        return 1000;
        break;
    case 'D':
        return 500;
        break;
    case 'C':
        return 100;
        break;
    case 'L':
        return 50;
        break;
    case 'X':
        return 10;
        break;
    case 'V':
        return 5;
        break;
    case 'I':
        return 1;
        break;
    default:
        cerr << "Wrong Character" << endl;
        return -1;
    }
}