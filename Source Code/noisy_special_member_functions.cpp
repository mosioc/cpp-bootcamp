#include <iostream>

using std::cout;

class X {
public:
	X()
	{
		cout << "Calling Default ctor\n";
	}
	X(const X&)
	{
		cout << "Calling copy ctor\n";
	}

	X& operator=(const X& x)
	{
		cout << "Calling copy assignment\n";
		return *this;
	}

	X(X&&)
	{
		cout << "Calling move constructor\n";
	}

	X& operator=(X&&)
	{
		cout << "Calling move assignment\n";
		return *this;
	}

	~X()
	{
		cout << "Calling destructor\n";
	}
};

X identity(X arg)
{
	return arg;
}

int main()
{
	X x1;
	x1 = identity(x1);
	X x2;
	x1 = x2;

	return 0;
}