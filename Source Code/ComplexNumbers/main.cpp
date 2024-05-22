#include "complex.h"
#include <iostream>
using namespace std;
int main()
{
	Complex c1{ 1.0, 1 };
	Complex c2{ 2, 2 };
	auto c = c1 + c1 / c2;
	cout << c << '\n';
	
	while (cin >> c) {
		cout << c + 1 << '\n';
	}

	return 0;
}