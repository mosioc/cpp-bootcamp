#include <iostream>
#include <string>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

using std::string; using std::cout;

int main()
{
	int i1 = 42, i2 = 43;
	auto m1 = MAX(i1, i2);
	double pi = 3.14159, e = 2.71828;
	auto m2 = MAX(pi, e++);
	string s1 = "Math", s2 = "Mathematics";
	auto m3 = MAX(s1, s2);
	auto m4 = MAX(i1, s2);

	cout << "m1 = " << m1 << '\n';
	cout << "m2 = " << m2 << '\n';
	cout << "m3 = " << m3 << '\n';
}