#include <string>
#include <vector>
#include <iostream>
using std::cout;
int main()
{
	std::string s1{ "Hello, world!" }, s2{ "Good bye" };

	auto res = s1 <=> s2;
	if (res < 0)
		cout << "s1 before s2" << '\n';
	else if (res > 0)
		cout << "s1 after s2" << '\n';
	else
		cout << "equal\n";


	std::vector<int> v1{ 0, 1, 2, 3 };
	std::vector<int> v2{ 1, 2, 3 };
	res = v1 <=> v2;
	if (res < 0)
		cout << "v1 before v2" << '\n';
	else if (res > 0)
		cout << "v1 after v2" << '\n';
	else
		cout << "equal\n";
	return 0;
}