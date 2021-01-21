#ifndef PointType_H
#define PointType_H

class pointType
{
    public:
        void setPoint(int, int);
        int getX();
        int getY();
        void printCoordinates();

        pointType(int = 0, int = 0);
    private:
        int x_coordinate;
        int y_coordinate;
};

#endif
