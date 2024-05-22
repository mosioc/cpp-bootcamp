// DelegatingCtorExceptionSafetyTest.cpp : Defines the entry point for the console application.
//

#include <iostream>

class X {
public:
	X()
	{
		std::cout << "X()\n";
	}

	~X()
	{
		std::cout << "~X()\n";
	}

	X(const X&)
	{
		std::cout << "X(const&)\n";
	}

	X& operator=(const X&) = delete;
};

class Y {
public:
	Y()
	{
		std::cout << "Y()\n";
	}

	~Y()
	{
		std::cout << "~Y()\n";
	}

	Y(const Y&)
	{
		throw 1;
	}

	Y& operator=(const Y&) = delete;
};

class Z {
	X* x_ptr;
	Y* y_ptr;
public:
	Z()
		: x_ptr(nullptr)
		, y_ptr(nullptr)
	{}

	~Z()
	{
		delete x_ptr;
		delete y_ptr;
	}

	Z(const X& x, const Y& y)
		: Z()
	{
		x_ptr = new X(x);
		y_ptr = new Y(y);
	}
};

int main()
{
	try
	{
		Z z{ X{}, Y{} };
	}
	catch (...)
	{
	}
}