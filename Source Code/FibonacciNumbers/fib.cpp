#include "fib.h"
using std::vector;

long long iterative_fib(int n)
{
	auto fib0{ 0LL };
	auto fib1{ 1LL };

	if (n == 1)
		return fib0;
	if (n == 2)
		return fib1;
	int i = 1;
	auto new_fib = 0LL;
	while (i++ < n) {
		new_fib = fib1 + fib0;
		fib0 = fib1;
		fib1 = new_fib;
	}

	return new_fib;
}

long long recursive_fib(int n)
{
	int fib0{ 0 };
	int fib1{ 1 };

	if (n == 0)
		return fib0;
	if (n == 1)
		return fib1;
	
	return recursive_fib(n - 1) + recursive_fib(n - 2);
}

vector<long long> generate_fib_sequence(int n)
{
	long long fib0{ 0LL };
	long long fib1{ 1LL };

	if (n == 0)
		return vector<long long>{fib0};
		
	if (n == 1)
		return vector<long long>{fib1};

	vector<long long> v;
	int i = 0;
	auto new_fib = 0LL;
	v.push_back(fib0); v.push_back(fib1);

	while (i++ < n) {
		new_fib = fib1 + fib0;
		fib0 = fib1;
		fib1 = new_fib;

		v.push_back(new_fib);
	}

	return v;
}