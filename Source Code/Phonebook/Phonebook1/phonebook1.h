#pragma once

#include <string>
#include <vector>

/*
* Round1:
	1 first name and last name as string
	2 mobile phone number as string
	3 no invariant for Contact info and Phonebook
	4 Using struct rather than class
	5 No special attention to Essential operations and special member functions
*/
struct ContactInfo {
	std::string first_name_;
	std::string last_name_;
	std::string mobile_;
}; // of ContactInfo

struct Phonebook {
	// first name and last name of phonebook owner
	std::string first_name_;
	std::string last_name_;

	std::vector<ContactInfo> contact;

	void add_contact(const ContactInfo&);
	void remove_contact(const std::string& /* first name */, const std::string& /* last name */);
	std::string get_contact(const std::string& /* first name */, const std::string& /* last name */);
}; // of Phonebook

void print_book(const Phonebook&);