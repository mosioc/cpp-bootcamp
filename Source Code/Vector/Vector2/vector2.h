#pragma once

class Vector {
	int* elem_; // pointer to the 1st element (of type int)
	int size_;
public:
	Vector(int sz)
	{
		elem_ = new int[size_ = sz];
	}
	~Vector()
	{
		delete[] elem_;
	}
	int size() const { return size_; }
	int get(int i) const { return elem_[i]; }
	void set(int i, int val) { elem_[i] = val; }
	void print_vector();
};

