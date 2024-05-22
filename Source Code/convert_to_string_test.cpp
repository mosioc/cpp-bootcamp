#include <string>
#include <iostream>
#include <sstream>

namespace cpp98 {
	template<typename Source = int>
	std::string convert_to_string(Source arg)
	{
		std::stringstream ss;
		ss << arg;
		return ss.str();
	}
}
namespace cpp11 {
	template<typename Source = int>
	auto convert_to_string(Source arg)
	{
		return std::to_string(arg);
	}
}

int main()
{
	{
		std::string one = cpp98::convert_to_string(1),
			two = cpp98::convert_to_string<int>(2),
			pi = cpp98::convert_to_string<int>(3.14),
			OK = cpp98::convert_to_string(true);

		std::cout << one << ' ' << two << ' ' << pi << ' ' << OK << '\n';
	}

	{
		std::string one = cpp11::convert_to_string(1),
			two = cpp11::convert_to_string<int>(2),
			pi = cpp11::convert_to_string<int>(3.14),
			OK = cpp11::convert_to_string(true);

		std::cout << one << ' ' << two << ' ' << pi << ' ' << OK << '\n';
	}
	return 0;
}

