#include "max.h"
#include <iostream>

int const c = 42;

using std::cin; using std::cout;

int main()
{
	int const c = 42;
	int i;
	cin >> i;
	cout << ::max(i, c) << '\n'; // 1
	int& ir = i;
	auto m1 = ::max(i, ir);

	double d = 0.4;
	auto m = ::max(c, d); // error
	std::string s{ "Hello" };
	auto m3 = ::max("Hello", s); // error
	return 0;
}