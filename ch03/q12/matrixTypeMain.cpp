#include "matrixType.h"

int main()
{
    matrixType matrix(3, 3), matrix2(3, 3);

    cout << "Enter the values of the matrix: " << endl;
    cin >> matrix;
    cout << "Enter the values of the matrix2: " << endl;
    cin >> matrix2;

    cout << "matrix + matrix2" << matrix + matrix2 << endl;
    cout << "matrix - matrix2" << matrix - matrix2 << endl;

    matrix.setMatrix(3, 2);
    matrix2.setMatrix(2, 3);

    cout << "Enter the values of the matrix: " << endl;
    cin >> matrix;
    cout << "Enter the values of the matrix2: " << endl;
    cin >> matrix2;

    cout << "matrix * matrix2" << matrix * matrix2;

    matrix2 = matrix;
    cout << "matrix: " << matrix << endl;
    cout << "matrix2: " << matrix2 << endl;

    matrixType matrix3(matrix);
    cout << "matrix3: " << matrix3 << endl;
}