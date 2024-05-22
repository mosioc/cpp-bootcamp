#include "nationalid.h"
#include <stdexcept>
#include <algorithm>

using std::string; using std::copy; using std::length_error;
using std::invalid_argument; using std::all_of; using std::ostream;

bool NationalID::is_valid() const
{
	/*
	* check the invariant
	*/
	auto result = all_of(id_clone.begin(), id_clone.end(),
						 [](char c) { return '0' <= c && c <= '9'; });
	if (!result)
		throw (invalid_argument{ "invalid ID: ID contains non-digit elements!" });
	if (id_clone.length() < ID_SIZE - 2 || id_clone.length() > ID_SIZE)
		throw (length_error{ "Invalid ID: ID length error!" });
#ifdef NEVER_DEF	
	if (id_clone.length() == ID_SIZE && id_clone.front() != '0') // the first element of id should be 0
		throw (invalid_argument{ "invalid ID: ID should be started by 0!" });
#endif // NEVER_DEF
	if (id_clone.length() == ID_SIZE - 1) // add single leading 0
		id_clone = '0' + id_clone;
	if (id_clone.length() == ID_SIZE - 2) // add a couple of leading 0
		id_clone = "00" + id_clone;

	return true;
}

NationalID::NationalID(const string& s) : id_clone{s}
{
	if (is_valid())
		// at this point, the id is valid: the length od id == 10
		copy(id_clone.begin(), id_clone.end(), id.begin());
}

bool NationalID::validate() const
{
	bool valid = false;
	auto sum = 0;
	for (int i = 0, position = 10; i < 9; ++i) {
		auto digit = id[i] - '0';
		sum += digit * position--;
	}

	auto reminder = sum % 11;
	/*
	*	if (reminder == 1)
	*		Control digit must be equal to 1
	*	else
	*		Control digit must be 11 - a
	*/
	if (reminder == 1 && id.back() - '0' == reminder)
		valid = true;
	else if ((reminder > 1) && (id.back() - '0') == (11 - reminder))
		valid = true;
	return valid;
}

ostream& operator<<(ostream& os, const NationalID& nid)
{
	string s = nid;
	os << s;

	return os;
}