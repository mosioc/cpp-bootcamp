/*
* inch to centimeter conversion
*/
#include <iostream>

using std::cout; using std::cin;

int main()
{
	const double cm_per_inch{ 2.54 }; // number of centimeters in an inch
	int length{ 1 };
	while (length != 0) { // the length zero is used to exit loop or program
						  // a compound statement
		cout << "Length in inches: ";
		cin >> length;
		cout << length << " in. = " << length * cm_per_inch << " cm.\n";
	}

	return 0;
}