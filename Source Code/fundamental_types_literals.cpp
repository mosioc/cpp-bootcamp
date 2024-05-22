#include <iostream>

int main()
{
	bool b = true;
	char language = 'C';
	char semicolon = ';';
	int universe_answer = 42; // According to Douglas Adams: The Hitchhiker’s Guide to the Galaxy :)
	int iran_population /* raughly */ = 89'000'000; // using digit separators
	double pi = 3.141'59; // 
	double e = 2.718'28; // Euler number
	int i = 1'23'456'7890;

	std::cout << std::boolalpha << b << '\n'
		<< language << '\n'
		<< semicolon << '\n'
		<< universe_answer << '\n'
		<< iran_population << '\n'
		<< pi << '\n'
		<< e << '\n'
		<< i << '\n';

	return 0;
}