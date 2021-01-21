#ifndef DateType_H
#define DateType_H


class dateType
{
public:
    void setDate(int month, int day, int year);
    void setMonth(int);
    void setDay(int);
    void setYear(int);

    int getDay() const;
    int getMonth() const;
    int getYear() const;

    void printDate() const;
    bool isLeepYear(int);
    int numDaysMonth(int);
    int daysPassedYear();
    int daysRemainingYear();
    void calculateNewDate(int);

    dateType(int month = 1, int day = 1, int year = 1900);

private:
    int dMonth;
    int dDay;
    int dYear;
};

#endif