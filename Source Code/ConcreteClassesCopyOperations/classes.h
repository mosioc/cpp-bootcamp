#pragma once

class Point {
	int x, y;
	friend void print(const Point&);
public:
	Point() : x{ 0 }, y{ 0 } {}
	Point(int xx, int yy) : x{ xx }, y{ yy } {}
	Point& set_x(int xx)
	{
		x = xx;
		return *this;
	}
	Point& set_y(int yy)
	{
		y = yy;
		return *this;
	}
};

void print(const Point& p);

class Date {
	int day_, month_, year_;
	static Date default_date;
	friend void print(Date&);
public:
	Date(int dd = 0, int mm = 0, int yy = 0) : 
		day_{ dd != 0 ? dd : default_date.day_ },
		month_{ mm != 0 ? mm : default_date.month_ },
		year_{ yy != 0 ? yy : default_date.year_ }
	{}
	// ...
	static void set_default(int, int, int);
};


void print(Date& p);