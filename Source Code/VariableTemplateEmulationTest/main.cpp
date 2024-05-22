#include "my_pi.h"
#include <iostream>
#include <utility>

using std::cout; using std::pair;

extern pair<double, double> f();

int main()
{
	auto ret = f();
	cout << ret.first << '\t' << ret.second << '\n';

	return 0;
}