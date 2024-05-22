#include "phonebook3.h"
#include <iostream>
#include <string>

using std::cout;
int main()
{
	Phonebook phonebook1{ "Saeed", "Amrollahi" };

	phonebook1 = phonebook1 + ContactInfo{ "First1", "Last1", "09121234567" };
	phonebook1 = phonebook1 + ContactInfo{ "First0", "Last1", "09121234568" };
	print_book(phonebook1);
	/*try {
		
		Phonebook phonebook2{ "", "" };
		print_book(phonebook1);
	}

	catch (const std::invalid_argument& except)
	{
		cout << except.what() << '\n';
	}*/

	return 0;
}