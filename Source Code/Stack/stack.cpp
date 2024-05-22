#include "stack.h"
#include <iostream>

void push(Stack& s, int i)
{
	if (!is_full(s)) {
		s.v.push_back(i);
		++s.top;
	} else
		std::cout << stack_is_full << '\n';
}

void pop(Stack& s)
{
	if (!is_empty(s)) {
		s.v.pop_back();
		--s.top;
	}
	else
		std::cout << stack_is_empty << '\n';
}

int top(Stack& s)
{
	auto t{ BOTTOM_OF_STACK };
	if (!is_empty(s)) {
		t = s.v.back();
	}
	else
		std::cout << stack_is_empty << '\n';

	return t;
}

void print_stack(Stack& s)
{
	std::cout << "[ ";
	for (auto const& elem : s.v)
		std::cout << elem << ' ';
	std::cout << "]\n";
}