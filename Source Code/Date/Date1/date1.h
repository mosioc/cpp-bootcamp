#pragma once

// date.h
class Date {
	// data members are encapsulated
	int day, month, year;
public:
	// member functions
	void init(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}
	void add_year(int);
	void add_month(int n);
	void add_day(int n);
	// other member functions
};