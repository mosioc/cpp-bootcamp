#include <iostream>

int main()
{
	std::cout << "Enter an integer number (0 for exit): ";
	int n;
	std::cin >> n;
	if (n == 0) // if (!n)
		return 0;
	int sum1 = 0;
	for (int i = 1; i <= n; i++) {
		sum1 += i;
	}

	int sum2 = n * (n + 1) / 2;

	std::cout << "Using loop constrcut: " << "1 + 2 + ... " << "+ " << n << " = " << sum1 << std::endl;
	std::cout << "Using arothmeric progression formula: " << "1 + 2 + ... " << "+ " << n << " = " << sum2 << std::endl;

	return 0;
}