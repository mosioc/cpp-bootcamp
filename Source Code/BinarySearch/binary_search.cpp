#include "binary_search.h"
#include <algorithm>
#include <iostream>

using std::is_sorted; using std::cout; using std::vector;
using std::array;

bool binary_search(const std::vector<int>& v, int low, int high, int n)
{
	if (low >= high)
		return false;
	auto middle = (low + high) / 2;
	if (n == v[middle])
		return true;
	else if (n < v[middle])
		return binary_search(v, low, middle - 1, n);
	else
		return binary_search(v, middle + 1, high, n);
}

bool binary_search(const int a[], int low, int high, int n)
{
	if (low >= high)
		return false;
	auto middle = low + (high - low) / 2;
	if (n == a[middle])
		return true;
	else if (n < a[middle])
		return binary_search(a, low, middle - 1, n);
	else
		return binary_search(a, middle + 1, high, n);
}

//bool binary_search(const std::vector<int>& v, int n)
//{
//	if (v.empty() || (v.size() == 1 && v[0] != n))
//		return false;
//	auto middle = v.size() / 2;
//	if (n == v[middle])
//		return true;
//	else if (n < v[middle]) {
//		auto vv = vector<int>(v.begin(), v.begin() + middle);
//		return binary_search(vv, n);
//	}
//	else {
//		auto vv = vector<int>(v.begin() + middle, v.end());
//		return binary_search(vv, n);
//	}
//}