#ifndef SafeArray_H
#define SafeArray_H

#include <iostream>
#include <assert.h>
#include "safeArray.h"

using namespace std;
template <class elemType>
class safeArray
{
public:
    safeArray(int, int);
    ~safeArray();

    elemType operator[](int);
    void insert(const elemType &);

private:
    int start;
    int end;
    int counter;
    elemType *safeArr;
};

template <class elemType>
safeArray<elemType>::safeArray(int s, int e) : start(s), end(e)
{
    safeArr = new elemType[abs(e - s)];
    counter = 0;
}

template <class elemType>
safeArray<elemType>::~safeArray()
{
    delete[] safeArr;
}

template <class elemType>
elemType safeArray<elemType>::operator[](int index)
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

template <class elemType>
void safeArray<elemType>::insert(const elemType &value)
{
    safeArr[counter++] = value;
}
#endif