#include "binary_search.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <numeric>

using std::vector; using std::is_sorted; using std::cout;
using std::iota;
using std::chrono::system_clock;
using std::chrono::duration_cast;
using std::chrono::nanoseconds;

int main()
{
	vector<int> v(100'000);
	iota(v.begin(), v.end(), 0);
	if (!is_sorted(v.begin(), v.end())) {
		cout << "The sequence isn't sorted!\n";
	}
	
	auto t0 = system_clock::now();
	bool b1 = binary_search(v, 0, v.size(), -1);
	auto t1 = system_clock::now();
	cout << duration_cast<nanoseconds>(t1 - t0).count() << " nano seconds\n";
	b1 ? cout << "Found\n" : cout << "Not found\n";
	
	int a[100'000];
	iota(a, a + 100'000, 0);
	t0 = system_clock::now();
	bool b2 = binary_search(a, 0, 100'000, -1);
	t1 = system_clock::now();
	cout << duration_cast<nanoseconds>(t1 - t0).count() << " nano seconds\n";
	b2 ? cout << "Found\n" : cout << "Not found\n";

	return 0;
}