#include "fibonacci.h"

Fibonacci::Fibonacci(int index)
{
	if (index == 0)
		n = fib0;
	if (index == 1)
		n = fib1;
	int i = 0;
	n = 0;
	auto f0 = fib0;
	auto f1 = fib1;
	while (i++ < index) {
		n = f1 + f0;
		f0 = f1;
		f1 = n;
	}
}