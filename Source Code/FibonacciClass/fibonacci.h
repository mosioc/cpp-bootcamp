#pragma once

class Fibonacci {
	static const long long fib0{ 0 };
	static const long long fib1{ 1 };
	long long n;
public:
	Fibonacci(int index);
	auto get_value() const { return n;  } // C++14: automatic function return type deduction
};