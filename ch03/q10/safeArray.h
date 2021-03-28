#ifndef SafeArray_H
#define SafeArray_H

class safeArray
{
public:
    safeArray(int, int);
    ~safeArray();

    int operator[](int);
    void insert(int);

private:
    int start;
    int end;
    int counter;
    int *safeArr;
};

#endif