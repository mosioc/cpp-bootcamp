#include <iostream>
#include <string>
#include <vector>

int* p1 = new int(42);
int main()
{
	///double* p2 = new int; // type mismatch
	std::cout << p1 << '\t' << *p1 << '\n';
	std::cout << "Size of pointer to int is: " << sizeof(p1) << '\n';
	long long* p3 = new long long[4];
	for (int i = 0; i < 4; ++i) {
		std::cout << p3 + i << '\t' << p3[i] << '\n';
		//++p3;
	}
	std::cout << "Size of pointer to long long is: " << sizeof(p3) << '\n';
	std::cout << "Size of pointer to std::string is: " << sizeof(std::string*) << '\n';
	std::cout << "Size of pointer to std::vector of int is: " << sizeof(std::vector<int>*) << '\n';
	delete [] p3;
	delete  p1;

	if (p1) // multiple delete
		delete p1;
	return 0;

}