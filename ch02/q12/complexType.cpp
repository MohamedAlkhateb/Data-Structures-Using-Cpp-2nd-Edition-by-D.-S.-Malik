#include "complexType.h"
#include <cmath>

ostream &operator<<(ostream &osObject, const complexType &complex)
{
    osObject << "(";
    osObject << complex.realPart;
    osObject << ", ";
    osObject << complex.imaginaryPart;
    osObject << ")";
    return osObject;
}

istream &operator>>(istream &isObject, complexType &complex)
{
    char ch;

    isObject >> ch;
    isObject >> complex.realPart;
    isObject >> ch;
    isObject >> complex.imaginaryPart;
    isObject >> ch;
    return isObject;
}

bool complexType::operator==(const complexType &otherComplex) const
{
    return (realPart == otherComplex.realPart &&
            imaginaryPart == otherComplex.imaginaryPart);
}

complexType::complexType(double real, double imag)
{
    realPart = real;
    imaginaryPart = imag;
}

void complexType::setComplex(const double &real,
                             const double &imag)
{
    realPart = real;
    imaginaryPart = imag;
}

void complexType::getComplex(double &real, double &imag) const
{
    real = realPart;
    imag = imaginaryPart;
}

complexType complexType::operator+(const complexType &otherComplex) const
{
    complexType temp;
    temp.realPart = realPart + otherComplex.realPart;
    temp.imaginaryPart = imaginaryPart + otherComplex.imaginaryPart;
    return temp;
}

complexType complexType::operator-(const complexType &otherComplex) const
{
    complexType temp;
    temp.realPart = realPart - otherComplex.realPart;
    temp.imaginaryPart = imaginaryPart - otherComplex.imaginaryPart;
    return temp;
}

complexType complexType::operator*(const complexType &otherComplex) const
{
    complexType temp;
    temp.realPart = (realPart * otherComplex.realPart) -
                    (imaginaryPart * otherComplex.imaginaryPart);
    temp.imaginaryPart = (realPart * otherComplex.imaginaryPart) + (imaginaryPart * otherComplex.realPart);
    return temp;
}

complexType complexType::operator/(const complexType &otherComplex) const
{
    if (!otherComplex.realPart && !otherComplex.imaginaryPart)
    {
        cerr << "realPart and imaginaryPart must not be zero ";
        return otherComplex;
    }
    complexType temp;
    temp.realPart = (realPart * otherComplex.realPart) + (imaginaryPart * otherComplex.imaginaryPart) /
                    (pow(otherComplex.realPart, 2) + pow(otherComplex.imaginaryPart, 2));
    temp.imaginaryPart = (-(realPart * otherComplex.imaginaryPart) + (imaginaryPart * otherComplex.realPart)) /
                    (pow(otherComplex.realPart, 2) + pow(otherComplex.imaginaryPart, 2));
    return temp;
}