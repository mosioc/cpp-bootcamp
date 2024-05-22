#include "vector4.h"
#include <iostream>
#include <chrono>
using namespace std::chrono;
using std::cout;
Vector ret();
int main()
{
	Vector v = 70;
	Vector v(4);
	v[0] = 42;
	v[1] = -43;
	// print the content of vector
	// method #1
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << '\n';
	// method #2
	cout << v;
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