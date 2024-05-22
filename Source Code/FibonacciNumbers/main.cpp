#include "fib.h"
#include <iostream>
#include <chrono>

using std::cout; using std::cin; using std::vector;
using std::chrono::system_clock;
using std::chrono::duration_cast;
using std::chrono::microseconds;
void print_vector(const vector<long long>&);

int main()
{
	
	cout << "Enter a number [0, 100]: ";
	int n;
	cin >> n;
	if (n < 0 || n > 100)
		cout << "Invalid number: " << n << '\n';

	auto t0 = system_clock::now();
	cout << iterative_fib(n) << '\n';
	auto t1 = system_clock::now();
	cout << duration_cast<microseconds>(t1 - t0).count() << " ms\n";
	t0 = system_clock::now();
	cout << recursive_fib(n) << '\n';
	t1 = system_clock::now();
	cout << duration_cast<microseconds>(t1 - t0).count() << " ms\n";
//	auto v = generate_fib_sequence(n);
//	print_vector(v);
	return 0;
}

void print_vector(const vector<long long>& v)
{
	cout << "{ \n";
	for (auto elem : v)
		cout << elem << '\t';

	cout << "\n}\n";
}