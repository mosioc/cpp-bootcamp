#include "my_int.h"
#include <iostream>

using std::cout;
int main()
{
	MyInt int2022{ 2022 };
	MyInt int2023{ 2023 };

	if (int2022 < int2023)
		cout << "Less than ...\n";
	if (int2022 < 2023)
		cout << "Less than ...\n";

	return 0;
}