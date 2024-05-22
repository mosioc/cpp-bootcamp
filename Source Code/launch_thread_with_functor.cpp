#include <thread>
#include <string>
#include <iostream>

class Greeting {
	std::string message;
public:
	explicit Greeting(const std::string& m) : message{ m } {}
	void operator()() const { std::cout << message << '\n'; }
};
using std::thread;

int main()
{
	Greeting g{ "Good bye ..." };
	thread t1{ g }; // call Greeting::operator()
	thread t2{ Greeting{"Hello"} }; // call Greeting::operator()

	t1.join();
	t2.join();

	return 0;
}