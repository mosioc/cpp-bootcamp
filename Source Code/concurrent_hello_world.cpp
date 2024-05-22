#include <iostream>
#include <thread>

void f()
{
	std::cout << "Hello, concurrent world!\n";
}
int main()
{
	std::cout << "Hello, from main thread\n";
	std::thread t{ f };
	t.join();
	return 0;
}