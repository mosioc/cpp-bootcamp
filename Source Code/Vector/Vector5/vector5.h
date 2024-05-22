#pragma once
#include <iostream>

class Vector {
	int* elem_; // pointer to the 1st element (of type int)
	int size_;
public:
	explicit Vector(int sz)
	{
		elem_ = new int[size_ = sz];
	}
	~Vector()
	{
		delete[] elem_;
	}
	Vector(const Vector& v) :
		// allocate elements, then initialize them by copying
		elem_{ new int[v.size_] }, size_{ v.size_ }
	{

		for (int i = 0; i < v.size_; ++i)
			elem_[i] = v.elem_[i];
	}
	Vector& operator=(const Vector& v)
	{
		if (this != &v) { // handle self assignment
			int* p = new int[v.size_];
			for (int i = 0; i < v.size_; ++i)
				p[i] = v.elem_[i];
			delete[] elem_;
			elem_ = p;
			size_ = v.size_;
		}
		return *this;

	}
	Vector(Vector&& v) :
		elem_{ v.elem_ }, size_{ v.size_ }
		// “grab the elements” from v
	{
		v.elem_ = nullptr; // now v has no elements
		v.size_ = 0;
	}
	Vector& operator=(Vector&& v)
	{
		elem_ = v.elem_;
		size_ = v.size_;

		v.elem_ = nullptr; // now v has no elements
		v.size_ = 0;

		return *this;
	}

	int size() const { return size_; }
	int operator[](int i) const { return elem_[i]; } // access element i
	int& operator[](int i) { return elem_[i]; } // set element i
};

std::ostream& operator<<(std::ostream&, const Vector&);