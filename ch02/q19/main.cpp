#include "fractionType.h"


int main()
{
    fractionType x(2, 0);
    fractionType y(2, 4);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    fractionType z = x + y;
    cout << "x + y = " << z << endl;

    cout << "Enter x in form a/b: ";
    cin >> x;
    cout << "Enter y in form a/b: ";
    cin >> y;
    cout << "x - y = " << x - y << endl;
    cout << "x * y = " << x * y << endl;
    cout << "x / y = " << x / y << endl;

}