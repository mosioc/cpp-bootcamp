#include <iostream>

using std::cout;

struct C1 {
public:
	C1()
	{
		cout << "C1::Default ctor called\n";
	}

	~C1()
	{
		cout << "C1::dtor called\n";
	}
};

struct C2 {
public:
	C2()
	{
		cout << "C2::Default ctor called\n";
	}

	~C2()
	{
		cout << "C2::dtor called\n";
	}
};

struct C3 :public C1, public C2 {
public:
	C3()
	{
		cout << "C3::Default ctor called\n";
	}

	~C3()
	{
		cout << "C3::dtor called\n";
	}
};

struct C4 :public C3 {
public:
	C4()
	{
		cout << "C4::Default ctor called\n";
	}

	~C4()
	{
		cout << "C4::dtor called\n";
	}
};

struct C5 :public C4 {
public:
	C5()
	{
		cout << "C5::Default ctor called\n";
	}

	~C5()
	{
		cout << "C5::dtor called\n";
	}
};

int main()
{
	C5 c5;
	return 0;
}

