#include "vector0.h"
#include <iostream>

void init_vector(Vector& v)
{
	for (auto& elem : v.a)
		elem = 0;
	v.size = Vector::max_size;
}

int get(const Vector& v, int index)
{
	return v.a[index];
}

void set(Vector& v, int index, int val)
{
	v.a[index] = val;
}

int size(const Vector& v)
{
	return v.size;
}

void print_vector(const Vector& v)
{
	std::cout << "[ ";
	for (int i = 0; i < size(v); ++i)
		std::cout << get(v, i) << ' ';
	std::cout << "]\n";

}