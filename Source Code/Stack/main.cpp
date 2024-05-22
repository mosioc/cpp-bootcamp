#include "stack.h"
#include <iostream>
int main()
{
	Stack s;
	print_stack(s);
	pop(s);
	push(s, 42);
	push(s, -43);
	print_stack(s);
	for (const auto elem : { 9, -6, 0, -3, 6, 7, 1, 1 })  // C++11 initializers list
		push(s, elem);
	print_stack(s);
	std::cout << "Top of stack: " << top(s) << '\n';
	push(s, 1001);	
	return 0;
}