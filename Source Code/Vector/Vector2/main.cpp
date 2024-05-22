#include "vector2.h"
#include <iostream>

using std::cout;
int main()
{
	Vector v(4);
	v.set(0, 42);
	v.set(1, -43);
	// print the content of vector
	// method #1
	for (int i = 0; i < v.size(); ++i)
		cout << v.get(i) << '\n';
	// method #2
	v.print_vector();
	return 0;
}