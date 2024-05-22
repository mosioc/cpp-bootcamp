/*
* Jagged Array: https://en.wikipedia.org/wiki/Jagged_array
* 
*/
#include <array>
#include <vector>
#include <iostream>

using std::array; using std::vector; using std::cout;

int main()
{
	// method #1: array of vectors with initializers list
	array<vector<int>, 3 > jagged_array; // implement jagged array with array and vector
	jagged_array[0] = vector<int>{ 0, 1, 2 };
	jagged_array[1] = vector<int>{ 0, 1 };
	jagged_array[2] = vector<int>{ 0 };

	// method #2: vector of vectors with initializers list
	vector<vector<int>> jagged_array2(10);
	jagged_array2[0] = vector<int>{ 0, 1, 2 };
	jagged_array2[1] = vector<int>{ 0, 1 };
	jagged_array2[2] = vector<int>{ 0, 1, 2, -1 };

	// method #3: array of vectors with push back
	array<vector<int>, 3 > jagged_array3; // implement jagged array with array and vector
	jagged_array3[0] = vector<int>(); // empty vector
	jagged_array3[0].push_back(0);
	jagged_array3[0].push_back(1);
	jagged_array3[0].push_back(2);
	jagged_array3[1] = vector<int>();
	jagged_array3[1].push_back(0);
	jagged_array3[1].push_back(1);
	jagged_array3[2] = vector<int>();
	jagged_array3[2].push_back(0);

	// method #4: vector of vectors with push_back
	vector<vector<int>> jagged_array4(10);
	jagged_array4[0] = vector<int>();
	jagged_array4[0].push_back(0);
	jagged_array4[0].push_back(1);
	jagged_array4[0].push_back(2);
	jagged_array4[1] = vector<int>();
	jagged_array4[1].push_back(0);
	jagged_array4[1].push_back(1);
	jagged_array4[2] = vector<int>();
	jagged_array4[2].push_back(0);
	jagged_array4[2].push_back(1);
	jagged_array4[2].push_back(2);
	jagged_array4[2].push_back(-1);

	cout << "Jagged array: \n";
	for (const auto& elem : jagged_array) {
		cout << '{';
		for (const auto& e : elem)
			cout << e << ", ";
		cout << '}' << '\n';
	}
	cout << "Jagged array2: \n";
	for (const auto& elem : jagged_array2) {
		cout << '{';
		for (const auto& e : elem)
			cout << e << ", ";
		cout << '}' << '\n';
	}
	cout << "Jagged array3: \n";
	for (const auto& elem : jagged_array3) {
		cout << '{';
		for (const auto& e : elem)
			cout << e << ", ";
		cout << '}' << '\n';
	}
	cout << "Jagged array4: \n";
	for (const auto& elem : jagged_array4) {
		cout << '{';
		for (const auto& e : elem)
			cout << e << ", ";
		cout << '}' << '\n';
	}

	return 0;
}