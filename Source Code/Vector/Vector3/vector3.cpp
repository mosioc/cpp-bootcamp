#include "vector3.h"
#include <iostream>

using std::cout;

void print_vector(const Vector& v)
{
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << '\n';
}