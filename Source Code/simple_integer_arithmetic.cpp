#include <iostream>

using namespace std;

int main()
{
	cout << "Please enter an integer: ";
	int n;
	cin >> n;

	cout << "n = " << n << endl;
	cout << "n + 1 = " << n + 1 << endl;
	cout << "n - 1 = " << n - 1 << endl;
	cout << "twice n = " << n + n << endl;
	cout << "twice n = " << n * 2 << endl;
	cout << "n squared = " << n * n << endl;
	cout << "half of n = " << n / 2 << endl; // integer division

	return 0;
}