#pragma once
#include <string>
#include <list>
#include <iostream>

struct Employee {
	std::string first_name, last_name;
	char middle_initial;
	int dept_no;
public:
	void print() const
	{
		std::cout << full_name() << '\n';
	}
	std::string full_name() const
	{
		return first_name + ' ' + middle_initial + ' ' + last_name;
	}
};

struct Manager :public Employee {
	std::list<Employee> group;
	short level;
public:
	void print() const
	{
		Employee::print();
		std::cout << level << '\n';
	}
};
