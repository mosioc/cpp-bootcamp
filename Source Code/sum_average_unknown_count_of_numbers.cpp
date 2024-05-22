#include <iostream>

int main()
{
	int n;
	int count = 0;
	int sum = 0;
	int average;
	while (std::cin >> n) {
		++count;
		sum += n;
	}
	average = sum / count;
	std:: cout << count << '\t' << sum << '\t' << average << '\n';

	return 0;
}