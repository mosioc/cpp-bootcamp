#pragma once

/*
* fixed-size vector
*/
struct Vector { // fixed-size vector of int, naive and very old implementation!
	enum { max_size = 100 };
	int a[max_size]; // fixed-size vector
	int size;
};

// operations
void init_vector(Vector&);
int get(const Vector&, int /* index */);
void set(Vector&, int /* index */, int /* new value */);
int size(const Vector&);
void print_vector(const Vector&);