#include <iostream>

using namespace std;

class clockType
{
    friend ostream &operator<<(ostream &, clockType &);
    friend istream &operator>>(istream &, clockType &);
    friend clockType& operator++(clockType &);
    friend clockType& operator++(clockType &, int); 

public:
    void setTime(int hours, int minutes, int seconds);
    void getTime(int &hours, int &minutes, int &seconds) const;
    void printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool operator==(const clockType &otherClock) const;

    clockType(int hours, int minutes, int seconds);

    clockType();

private:
    int hr;
    int min;
    int sec;
};
