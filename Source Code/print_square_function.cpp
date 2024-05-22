#include <iostream>

double square(double);
void print_square(double);

using namespace std;

int main()
{
	double d = 1.234;
	print_square(d);

	return 0;
}

double square(double x)
{
	return x * x;
}

void print_square(double x)
{
	cout << "The square of " << x <<  " is " << square(x) << '\n';
}