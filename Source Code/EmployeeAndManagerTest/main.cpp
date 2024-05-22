#include "employee.h"
#include <vector>

using std::vector;

void f(Manager m1, Employee e1);
void g(Manager mm, Employee ee);

int main()
{
	Employee e;
	Manager m;
	f(m, e);

	return 0;
}

void f(Manager m1, Employee e1)
{
	vector<Employee*> v;
	v.push_back(&m1);
	v.push_back(&e1);
	// ...
}

void g(Manager mm, Employee ee)
{
	Employee* pe = &mm; // ok: every Manager is an Employee
	Manager* pm = &ee; // error: not every Employee is a Manager
	pm->level = 2; // disaster: ee doesn’t have a ‘level’
	pm = static_cast<Manager*>(pe); // brute force: works because
									// pe points to the Manager mm
	pm->level = 2; // fine: pm points to the Manager mm
				   // that has a ‘level’
}
