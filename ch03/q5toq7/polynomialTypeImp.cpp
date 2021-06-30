#include "polynomialType.h"
#include <cmath>

polynomialType::polynomialType(int size)
    : arrayListType<double>(size)
{
    length = size;
    for (int i = 0; i < size; i++)
        list[i] = 0;
}

double polynomialType::operator()(double x)
{
    double value = 0.0;
    for (int i = 0; i < length; i++)
    {
        if (list[i] != 0.0)
            value = value + list[i] * pow(x, i);
    }
    return value;
}

polynomialType operator+(const polynomialType &left, const polynomialType &right)
{
    int size = max(left.length, right.length);
    polynomialType temp(size); //polynomial to store the sum
    for (int i = 0; i < min(left.length, right.length); i++)
        temp.list[i] = left.list[i] + right.list[i];
    if (size == left.length)
        for (int i = min(left.length, right.length); i < left.length; i++)
            temp.list[i] = left.list[i];
    else
        for (int i = min(left.length, right.length); i < right.length;
             i++)
            temp.list[i] = right.list[i];
    return temp;
}

polynomialType operator-(const polynomialType &left, const polynomialType &right)
{
    int size = max(left.length, right.length);
    polynomialType temp(size); //polynomial to store the difference
    for (int i = 0; i < min(left.length, right.length); i++)
        temp.list[i] = left.list[i] - right.list[i];
    if (size == left.length)
        for (int i = min(left.length, right.length); i < left.length; i++)
            temp.list[i] = left.list[i];
    else
        for (int i = min(left.length, right.length); i < right.length;
             i++)
            temp.list[i] = -right.list[i];
    return temp;
}

polynomialType polynomialType::operator*(const polynomialType &right)
{
    int size = length * right.length;
    polynomialType temp(size);

    int firstElementNotZero = 0;

    for (int i = 0; i < length; i++)
    {
        if (list[i])
        {
            firstElementNotZero = i;
            break;
        }
    }
    if (firstElementNotZero != length)
    {
        for (int j = 0; j < right.length; j++)
        {
            temp.list[firstElementNotZero + j] = list[firstElementNotZero] * right.list[j];
        }

        for (int i = firstElementNotZero + 1; i < length; i++)
        {
            if (list[i])
            {
                polynomialType temp2(size);

                for (int j = 0; j < right.length; j++)
                {
                    if (right.list[j])
                        temp2.list[i + j] = list[i] * right.list[j];
                }
                temp = temp + temp2;
            }
        }
    }

    return temp;
}

int polynomialType::min(int x, int y) const
{
    if (x <= y)
        return x;
    else
        return y;
}

int polynomialType::max(int x, int y) const
{
    if (x >= y)
        return x;
    else
        return y;
}

ostream &operator<<(ostream &os, const polynomialType &p)
{
    int indexFirstNonzeroCoeff = 0;
    for (int i = 0; i < p.length; i++) //determine the index of the
        //first nonzero coefficient
        if (p.list[i] != 0.0)
        {
            indexFirstNonzeroCoeff = i;
            break;
        }
    if (indexFirstNonzeroCoeff < p.length)
    {
        if (indexFirstNonzeroCoeff == 0)
            os << p.list[indexFirstNonzeroCoeff] << " ";
        else
            os << p.list[indexFirstNonzeroCoeff] << "x^"
               << indexFirstNonzeroCoeff << " ";
        for (int i = indexFirstNonzeroCoeff + 1; i < p.length; i++)
        {
            if (p.list[i] != 0.0)
            {
                if (p.list[i] >= 0.0)
                    os << "+ " << p.list[i] << "x^" << i << " ";
                else
                    os << "- " << -p.list[i] << "x^" << i << " ";
            }
        }
    }
    else
        os << "0";
    return os;
}

istream &operator>>(istream &is, polynomialType &p)
{
    cout << "The degree of this polynomial is: "
         << p.length - 1 << endl;
    for (int i = 0; i < p.length; i++)
    {
        cout << "Enter the coefficient of x^" << i << ": ";
        is >> p.list[i];
    }
    return is;
}

polynomialType polynomialType::operator~()
{
    polynomialType temp(length - 1);

    for (int i = 0; i < length - 1; i++)
    {
        temp.list[i] = list[i + 1] * (i + 1);
    }
    return temp;
}
