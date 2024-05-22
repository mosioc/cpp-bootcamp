#include <iostream>

int main()
{
	for (;;) {
		std::cout << "X =  (0 for exit) ";
		int x;
		if (std::cin >> x) {
			if (x <= 0) {
				std::cout << "Invalid number!";
				break;
			}
			else if (x == 1)
				std::cout << x << " isn't prime." << std::endl;
			else { // x >= 2
				bool is_prime = true;
				for (int i = 2; (i <= x / 2) && (is_prime = (x % i != 0)); ++i);
				if (is_prime)
					std::cout << x << " is prime." << std::endl;
				else
					std::cout << x << " is composite." << std::endl;
			}
		}
	}

	return 0;
}