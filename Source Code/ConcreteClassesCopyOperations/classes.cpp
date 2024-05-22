#include "classes.h"
#include <iostream>

using std::cout;

Date Date::default_date{ 1, 1, 1970 }; // UNIX epoch time

void Date::set_default(int d, int m, int y)
{
	default_date = Date{ d, m, y };
}

void print(Date& d)
{
	cout << '(' << d.day_ << ", " << d.month_ << ", " << d.year_ << ")\n";
}

void print(const Point& p)
{
	cout << '(' << p.x << ", " << p.y << ")\n";
}