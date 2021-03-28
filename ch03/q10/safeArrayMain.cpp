#include <iostream>
#include "safeArray.h"

using namespace std;

int main()
{
    safeArray list(2, 13);
    safeArray yourList(-5, 9);

    for (int i = 2; i < 13; i++)
    {
        list.insert(i);
    }
    for (int i = 2; i < 13; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;

    for (int i = -5; i < 9; i++)
    {
        yourList.insert(i);
    }
    for (int i = -5; i < 9; i++)
    {
        cout << yourList[i] << " ";
    }
    cout << endl;
}