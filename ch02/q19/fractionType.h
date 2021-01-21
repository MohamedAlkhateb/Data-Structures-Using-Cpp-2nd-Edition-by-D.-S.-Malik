#ifndef FractionType_H
#define FractionType_H

#include <iostream>

using namespace std;

class fractionType
{
    friend ostream &operator<<(ostream &, const fractionType &);
    friend istream &operator>>(istream &, fractionType &);

public:
    void setFraction(int, int);

    fractionType operator+(const fractionType &) const;
    fractionType operator-(const fractionType &) const;
    fractionType operator*(const fractionType &) const;
    fractionType operator/(const fractionType &) const;

    fractionType(int = 1, int = 1);

private:
    int a;
    int b;
};

#endif