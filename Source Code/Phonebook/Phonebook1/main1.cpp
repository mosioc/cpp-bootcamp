#include "phonebook1.h"

int main()
{
	Phonebook phonebook{
		"Saeed", "Amrollahi",
		{
			{ "First1", "Last1", "09121234567" },
			{ "First3", "Last3", "09121234568" },
			{ "First2", "Last2", "091211111111111111111" }
		}
	};

	print_book(phonebook);
}