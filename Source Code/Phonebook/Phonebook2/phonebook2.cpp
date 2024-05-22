#include "phonebook2.h"
#include <iostream>

using std::string; using std::cout;

void Phonebook::add_contact(const ContactInfo& ci)
{
	contact.push_back(ci);
}

void Phonebook::add_contact(const std::string& first_name, const std::string& last_name, 
							const Phonenumber& phone_number)
{
	add_contact({ first_name, last_name, phone_number });
}

void Phonebook::remove_contact(const string& first_name, const string& last_name)
{
	for (int i = 0; i < contact.size(); ++i) {
		if (first_name_ == first_name && last_name_ == last_name)
			contact.erase(contact.begin() + i);
	}
}

string Phonebook::get_contact(const string& first_name, const string& last_name)
{
	for (int i = 0; i < contact.size(); ++i) {
		if (first_name == contact[i].first_name_ && contact[i].last_name_ == last_name)
			return contact[i].mobile_;
	}

	return {};
}

void print_book(const Phonebook& pb)
{
	cout << "The phonebook belongs to " << pb.last_name_ << ", " << pb.first_name_ << '\n';
	auto contacts = pb.contact;
	for (const auto& contact : contacts)
		cout << contact.last_name_ << ", " << contact.first_name_ << ", "
			 << contact.mobile_ << '\n';
}