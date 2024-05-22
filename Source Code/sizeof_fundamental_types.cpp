#include <iostream>

int main()
{
	// fundamental types
	std::cout << "On this machine ..." << std::endl;
	std::cout << "Size of bool is " << sizeof(bool) << std::endl;
	std::cout << "Size of char is " << sizeof(char) << std::endl;
	std::cout << "Size of int is " << sizeof(int) << std::endl;
	std::cout << "Size of double is " << sizeof(double) << std::endl;

	// some objects
	int i;
	double d;
	bool b = false;
	char c = 'A';
	std::cout << "Size of b is " << sizeof(b) << std::endl;
	std::cout << "Size of c is " << sizeof(c) << std::endl;
	std::cout << "Size of i is " << sizeof(i) << std::endl;
	std::cout << "Size of d is " << sizeof(d) << std::endl;

	return 0;
}