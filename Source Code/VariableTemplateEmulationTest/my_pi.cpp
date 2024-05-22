#include "my_pi.h"
#include <utility>

template<typename T>
const double PhysicsConstants<T>::pi = 3.14159;

std::pair<double, double> f()
{
	auto p1 = PhysicsConstants<char>::pi;
	auto p2 = Pi_value<char>();

	return { p1, p2 };
}