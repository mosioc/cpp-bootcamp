#include <vector>
#include <string>
/*
* N.B: not professional but naive implementation of stack of integer
*/
const int BOTTOM_OF_STACK = -1;
const int MAX_SIZE = 10;
const int TOP = BOTTOM_OF_STACK;
const std::string stack_is_full = "pushing full Stack!";
const std::string stack_is_empty = "poping empty Stack!";
struct Stack {
	std::vector<int> v;
	int top = BOTTOM_OF_STACK; // C++11: in-class member initializer
}; // of stack
void push(Stack&, int);
void pop(Stack&);
int top(Stack&);
inline bool is_full(Stack& s) { return s.top == MAX_SIZE - 1; }
inline bool is_empty(Stack& s) { return s.top == BOTTOM_OF_STACK; }
void print_stack(Stack&);