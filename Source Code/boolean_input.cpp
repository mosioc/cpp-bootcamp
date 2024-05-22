#include <iostream>

int main()
{
	bool b;
	std::cin >> std::boolalpha >> b;
	if (b)
		std::cout << "Yes\n";
	else
		std::cout << "No\n";

	return 0;
}