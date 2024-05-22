#include <iostream>

struct Wrapper { // simple wrapper
	Wrapper() { std::clog << "Initialize\n"; } // constructor
	~Wrapper() { std::clog << "Cleanup\n"; } // destructor
} main_wrapper; // main function wrapper

int main()
{
	std::cout << "Hello, world!\n";
}