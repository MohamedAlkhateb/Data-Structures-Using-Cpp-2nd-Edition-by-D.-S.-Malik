#include "clockType.h"

int main()
{
    clockType clock;

    cout << ++clock << endl;
    cout << clock << endl;
    cout << clock++ << endl;
    cout << clock << endl;

    clockType clock2;
    cin >> clock2;

    if (clock == clock2)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not equal" << endl;
    }
}