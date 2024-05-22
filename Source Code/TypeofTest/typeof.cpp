#include "typeof.h"
#include <typeinfo>
#include <iostream>

using std::cout;    using std::endl;
template<typename T>
void print_typeof(const T& t)
{
	cout << typeid(t).name() << endl;
}
template void print_typeof<double>(const double&);
