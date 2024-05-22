#pragma once
#include <compare>
// date.h
class Date {
	// data members are encapsulated
	int day_, month_, year_;
public:
	// member functions
	Date(int d, int m, int y) :
		day_{ d },
		month_{ m },
		year_{ y }
	{
	}
	void add_year(int);
	void add_month(int n);
	void add_day(int n);
	// other member functions
	auto operator<=>(const Date& date) const
	{
		auto y = (year_ <=> date.year_);
		if (y < 0)
			return -1;
		else if (y > 0)
			return 1;
		else { // same year
			auto m = (month_ <=> date.month_);
			if (m < 0)
				return -1;
			else if (m > 0)
				return 1;
			else { // same month
				auto d = (day_ <=> date.day_);
				if (d < 0)
					return -1;
				else if (d > 0)
					return 1;
				else
					return 0;
			}
		}
	}
};