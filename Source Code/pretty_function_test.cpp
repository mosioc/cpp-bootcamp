#include <iostream>

using std::cout;
template<typename T>
void foo(T x)
{
	cout << __FUNCSIG__ << '\n'; // MSVC: __FUNCSIG__
}
int main()
{
	foo(4); // void foo(T) [T = int]
	foo(4.2); // void foo(T) [T = double]
	foo("hello"); // void foo(T) [T = const char *]
}