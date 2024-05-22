#pragma once
#include <cstring>

class String {
	char* s;
	int sz;
public:
	String() : s{ new char[sz = 1] } // "", 1 more space for terminator
	{
		s[0] = '\0';
	}
	
	String(const char* p) : s{ new char[sz = std::strlen(p) + 1] }
	{
		strcpy(s, p);
	}
	~String()
	{
		delete[] s;
	}

	// other member functions
};
