#include <iostream>
#include <iostream>
#include <iomanip>

using std::cout; using std::setprecision;

template<typename T>
constexpr T pi = T(3.141592653589793238462643383);

template<class T>
T circular_area(T r) // function template
{
	return pi<T> * r * r; // pi<T> is a variable template instantiation
}


int main()
{
	auto pi_as_float = pi<float>;
	auto pi_as_double = pi<double>;
	auto pi_as_long_double = pi<long double>;
	std::cout << setprecision(15) << pi_as_float << '\t' << pi_as_double << '\t' << pi_as_long_double << '\n';
	auto area_as_float = circular_area<float>(1);
	auto area_as_double = circular_area<double>(1);
	auto area_as_long_double = circular_area<long double>(1);

	return 0;
}
//template<typename T>
//struct Pi {
//	T val;
//};
//
//Pi<float> pi_as_float{ 3.14159 };
//Pi<double> pi_as_double{ 3.141592353 };
//Pi<int> pi_as_int{3};
//
//template<typename T>
//constexpr T pi()
//{
//	return 3.141592653589793238462643383L;
//}
//
//template<typename T>
//struct StaticPi {
//
//};
////template<typename T>
////T my_var = 1;
////

//int main()
//{
//	auto pi_as_float{ pi<float>() };
//	auto pi_as_double{ pi<double>() };
//	auto pi_as_long_double{ pi<long double>() };
//
//	cout << pi_as_float << '\t' << pi_as_double << '\t' << pi_as_long_double << '\n';
//	//my_var<int> v;
//	//Viscosity<int> visc;
//	return 0;
//}