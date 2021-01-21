#include <iostream>
#include "clockType.h"

using namespace std;

void clockType::setTime(int hours, int minutes, int seconds)
{
	if (0 <= hours && hours < 24)
		hr = hours;
	else
		hr = 0;

	if (0 <= minutes && minutes < 60)
		min = minutes;
	else
		min = 0;

	if (0 <= seconds && seconds < 60)
		sec = seconds;
	else
		sec = 0;
}

void clockType::getTime(int &hours, int &minutes, int &seconds) const
{
	hours = hr;
	minutes = min;
	seconds = sec;
}

void clockType::incrementHours()
{
	hr++;
	if (hr > 23)
		hr = 0;
}

void clockType::incrementMinutes()
{
	min++;
	if (min > 59)
	{
		min = 0;
		incrementHours();
	}
}

void clockType::incrementSeconds()
{
	sec++;

	if (sec > 59)
	{
		sec = 0;
		incrementMinutes();
	}
}

void clockType::printTime() const
{
	if (hr < 10)
		cout << "0";
	cout << hr << ":";

	if (min < 10)
		cout << "0";
	cout << min << ":";

	if (sec < 10)
		cout << "0";
	cout << sec;
}

bool clockType::operator==(const clockType &otherClock) const
{
	return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
}

clockType &operator++(clockType &clock)
{
	clock.incrementSeconds();
	return clock;
}

clockType &operator++(clockType &clock, int)
{
	static clockType temp = clock;
	clock.incrementSeconds();
	return temp;
}

clockType::clockType(int hours, int minutes, int seconds)
{
	if (0 <= hours && hours < 24)
		hr = hours;
	else
		hr = 0;

	if (0 <= minutes && minutes < 60)
		min = minutes;
	else
		min = 0;

	if (0 <= seconds && seconds < 60)
		sec = seconds;
	else
		sec = 0;
}

clockType::clockType()
{
	hr = 0;
	min = 0;
	sec = 0;
}

ostream &operator<<(ostream &out, clockType &clock)
{
	clock.printTime();
	return out;
}

istream &operator>>(istream &in, clockType &clock)
{
	cout << "Enter hour minute second: ";
	int s, m, h;
	in >> s >> m >> h;
	clock.setTime(h, m, s);
	return in;
}