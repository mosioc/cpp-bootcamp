#include <iostream>

using std::cout; using std::ostream;

class X { // an int wrapper
	friend bool operator>=(const X&, const X&);
	friend X operator-(const X&);
	friend ostream& operator<<(ostream&, const X&);
	int i;
public:
	X(int ii = 0) : i{ ii } {} // default ctor	
};

ostream& operator<<(ostream& os, const X& x)
{
	os << "X(" << x.i << ")" << '\n';
	return os;
}
bool operator>=(const X& x1, const X& x2)
{
	return x1.i >= x2.i;
}

X operator-(const X& x)
{

	return X{ -x.i };
}

namespace {
	template<class T>
	T abs(const T& t)
	{
		return t >= 0 ? t : -t;
	}
}

int main()
{
	X positive = X{ -5 };
	cout << abs(positive) << '\n';
	return 0;
}