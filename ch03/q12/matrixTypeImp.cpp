#include "matrixType.h"
#include <assert.h>

matrixType::matrixType(int rows, int columns) : matrixRows(rows), matrixColumns(columns)
{
    initializeMatrix();
}

matrixType matrixType::operator+(matrixType &matrix2)
{
    if (matrixRows != matrix2.matrixRows || matrixColumns != matrix2.matrixColumns)
    {
        cerr << "To add matrices rows and columns must be the same" << endl;
        assert(0);
    }

    matrixType temp(matrixRows, matrixColumns);

    for (int i = 0; i < matrixRows; i++)
    {
        for (int j = 0; j < matrixColumns; j++)
        {
            temp.matrixArray[i][j] = matrixArray[i][j] + matrix2.matrixArray[i][j];
        }
    }

    return temp;
}
matrixType matrixType::operator-(matrixType &matrix2)
{
    if (matrixRows != matrix2.matrixRows || matrixColumns != matrix2.matrixColumns)
    {
        cerr << "To subtract matrices rows and columns must be the same" << endl;
        assert(0);
    }

    matrixType temp(matrixRows, matrixColumns);

    for (int i = 0; i < matrixRows; i++)
    {
        for (int j = 0; j < matrixColumns; j++)
        {
            temp.matrixArray[i][j] = matrixArray[i][j] - matrix2.matrixArray[i][j];
        }
    }

    return temp;
}
matrixType matrixType::operator*(matrixType &matrix2)
{
    if (matrixColumns != matrix2.matrixRows)
    {
        cerr << "To multiple matrices column of the first matrix must equal row of the second matrix" << endl;
        assert(0);
    }

    matrixType temp(matrixRows, matrix2.matrixColumns);

    for (int i = 0; i < matrixRows; i++)
    {
        for (int j = 0; j < matrix2.matrixColumns; j++)
        {
            int sum = 0;
            for (int k = 0; k < matrix2.matrixRows; k++)
            {
                sum += matrixArray[i][k] * matrix2.matrixArray[k][j];
            }
            temp.matrixArray[i][j] = sum;
        }
    }
    return temp;
}

ostream &operator<<(ostream &out, const matrixType &matrix)
{
    out << endl;
    for (int i = 0; i < matrix.matrixRows; i++)
    {
        for (int j = 0; j < matrix.matrixColumns; j++)
        {
            out << matrix.matrixArray[i][j] << " ";
        }
        out << endl;
    }
    return out;
}

istream &operator>>(istream &in, matrixType &matrix)
{
    for (int i = 0; i < matrix.matrixRows; i++)
    {
        for (int j = 0; j < matrix.matrixColumns; j++)
        {
            cout << "matrix[" << i << "]"
                 << "[" << j << "] = ";
            in >> matrix.matrixArray[i][j];
        }
    }
    return in;
}

void matrixType::setMatrix(int row, int columns)
{
    matrixRows = row;
    matrixColumns = columns;
    initializeMatrix();
}

matrixType::~matrixType()
{
    delete[] matrixArray;
}

void matrixType::initializeMatrix()
{
    matrixArray = new double *[matrixRows];
    assert(matrixArray != NULL);

    for (int i = 0; i < matrixRows; i++)
    {
        matrixArray[i] = new double[matrixColumns];
        assert(matrixArray[i] != NULL);
    }

    for (int i = 0; i < matrixRows; i++)
    {
        for (int j = 0; j < matrixColumns; j++)
        {
            matrixArray[i][j] = 0.0;
        }
    }
}

matrixType &matrixType::operator=(const matrixType &otherMatrix)
{
    if (this != &otherMatrix)
    {
        delete[] matrixArray;
        matrixRows = otherMatrix.matrixRows;
        matrixColumns = otherMatrix.matrixColumns;
        initializeMatrix();
        for (int i = 0; i < matrixRows; i++)
        {
            for (int j = 0; j < matrixColumns; j++)
            {
                matrixArray[i][j] = otherMatrix.matrixArray[i][j];
            }
        }
    }

    return *this;
}

matrixType::matrixType(const matrixType &otherMatrix)
{
    matrixRows = otherMatrix.matrixRows;
    matrixColumns = otherMatrix.matrixColumns;
    initializeMatrix();
    for (int i = 0; i < matrixRows; i++)
    {
        for (int j = 0; j < matrixColumns; j++)
        {
            matrixArray[i][j] = otherMatrix.matrixArray[i][j];
        }
    }
}