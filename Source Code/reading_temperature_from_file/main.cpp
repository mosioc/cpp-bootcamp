#include "reading.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using std::cout; using std::string; using std::cin;
using std::ifstream; using std::cerr; using std::ofstream;
using std::vector;

int main()
{
	cout << "Please enter inupt file name: ";
	string name;
	cin >> name;

	ifstream ist{ name };
	if (!ist) {
		cerr << "Can't open inupt file:" << name << '\n';
		return 1; // 1 means failure
	}

	cout << "Please enter name of output file: ";
	cin >> name;
	ofstream ost{ name };
	if (!ost) {
		cerr << "Can't open output file:" << name << '\n';
		return 1;
	}

	vector<Reading> temps;
	int hour;
	double temp;
	while (ist >> hour >> temp) {
		if (hour < 0 || hour > 23) {
			cerr << "hour out of range:" << '\n';
			continue;
		}
		temps.push_back(Reading(hour, temp));
	}

	for (const auto& reading : temps) {
		cout << reading.hour << '\n';
		ost << '(' << reading.hour << ", " << reading.temperature << ")\n";
	}
	return 0;
}