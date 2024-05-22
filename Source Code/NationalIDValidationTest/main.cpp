// NationalIDValidationTest.cpp : Defines the entry point for the console application.
//


#include "nationalid.h"
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using std::vector; using std::string; using std::for_each;
using std::cout;
vector<NationalID> national_id = { 
	NationalID{"0057186911"}, 
	NationalID{"7731689951"}
};

int main()
{
	for (const auto& elem : national_id)
		cout << elem << '\n';
	
	for_each(national_id.begin(), national_id.end(), [](const NationalID& nid)
		{
			if (!nid.validate()) {
				cout << "Invalid ID: " << nid << '\n';
			}
		});

	return 0;
}