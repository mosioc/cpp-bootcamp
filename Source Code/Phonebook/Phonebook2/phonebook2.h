#pragma once

#include <string>
#include <vector>
#include <stdexcept>
/*
* Round2:
	* Round1{1, 2, 3} + 
	* invariant for Contact info: first name, last name and phone number should be non-empty string
	* invariant for Phonebook: phone number should be non-empty string
	* Using type alias by using keyword for higher abstractions
	* Using {} instrad of "" or string::empty instead of ""
	* better API for add_contact
	* Essential operations: ordinary constructor
	* using namespace declarations in .cpp files
	* using exception's what() member function
*/
using Phonenumber = std::string;
struct ContactInfo {
	std::string first_name_;
	std::string last_name_;
	Phonenumber mobile_;

	ContactInfo(const std::string& first, const std::string& last, const std::string& mobile) :
		first_name_{first},
		last_name_{ last },
		mobile_{ mobile }
	{
		if (first_name_.empty() || last_name_.empty() || mobile_.empty())
			throw std::invalid_argument{ "first name or last name or mobile number is empty!" };
	}
}; // of ContactInfo

class Phonebook {
	friend void print_book(const Phonebook&);
	// first name and last name of phonebook owner
	std::string first_name_;
	std::string last_name_;

	std::vector<ContactInfo> contact;
	void add_contact(const ContactInfo&);
public:
	Phonebook(const std::string& first, const std::string& last) : 
		first_name_{ first },
		last_name_{ last }
	{
		if (first_name_.empty() || last_name_.empty())
			throw std::invalid_argument{"first name or last name is empty!"};
	}
	void add_contact(const std::string& /* first name */, const std::string& /* last name */, 
					 const Phonenumber& phone_number);
	void remove_contact(const std::string& /* first name */, const std::string& /* last name */);
	std::string get_contact(const std::string& /* first name */, const std::string& /* last name */);
}; // of Phonebook

void print_book(const Phonebook&);