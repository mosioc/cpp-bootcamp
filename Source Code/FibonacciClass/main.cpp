#include "fibonacci.h"
#include <iostream>

using namespace std;
int main()
{
	Fibonacci f{ 9 };
	cout << f.get_value() << '\n';
	return 0;
}