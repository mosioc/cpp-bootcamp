#include "inheritance_exercise.h"

int main()
{
	/*{
		std::cout << "Test case 0\n";
		test_case0::B b;
		b.f();
		test_case0::D d;
		d.f();
		/// test_case0::D* dp = &b; // error
		test_case0::B* bp = &d;
		bp->f();
		std::cout << "==================\n";
	}

	{
		std::cout << "Test case 1\n";
		test_case1::B b;
		b.f();
		test_case1::D d;
		d.f();
		test_case1::B* bp = &d;
		bp->f();
		std::cout << "==================\n";
	}

	{
		std::cout << "Test case 2\n";
		test_case2::B b;
		b.f();
		test_case2::D d;
		auto i = d.f(1);
		test_case2::B* bp = &d;
		bp->f();
		/// bp->f(1); // error
		std::cout << "==================\n";
	}

	{
		std::cout << "Test case 3\n";
		test_case3::D d;
		d.f();
		std::cout << "==================\n";
	}

	{
		using namespace copy_operations_slicing_test;
		std::cout << "==================\n";
		std::cout << "Copy operation slicing test\n";
		copy_operations_slicing_test::D d;
		copy_operations_slicing_test::B b = d;
		d = b;
		std::cout << b << '\n';
		std::cout << d << '\n';

		std::cout << "==================\n";

	}
	{
		using namespace base_and_derived_subobject_sizeof_test;
		std::cout << "==================\n";
		std::cout << sizeof(B) << '\n';
		std::cout << sizeof(D) << '\n';
		std::cout << "==================\n";
	}*/

	{
		using namespace protected_members_access_test;
		std::cout << "==================\n";
		B b;
		D d;
		d.print_i();
		d.incr_i();
		d.print_i();
		std::cout << "==================\n";
	}

	{
		using namespace base_class_and_derived_class_func_call_test;
		Base b;
		b.f();

		Derived d;
		d.f();

		Base* pb = new Derived();
		pb->f();
		delete pb;
	}

	/*{
		using namespace private_derivation_test;
		
		Derived d;
		d.access();
	}*/

	{
		using namespace derivation_from_two_different_bases {
			Derived d;

		}
	}
}