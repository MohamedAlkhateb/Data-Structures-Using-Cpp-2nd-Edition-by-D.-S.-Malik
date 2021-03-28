#include <iostream>
#include "../q1->q4/arrayListType.h"

using namespace std;

class polynomialType : public arrayListType<double>
{
    friend ostream &operator<<(ostream &, const polynomialType &);
    friend istream &operator>>(istream &, polynomialType &);
    friend polynomialType operator+(const polynomialType &, const polynomialType &);
    friend polynomialType operator-(const polynomialType &, const polynomialType &);

public:
    polynomialType operator*(const polynomialType &);
    polynomialType operator~();

    double operator()(double x);

    polynomialType(int size = 100);
    int min(int x, int y) const;
    int max(int x, int y) const;
};