#include "date5.h"
#include <iostream>

using std::cout;

int main()
{
	Date d1{ 29, 7, 2023 };
	Date d2{ 28, 8, 2023 };

	auto compare_result = (d1 <=> d2);

	if (compare_result < 0)
		cout << "d1 comes before d2\n";
	else if (compare_result == 0)
		cout << "d1 is same as d2\n";
	else
		cout << "d1 comes after d2\n";
	
	return 0;
}