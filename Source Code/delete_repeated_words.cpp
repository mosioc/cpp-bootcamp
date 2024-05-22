#include <string>
#include <iostream>

int main()
{
	std::string prev = " "; // single space
	std::string current;
	while (std::cin >> current) {
		if (prev == current)
			std::cout << "repeated word: " << current << '\n';
		else
			prev = current;
	}
	return 0;
}