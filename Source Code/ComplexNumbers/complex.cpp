#include "complex.h"

using std::ostream; using std::istream; using std::ios_base;

Complex& Complex::operator+=(const Complex& c)
{
	// (a1 + i * b1) + (a2 + i * b2) = (a1 + a2) + i * (b1 + b2) 
	re += c.re;
	im += c.im;

	return *this;
}
Complex& Complex::operator-=(const Complex& c)
{
	// (a1 + i * b1) - (a2 + i * b2) = (a1 - a2) + i * (b1 - b2) 
	re -= c.re;
	im -= c.im;

	return *this;
}

Complex& Complex::operator*=(const Complex& c)
{
	// (a1 + i * b1) * (a2 + i * b2) = (a1 * a2 - b1 * b2) + i * (a1 * b2 + b1 * a2)
	re = re * c.re - im * c.im;
	im = re * c.im + im * c.re;

	return *this;
}

Complex& Complex::operator/=(const Complex& c)
{
	// (a1 + i * b1) / (a2 + i * b2) = (a1 * a2 + b1 * b2) / (a2 * a2 + b2 * b2) + 
	//                                 i * (a2 * b1 - a1 * b2) / (a2 * a2 + b2 * b2)
	re = (re * c.re + im * c.im) / (c.re * c.re + c.im * c.im);
	im = (c.re * im - re * c.im) / (c.re * c.re + c.im * c.im);
	
	return *this;
}
Complex operator+(const Complex& c1, const Complex& c2)
{
	Complex r = c1;
	r += c2; // access representation through +=

	return r;
}

Complex operator-(const Complex& c1, const Complex& c2)
{
	Complex r = c1;
	r -= c2; // access representation through -=

	return r;
}

Complex operator*(const Complex& c1, const Complex& c2)
{
	Complex r = c1;
	r *= c2; // access representation through *=

	return r;
}

Complex operator/(const Complex& c1, const Complex& c2)
{
	Complex r = c1;
	r /= c2; // access representation through /=

	return r;
}

std::ostream& operator<<(ostream& os, const Complex& c)
{
	os << '(' << c.real() << ", " << c.imag() << ')';

	return os;
}

istream& operator>>(istream& is, Complex& z)
/* input formats for a complex ("f" indicates a floatingpoint number):
	f
	(f)
	(f, f)
*/
{
	double re{ 0 }, im{ 0 };
	char c = 0;
	is >> c;
	if (c == '(') {
		is >> re >> c;
			if (c == ',')
				is >> im >> c;
			if (c != ')') is.clear(ios_base::badbit); // set state
	}
	else {
		is.putback(c);
		is >> re;
	}
	if (is) 
		z = Complex(re, im);
	return is;
}