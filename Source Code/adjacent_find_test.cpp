#include <algorithm>
#include <vector>
#include <iostream>
#include <functional>

using std::adjacent_find; using std::vector;
using std::cout; using std::not_equal_to;

int main()
{
	vector<int> v{ 3, 3, 3 };
	if (adjacent_find(v.begin(), v.end(), not_equal_to<int>()) == v.end())
		cout << "All same!\n";

	return 0;
}
