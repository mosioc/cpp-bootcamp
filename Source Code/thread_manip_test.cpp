// ThreadManipTest.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <thread>

using namespace std::this_thread;

void print_id(std::thread& t)
{
	if (t.get_id() == std::thread::id{})
		std::cout << "t isn't joinable\n";
	else
		std::cout << "t's id is " << t.get_id() << '\n';
}

int main() {
	std::thread null_thr;
	std::thread t([] { std::cout << std::this_thread::get_id() << '\n'; });
	print_id(null_thr);
	//null_thr.join();
	t.join();
	if (t.joinable())
		t.join();

	std::cout << "# of cores = " << std::thread::hardware_concurrency() << '\n';
}

