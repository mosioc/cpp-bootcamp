/*
* ask for a person's name, and great the person
*/ 
#include <iostream>
#include <string>

int main()
{
	// ask for the person's name
	std::cout << "Please enter your first name: ";
	
	// read the name
	std::string name; // define name
	std::cin >> name;
	// write a greeting
	std::cout << "Hello, " << name << '!' << '\n';

	return 0;
}