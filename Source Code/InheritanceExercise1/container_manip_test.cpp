// ContainerTest.cpp : Defines the entry point for the console application.
//

#include <list>
#include <forward_list>
#include <array>
#include <vector>
#include <iostream>
#include <unordered_map>
#include <map>
#include <utility>
#include <string>
#include <algorithm>
#include <iterator>
using std::vector; using std::list; using std::map;
using std::string; using std::array; using std::cout;
using std::unordered_map; using std::pair; using std::forward_list;
using std::ostream_iterator; using std::replace_copy;
class X {
	//	X(const X&) = delete;
public:
	X() {}
};
/*
	VERY IMPORTANT NOTE: TO EXPERIEMENT "C++98-BASED" FEATURES OF STL
*/
int main()
{
	/* vector */
	vector<X> vec_of_x;
	vec_of_x.push_back(X());
	vector<int> v; // empty vector
	v.resize(5); // resize the vector

	v.empty() ? cout << "Vector is empty\n" : cout << "Vector isn't empty\n";
	for (vector<int>::const_iterator cit = v.begin(); cit != v.end(); ++cit) // iteratoe over all elements: old fashion: C++98
		cout << *cit << '\n';

	for (const auto& elem : v) // iteratoe over all elements: old fashion: C++11 and beyond
		cout << elem << '\n';

	*v.begin() = 1; // assign 1 to 1st element

	//*v.cbegin() = 2;
	cout << "The size of vector = " << v.size() << '\n'; // the vector size 
	cout << v[0] << '\t' << v[1] << '\t' << v[2] << '\n';


//	*v.end() = 10;

	/* ----- list ----- */
	list<double> ld = { 3.1415, 2.7182, 10.0, 0.0 };
	ld.resize(10);
	for (list<double>::const_iterator cit = ld.begin(); cit != ld.end(); ++cit) // old-fashion: C++98
		cout << *cit << '\n';

	for (const auto& elem : ld) // iteratoe over all elements: old fashion: C++11 and beyond
		cout << elem << '\n';

	ld.push_back(0.01);
	ld.push_front(0.01);
	
	for (list<double>::const_iterator cit = ld.begin(); cit != ld.end(); ++cit) // old-fashion: C++98
		cout << *cit << '\n';

	list<double>::const_iterator cit = find(ld.cbegin(), ld.cend(), 3.1415);
	if (cit != ld.end()) {
		ld.insert(cit, 3.1515); // insert before cit
		ld.insert(cit, 3, 3.1515); // insert before cit
	}

	for (const auto& elem : ld) // iteratoe over all elements: old fashion: C++11 and beyond
		cout << elem << '\n';

	if (cit != ld.end())
		//ld.erase(cit + 1);

	for (list<double>::const_iterator cit = ld.begin(); cit != ld.end(); ++cit) // old-fashion: C++98
		cout << *cit << '\n';
	///* ----- map ----- */
	map<int, string> int2str;
	int2str[0] = "Zero";
	int2str.insert(pair<int, string>{ 1, "One" });
	int2str.insert(pair<int, string>{ -1, "Negative one" });
	cout << "The size of map is = " << int2str.size() << '\n';
	for (map<int, string>::const_iterator cit = int2str.begin(); cit != int2str.end(); ++cit)
		cout << "int2str[" << cit->first << "] = " << cit->second << '\n';

	///* ----- unordered map ----- */
	// Create an unordered_map of three strings (that map to strings)
	unordered_map<string, string> u = {
		{ "RED", "#FF0000" },
		{ "GREEN", "#00FF00" },
		{ "BLUE", "#0000FF" }
	};

	for (unordered_map<string, string>::const_iterator cit = u.begin(); cit != u.end(); ++cit)
		cout << "u[" << cit->first << "] = " << cit->second << '\n';

	/* ----- array ----- */
	array<int, 4> arr; // compile-time size
	arr.push_back(); // no push_back

	forward_list<int> f{ 0, 1, 2 };

	copy(f.begin(), f.end(), ostream_iterator<int>(cout, "\n"));

	return 0;
}

