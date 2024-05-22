// MutexWithWorkerThreadsTest.cpp : Defines the entry point for the console application.
//

#include <thread>
#include <string>
#include <iostream>
#include <chrono>
#include <mutex>

using std::thread;
using std::string;
using std::cout;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;
using std::mutex;

mutex coutMutex;

struct Worker {
	Worker(string n) :name(n) {};
	void operator() () {
		for (int i = 1; i <= 3; ++i) {
			std::this_thread::sleep_for(std::chrono::milliseconds(200));
			coutMutex.lock();
			cout << name << ": " << "Work " << i << " done !!!" << std::endl;
			coutMutex.unlock();
		}
	}
private:
	string name;
};

int main()
{
	std::cout << "Boss: Let's start working.\n\n";
	thread herb = thread(Worker("Herb"));
	thread andrei = thread(Worker(" Andrei"));
	thread scott = thread(Worker(" Scott"));
	thread bjarne = thread(Worker(" Bjarne"));
	thread andrew = thread(Worker(" Andrew"));
	thread david = thread(Worker(" David"));
	// join all Worker
	herb.join();
	andrei.join();
	scott.join();
	bjarne.join();
	andrew.join();
	david.join();

	std::cout << "\n" << "Boss: Let's go home." << std::endl;
}