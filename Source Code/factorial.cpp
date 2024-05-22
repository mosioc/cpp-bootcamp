#include <iostream>

int main()
{
	std::cout << "Enter an integer number: (-1 for exit) ";
	int n;
	std::cin >> n;
	if (n < -1) {
		std::cout << "Invalid input!\n";
		return 0;
	}
	if (n == -1) {
		return 0;
	}
	if (n == 0) {
		std::cout << n << "! = " << 1 << '\n';
		return 0;
	}
	long int Fact = 1; // must be explicitly initialized
	for (int i = n; i > 0; --i) {
		Fact *= i;
	}
	std::cout << n << "! = " << Fact << '\n';

	return 0;
}