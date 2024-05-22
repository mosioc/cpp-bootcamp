#include <iostream>

int main()
{
	const double cm_per_inch = 2.54;
	int val;
	char unit;
	while (std::cin >> val >> unit) {// keep reading
		if (unit == 'i')// ‘i’for inch
			std::cout << val << "in == " << val * cm_per_inch << "cm\n";
		else if (unit == 'c')// ‘c’for cm
			std::cout << val << "cm == " << val / cm_per_inch << "in\n";
		else
			return 0;// terminate on a “bad unit”, e.g. ‘q’
	}
}