#include <thread>
#include <map>
#include <string>
#include <iostream>

std::map<int, std::string> m = { { 1, "one" }, { 0, "zero" } };

int main()
{
	std::string s1 = m[1];
	std::thread t([&]() {std::cout << s1 << ", "; });
	std::string s2 = m[0];
	t.join();
	std::cout << s2 << std::endl;
}
