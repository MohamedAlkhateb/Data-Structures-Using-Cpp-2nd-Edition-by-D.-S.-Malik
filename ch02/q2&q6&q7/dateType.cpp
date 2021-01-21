#include <iostream>
#include "dateType.h"

using namespace std;

dateType::dateType(int month, int day, int year)
{
	setDate(month, day, year);
}

void dateType::setDate(int month, int day, int year)
{
	setMonth(month);
	setYear(year);
	setDay(day);
}

void dateType::setYear(int year)
{
	if (year > 0)
	{
		dYear = year;
	}
	else
	{
		cerr << "Year is not valid we initialize it to 2000" << endl;
		dYear = 2000;
	}
}

void dateType::setDay(int day)
{
	if (day >= 1 && day <= numDaysMonth(dMonth))
	{
		dDay = day;
	}
	else
	{
		cerr << "Day is not valid we initialize it to 1" << endl;
		dDay = 1;
	}
}

void dateType::setMonth(int month)
{
	if (month >= 1 && month <= 12)
	{
		dMonth = month;
	}
	else
	{
		cerr << "Month is not valid we initialize it to 1" << endl;
		dMonth = 1;
	}
}

int dateType::getDay() const
{
	return dDay;
}

int dateType::getMonth() const
{
	return dMonth;
}

int dateType::getYear() const
{
	return dYear;
}

void dateType::printDate() const
{
	cout << dMonth << "-" << dDay << "-" << dYear << endl;
}

bool dateType::isLeepYear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

int dateType::numDaysMonth(int month)
{
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	case 2:
		if (isLeepYear(dYear))
		{
			return 29;
		}
		else
		{
			return 28;
		}
	default:
		cerr << "Month incorrect" << endl;
		return 0;
	}
}

int dateType::daysPassedYear()
{
	int passed = dDay;
	for (int i = dMonth - 1; i >= 1; i--)
	{
		passed += numDaysMonth(i);
	}
	return passed;
}

int dateType::daysRemainingYear()
{
	if (isLeepYear(dYear))
	{
		return 366 - daysPassedYear();
	}
	else
	{
		return 365 - daysPassedYear();
	}
}

void dateType::calculateNewDate(int numDay)
{
	for (int i = 1; i <= numDay; i++)
	{
		if (dDay < numDaysMonth(dMonth))
		{
			dDay++;
		}
		else if (dMonth < 12)
		{
			dMonth++;
			dDay = 1;
		}
		else
		{
			dYear++;
			dMonth = 1;
			dDay = 1;
		}
	}
}