#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 5, 9, -1, 200, 0 };
	for (const auto elem : v)
		std::cout << elem << '\t';
	std::cout << '\n';
	std::sort(v.begin(), v.end());
	for (const auto elem : v)
		std::cout << elem << '\t';
	std::cout << '\n';

	return 0;
}

