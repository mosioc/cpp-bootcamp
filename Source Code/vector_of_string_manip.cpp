#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main()
{
	std::vector<std::string> v = { "Kant", "Plato", "Aristotle", "Kierkegard", "Hume" };
	for (const auto elem : v)
		std::cout << elem << '\t';
	std::cout << '\n';
	std::sort(v.begin(), v.end());
	for (const auto elem : v)
		std::cout << elem << '\t';
	std::cout << '\n';

	return 0;
}

