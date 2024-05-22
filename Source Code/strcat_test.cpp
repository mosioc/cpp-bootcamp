#include <cstring>
#include <iostream>

int main()
{
	char s1[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char s2[9] = { ',', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0' };
	strcat_s(s1, s2);
	std::cout << s1 << '\n';

	return 0;
}