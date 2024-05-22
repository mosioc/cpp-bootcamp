/*
* read first and last anem 
*/

#include <iostream>
#include <string>


int main()
{
	std::cout << "Please enter your first and last names: ";
	std::string first, last;
	std::cin >> first >> last;
	std::string name = first + ' ' + last; // concatenate two strings separate by space
	std::cout << "Hello, " << name << '\n';

	return 0;
}