#include "vector3.h"
#include <iostream>
#include <chrono>
using std::cout;
using namespace std::chrono;
Vector ret();
int main()
{
	Vector v(4);
	v[0] = 42;
	v[1] = -43;
	// print the content of vector
	// method #1
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << '\n';
	// method #2
	print_vector(v);
	auto t0 = high_resolution_clock::now();
	ret();
	auto t1 = high_resolution_clock::now();
	cout << duration_cast<milliseconds>(t1 - t0).count() << '\n';
	return 0;
}

Vector ret()
{
	Vector v(100'000'000);
	return v;
}