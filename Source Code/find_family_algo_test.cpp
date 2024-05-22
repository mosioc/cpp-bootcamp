
// FindFamilyAlgoTest.cpp : Defines the entry point for the console application.
//

#include <algorithm>
#include <forward_list>
#include <vector>
#include <iostream>

using std::forward_list; using std::find; using std::cout;
using std::vector;

inline bool greater_than_zero(int n) { return n > 0; }

void f()
{
	vector<int> v = { -10, -7, -3, 0, 1, 4, 9, 10, 20, 31, 40, 41, 45, 64, 99 };
	vector<int>::const_iterator cit = find_if(v.begin(), v.end(), greater_than_zero);
	if (cit != v.end())
		cout << *cit << '\n';
}

int main()
{
	forward_list<int> fl{ 0, 1, 2 };
	auto it = find(fl.begin(), fl.end(), 2);
	if (it != fl.end())
		cout << "Found:" << *it << '\n';
	else
		cout << "Not found!" << '\n';

	f();

	return 0;
}