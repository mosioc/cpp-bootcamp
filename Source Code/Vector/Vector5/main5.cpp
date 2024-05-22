#include "vector5.h"
#include <iostream>
#include <chrono>

using namespace std::chrono;
using std::cout; using std::cin;
Vector ret();
int main()
{
	Vector v(4);
	int n = 0;
	int d;
	while (cin >> d) {
		if (v.size() == n) {
			Vector u{ v.size() * 2 };
			for (int i = 0; i < v.size(); ++i)
				u[i] = v[i];
		}
		v[n++] = d;
	}

	cout << u;
	return 0;
}
