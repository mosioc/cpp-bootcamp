#pragma once
#include <string>
#include <array>
#include <ostream>

class NationalID {
	/*
	 * The nationalID invariant:
	 * 1. -at most- 10 digits (0-9), 1 or 2 leading 0s + 7-8 digits + 1 control digit
	*/
	static const int ID_SIZE = 10;
	mutable std::string id_clone;
	std::array<char, ID_SIZE> id;
	bool is_valid() const; // check the validation of national id structurally
public:
	NationalID(const std::string&);
	operator std::string() const { return std::string{ id.begin(), id.end() }; }
	bool validate() const; // checksum validation of id
};

std::ostream& operator<<(std::ostream&, const NationalID&);