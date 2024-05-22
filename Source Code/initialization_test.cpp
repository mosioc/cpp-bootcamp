#include <iostream>
#include <vector>
int global_int; // Default initialization --> Zero initialized
int* global_free_mem_int = new int; // Default initialization --> Undefined behaviour
int* global_free_mem_int_uniform_init = new int{}; // Default initialization --> Undefined behaviour
int* global_free_mem_int_old_init = new int();
int* global_free_mem_int_with_explicit_init = new int{ 0 };
int a[5];
std::vector<int> v(5, 10);
int* global_array_free_mem = new int[5];
int* global_array_free_mem_uniform_init = new int[5]{1001};
int main()
{
	std::cout << "Global static integer: " << global_int << '\n';
	std::cout << "Global int from free memory: " << *global_free_mem_int << '\n';
	std::cout << "Global int from free memory with uniform initialization: " << *global_free_mem_int_uniform_init << '\n';
	std::cout << "Global int from free memory with old initialization: " << *global_free_mem_int_old_init << '\n';
	std::cout << "Global int from free memory with explicit initialization: " << *global_free_mem_int_with_explicit_init << '\n';

	for (auto elem : a)
		std::cout << elem << '\n';

	for (auto elem : v)
		std::cout << elem << '\n';
	std::cout << "-----------------------\n";
	for (int i = 0; i < 5; ++i)
		std::cout << global_array_free_mem[i] << '\n';

	std::cout << "-----------------------\n";

	for (int i = 0; i < 5; ++i)
		std::cout << global_array_free_mem_uniform_init[i] << '\n';
	std::cout << "-----------------------\n";
	int local_int = 42; // Default initialization --> undefined behaviour
	int* local_free_mem_int = new int; // Default initialization --> Undefined behaviour
	int* local_free_mem_int_uniform_init = new int{5}; // Default initialization --> Undefined behaviour
	int* local_free_mem_int_old_init = new int(5);
	int* local_free_mem_int_with_explicit_init = new int{ 5 };
	int a[5];
	std::vector<int> v(5);
	int* local_array_free_mem = new int[5];
	
	int* local_array_free_mem_uniform_init = new int[5]{ 1001, 1002, 1003, 1004, 1005 };

	std::cout << "Local integer: " << local_int << '\n';
	std::cout << "Local int from free memory: " << *local_free_mem_int << '\n';
	std::cout << "Local int from free memory with uniform initialization: " << *local_free_mem_int_uniform_init << '\n';
	std::cout << "Local int from free memory with old initialization: " << *local_free_mem_int_old_init << '\n';
	std::cout << "Local int from free memory with explicit initialization: " << *local_free_mem_int_with_explicit_init << '\n';

	for (auto elem : a)
		std::cout << elem << '\n';

	for (auto elem : v)
		std::cout << elem << '\n';

	for (int i = 0; i < 5; ++i)
		std::cout << local_array_free_mem[i] << '\n';

	for (int i = 0; i < 5; ++i)
		std::cout << local_array_free_mem_uniform_init[i] << '\n';

	return 0;
}