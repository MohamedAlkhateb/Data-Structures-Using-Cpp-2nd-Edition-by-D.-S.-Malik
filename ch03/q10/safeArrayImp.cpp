#include <iostream>
#include <assert.h>
#include "safeArray.h"

using namespace std;

safeArray::safeArray(int s, int e) : start(s), end(e)
{
    safeArr = new int[abs(e - s)];
    counter = 0;
}

safeArray::~safeArray()
{
    delete[] safeArr;
}

int safeArray::operator[](int index)
{
    if (index < start || index >= end)
    {
        cerr << "Index is out of range" << endl;
        assert(0);
    }
    else
    {
        int loc = 0;

        for (int i = start; i < end; i++)
        {
            if (i == index)
            {
                break;
            }
            loc++;
        }
        return safeArr[loc];
    }
}

void safeArray::insert(int value)
{
    safeArr[counter++] = value;
}