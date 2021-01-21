#ifndef CircleType_H
#define CircleType_H

#include "../q3/pointType.h"

class circleType : public pointType
{
    public:
        void setRadious(int);
        void printRadious();
        void calculateAndPrintArea();
        void calculateAndPrintCircumference();

        circleType(int = 1, int = 0, int = 0);
    private:
        int radious;
};

#endif