#pragma once
#include <iostream>

class Point {
public:
	Point() : x_(0), y_(0)
	{
		std::cout << "Point default ctor called\n";
	}
	Point(int xx, int yy) : x_(xx), y_(yy)
	{
		std::cout << "User-defined Point ctor called\n";
	}

	virtual ~Point()
	{
		std::cout << "Point dtor called\n";
	}
	int X() const { return x_; }
	int Y() const { return y_; }
private:
	int x_, y_;
};

class Point3D : public Point {
public:
	Point3D() : /*Point(), */z_(0)
	{
		std::cout << "Point3D default ctor called\n";
	}
	Point3D(int xx, int yy, int zz) :
		Point(xx, yy), z_(zz)
	{
		std::cout << "User-defined Point3D ctor called\n";
	}

	~Point3D()
	{
		std::cout << "Point3D dtor called\n";
	}

	int z() const { return z_; }
private:
	int z_;
};