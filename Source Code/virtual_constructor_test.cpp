#include <memory>
#include <iostream>
class Point {
public:
	// virtual Point(); // virtual is not allowed
};

class Shape {
public:
	virtual ~Shape() // A virtual destructor
	{
		std::cout << "Calling Shape dtor\n";
	}
	virtual void draw() = 0;             // A pure virtual function
	virtual void move() = 0;
	// ...
	virtual Shape* clone()  const = 0;   // Uses the copy constructor
	virtual Shape* create() const = 0;   // Uses the default constructor
};

class Circle : public Shape {
public:
	Circle* clone() const // make copy
	{
		std::cout << "Calling Circle::clone\n";
		return new Circle(*this);
	}

	Circle* create() const // make new object
	{
		std::cout << "Calling Circle::Create\n";
		return new Circle();
	}

	void draw() { /* ... */ }
	void move() { /* ... */ }
	~Circle()
	{
		std::cout << "Calling Circle dtor\n";
	}
};

void user_code(Shape& s)
{
	Shape* s2 = s.clone();
	Shape* s3 = s.create();
	// ...
	delete s2;
	delete s3;
}

int main()
{
	std::unique_ptr<Shape> sp{ new Circle };
	user_code(*sp);


	return 0;
}

