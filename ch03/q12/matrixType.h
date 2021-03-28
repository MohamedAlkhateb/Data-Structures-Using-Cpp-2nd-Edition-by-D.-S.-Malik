#ifndef Matrix_H
#define Matrix_H

#include <iostream>

using namespace std;

class matrixType
{
    friend ostream &operator<<(ostream &, const matrixType &);
    friend istream &operator>>(istream &, matrixType &);

public:
    matrixType(int, int);
    matrixType(const matrixType &);
    ~matrixType();

    matrixType operator+(matrixType &);
    matrixType operator-(matrixType &);
    matrixType operator*(matrixType &);
    matrixType &operator=(const matrixType &);

    void setMatrix(int, int);

private:
    int matrixRows;
    int matrixColumns;
    double **matrixArray;
    void initializeMatrix();
};

#endif