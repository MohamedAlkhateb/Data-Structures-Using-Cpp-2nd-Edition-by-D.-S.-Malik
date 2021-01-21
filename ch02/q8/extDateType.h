#ifndef ExtDateType_H
#define ExtDateType_H

#include <string>
#include "../q2&q6&q7/dateType.h"

using namespace std;

class extDateType : public dateType
{
public:
    void printExtDateType();

    extDateType();
    extDateType(int, int, int);

private:
    string months[13] = {"", "January", "February", "March", "April", "May", "June",
                         "July", "August", "September", "October", "November", "December"};
};

#endif