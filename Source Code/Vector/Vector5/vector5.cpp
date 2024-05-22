#include "vector5.h"
using std::ostream;

ostream& operator<<(ostream& os, const Vector& v)
{
	os << "{\n";
	for (int i = 0; i < v.size(); ++i)
		os << v[i] << ", ";
	os << "\n}\n";

	return os;
}