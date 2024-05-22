#include <iostream>
#include <array>
#include <vector>
#include <chrono>
using namespace std::chrono;
using std::cout;
class Image {
	double image[1024];
};

struct Point {
	int x, y;
	Point() : x{ 42 }, y{ 42 } {}
};
void f()
{
	auto t0 = system_clock::now();
	std::array<int, 1'000'000> a;
	auto t1 = system_clock::now();
	std::cout << "Array on the stack allocation takes " << duration_cast<nanoseconds>(t1 - t0).count() << '\n';
	t0 = system_clock::now();
	int* pi = new int[1'000'000];
	t1 = system_clock::now();
	std::cout << "Array on the heap allocation takes " << duration_cast<nanoseconds>(t1 - t0).count() << '\n';
	t0 = system_clock::now();
	Image image;
	t1 = system_clock::now();
	std::cout << "Image on the stack allocation takes " << duration_cast<nanoseconds>(t1 - t0).count() << '\n';
	t0 = system_clock::now();
	Image* pImage = new Image;
	t1 = system_clock::now();
	std::cout << "Image on the heap allocation takes " << duration_cast<nanoseconds>(t1 - t0).count() << '\n';
	t0 = system_clock::now();
	delete[] pi;
	t1 = system_clock::now();
	std::cout << "Array on the heap deallocation takes " << duration_cast<nanoseconds>(t1 - t0).count() << '\n';
	t0 = system_clock::now();
	delete pImage;
	t1 = system_clock::now();
	std::cout << "Image on the heap deallocation takes " << duration_cast<nanoseconds>(t1 - t0).count() << '\n';
}
int main()
{
	f();
}