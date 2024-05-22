#include "phonebook2.h"
#include <iostream>
#include <string>

using std::cout;
int main()
{
	try {
		Phonebook phonebook1{ "Saeed", "Amrollahi" };
		Phonebook phonebook2{ "", "" };
		print_book(phonebook1);
	}

	catch (const std::invalid_argument& except)
	{
		cout << except.what() << '\n';
	}

	return 0;
}