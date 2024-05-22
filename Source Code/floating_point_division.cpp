// floating-point division
#include <iostream>

int main()
{
	std::cout << "Enter two numbers: ";
	double a, b;
	std::cin >> a >> b;

	if (b == 0.0) { // handle division by zero
		std::cout << "Division by zero!" << '\n';
		return 0;
	}
	std::cout << a << '/' << b << " = " << a / b << '\n';

	return 0;
}
