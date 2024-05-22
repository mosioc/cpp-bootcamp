// area and circumference
#include <iostream>

int main()
{
	double Pi = 3.14; // The pi number
	std::cout << "Please enter radius: (0 for exit)\n";
	int r = 0; // radius
	std::cin >> r;
	double Area = Pi * r * r;
	double Circ = 2 * Pi * r;
	if (r != 0) {
		std::cout << "Area = " << Area << std::endl;
		std::cout << "Circ = " << Circ << std::endl;
	}

	return 0;
}
