#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter your name and age:\n";
	std::string name;
	std::cin >> name;
	int age;
	std::cin >> age;


	std::cout << "Hello " << name << " (" << age << ")." << '\n';

	return 0;
}