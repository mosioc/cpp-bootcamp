#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<double> temps; // temperatures in Fahrenheit, e.g. 64.6
	double temp;
	while (std::cin >> temp)
		temps.push_back(temp); // put into vector
	double sum = 0;
	for (int i = 0; i < temps.size(); ++i)
		sum += temps[i];
	std::cout << "Average temperature: " << sum / temps.size() << '\n';
	std::sort(temps.begin(), temps.end());// sort �from the beginning to the end�

	std::cout << "Median temperature: " << temps[temps.size() / 2] << '\n';

	return 0;
}
,