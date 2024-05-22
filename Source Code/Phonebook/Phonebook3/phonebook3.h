#pragma once

#include <string>
#include <map>
#include <utility>
#include <stdexcept>
/*
* Round3:
	* Round2 +
	* using map instead of vector for container
	* operator+ for adding a contact
	* operator- for removing a contract
	* operator<< for output operation
*/
using Phonenumber = std::string;
struct ContactInfo {
	std::string first_name_;
	std::string last_name_;
	Phonenumber mobile_;

	ContactInfo(const std::string& first, const std::string& last, const std::string& mobile) :
		first_name_{ first },
		last_name_{ last },
		mobile_{ mobile }
	{
		if (first_name_.empty() || last_name_.empty() || mobile_.empty())
			throw std::invalid_argument{ "first name or last name or mobile number is empty!" };
	}
}; // of ContactInfo

class Phonebook {
	void print_book(const Phonebook&);
	friend std::ostream& operator<<(std::ostream&, const Phonebook&);
	// first name and last name of phonebook owner
	std::string first_name_;
	std::string last_name_;

	std::map<std::pair<std::string, std::string>, Phonenumber> contact;
public:
	Phonebook(const std::string& first, const std::string& last) :
		first_name_{ first },
		last_name_{ last }
	{
		if (first_name_.empty() || last_name_.empty())
			throw std::invalid_argument{ "first name or last name is empty!" };
	}
	Phonebook& operator+(const ContactInfo&);
	Phonebook& operator-(const ContactInfo&);
	std::string get_contact(const std::string& /* first name */, const std::string& /* last name */);
}; // of Phonebook

void print_book(const Phonebook&);