#include "classes.h"
int main()
{
	Date today{ 23, 8, 2023 };
	print(today);
	
	Date copy_of_today = today;
	print(copy_of_today);
	copy_of_today = Date{};
	print(copy_of_today);
	Point p;
	print(p);
	p.set_x(1).set_y(42);
	auto copy_of_p = p;
	print(copy_of_p);

	return 0;
}