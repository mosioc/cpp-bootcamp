#pragma once

#include <iostream>

class Complex {
	double re, im; // representation: two doubles
public:
	Complex(double r, double i) { re = r; im = i; }
	Complex(double r) { re = r; im = 0.0; }
	Complex() { re = im = 0.0; }
	// overloaded operators: just an example
	Complex& operator+=(const Complex&); 
	Complex& operator-=(const Complex&); 
	Complex& operator*=(const Complex&); 
	Complex& operator/=(const Complex&); 
	double real() const { return re; }
	void real(double re_) { re = re_; }
	double imag() const { return im; }
	void imag(double im_) { im = im_; }
};

Complex operator+(const Complex&, const Complex&);
Complex operator-(const Complex&, const Complex&);
Complex operator*(const Complex&, const Complex&);
Complex operator/(const Complex&, const Complex&); 

std::ostream& operator<<(std::ostream&, const Complex& c);
std::istream& operator>>(std::istream&, Complex& c);