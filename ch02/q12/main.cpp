#include <iostream>
#include "complexType.h"
using namespace std;
int main()
{
    complexType num1(23, 34);
    complexType num2;
    complexType num3;
    cout << "Line 9: Num1 = " << num1 << endl;
    cout << "Line 10: Num2 = " << num2 << endl;
    cout << "Line 11: Enter the complex number " << "in the form (a, b): ";
    cin >> num2;
    cout << endl;
    cout << "Line 14: New value of num2 = " << num2 << endl;
    num3 = num1 + num2;
    cout << "Line 16: Num3 = " << num3 << endl;
    cout << "Line 17: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << "Line 18: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << "Line 19: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << "Line 20: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    return 0;
}