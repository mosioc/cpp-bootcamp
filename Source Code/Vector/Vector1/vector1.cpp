#include "vector1.h"
#include <iostream>

using std::cout;
void Vector::print_vector()
{
	for (int i = 0; i < size_; ++i)
		cout << elem_[i] << '\n';

}