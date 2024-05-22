#include "phonebook3.h"
#include <iostream>

using std::string; using std::cout;
using std::ostream;
Phonebook& Phonebook::operator+(const ContactInfo& ci)
{
	contact[{ci.first_name_, ci.last_name_}] = ci.mobile_;

	return *this;
}

Phonebook& Phonebook::operator-(const ContactInfo& ci)
{
	auto iter = contact.find({ ci.first_name_, ci.last_name_ });
	if (iter != contact.end())
		contact.erase(iter);

	return *this;
}


string Phonebook::get_contact(const string& first_name, const string& last_name)
{
	return contact[{first_name, last_name}];
}

ostream& operator<<(ostream& os, const Phonebook& pb)
{
	os << "The phonebook belongs to " << pb.last_name_ << ", " << pb.first_name_ << '\n';
	auto contacts = pb.contact;
	for (const auto& con : contacts)
		os << con.first.second << ", " << con.first.first << ", "
		<< con.second << '\n';

	return os;
}

void print_book(const Phonebook& pb)
{
	cout << pb;
}