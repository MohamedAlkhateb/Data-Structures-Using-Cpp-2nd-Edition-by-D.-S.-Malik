#include "fractionType.h"
#include <iostream>

using namespace std;

fractionType::fractionType(int num1, int num2)
{
    setFraction(num1, num2);
}

void fractionType::setFraction(int num1, int num2)
{
    a = num1;
    if (!num2)
    {
        cerr << "The denominator musn't be zero we initialize it to one" << endl;
        b = 1;
    }
    else
        b = num2;
}

fractionType fractionType::operator+(const fractionType &otherFraction) const
{
    fractionType temp;
    temp.a = a * otherFraction.b + b * otherFraction.a;
    temp.b = b * otherFraction.b;
    return temp;
}
fractionType fractionType::operator-(const fractionType &otherFraction) const
{
    fractionType temp;
    temp.a = (a * otherFraction.b - b * otherFraction.a);
    temp.b = (b * otherFraction.b);
    return temp;
}
fractionType fractionType::operator*(const fractionType &otherFraction) const
{
    fractionType temp;
    temp.a = (a * otherFraction.a);
    temp.b =  (b * otherFraction.b);
    return temp;
}
fractionType fractionType::operator/(const fractionType &otherFraction) const
{
    if (otherFraction.a / otherFraction.b == 0)
        cerr << "The numerator over the denominator musn't be zero";
    fractionType temp;
    temp.a = a * otherFraction.b;
    temp.b = b * otherFraction.a;
    return temp;
}

istream &operator>>(istream &in, fractionType &fraction)
{
    char ch;

    in >> fraction.a;
    in >> ch;
    in >> fraction.b;
    
    return in;
}

ostream &operator<<(ostream &out, const fractionType &fraction)
{
    out << fraction.a << "/" << fraction.b;
    return out;
}
