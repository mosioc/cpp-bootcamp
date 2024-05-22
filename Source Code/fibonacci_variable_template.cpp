#include <iostream>

template<int Value>
constexpr auto Fib = Fib<Value - 1> + Fib<Value - 2>;

template<>
constexpr auto Fib<0> = 0;

template<>
constexpr auto Fib<1> = 1;

using std::cout;

int main()
{
	cout << Fib<10> << '\n';

	return 0;
}