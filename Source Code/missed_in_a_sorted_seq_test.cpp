#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>

using std::vector; using std::adjacent_find; using std::cout;
using std::greater;

template<class T>
struct NotIsSuccessorTo {
	constexpr bool operator()(const T& first, const T& second)  const
	{
		return second != first + T(1);
	}
};

vector<int> v{ 0, 1, 2, 3, 4, 6, 7, 8, 9 }; // 5 is missing

int main()
{
	auto iter = adjacent_find(v.begin(), v.end(), NotIsSuccessorTo<int>());
	if (iter == v.end())
		cout << "sorted and successor to each other";
	else {
		cout << *iter << '\n';
	}

	iter = adjacent_find(v.begin(), v.end(), greater<int>());

	if (iter == v.end())
		cout << "vector is sorted\n";
	else {
		cout << "Vector not sorted, value " << *(iter + 1)
			<< ", at position " << iter - v.begin() + 1 << '\n';

	}

	return 0;
}