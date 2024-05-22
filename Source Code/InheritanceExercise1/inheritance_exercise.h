#include <iostream>

namespace test_case0 {
	struct B {
		void f()
		{
			std::cout << "Calling B::f\n";
		}
	};

	struct D : B {
	};
} // of test_case0

namespace test_case1 {
	struct B {
		void f()
		{
			std::cout << "Calling B::f\n";
		}
	};

	struct D : B {
		void f()
		{
			std::cout << "Calling D::f\n";
		}
	};
} // of test_case1

namespace test_case2 {
	struct B {
		void f()
		{
			std::cout << "Calling B::f\n";
		}
	};

	struct D : B {
		int f(int i)
		{
			std::cout << "Calling D::f\t" << "i = " << i << '\n';
			return i;
		}
	};
} // of test_case2

namespace test_case3 {
	struct B {
		void g()
		{
			std::cout << "Calling B::g\n";
		}

	};

	struct D : B {
		void f()
		{
			B::g();
			std::cout << "Calling D::f" << '\n';
		}
	};
} // of test_case3

namespace copy_operations_slicing_test {
	struct B {
		int i = 10;
		double d = 3.14159;
	};
	inline std::ostream& operator<<(std::ostream& os, const B& b)
	{
		os << b.i << '\t' << b.d << '\n';
		return os;
	}
	struct D : B {
		int i = 42;
		double d = 2.7182;
	};

	inline std::ostream& operator<<(std::ostream& os, const D& d)
	{
		os << d.i << '\t' << d.d << '\n';
		return os;
	}
}

namespace base_and_derived_subobject_sizeof_test {
	struct B {
		int i = 10;
		double d = 3.14159;
	};
	struct D : B {
		int i = 42;
		double d = 2.7182;
	};	
}

namespace protected_members_access_test {
	class B {
	protected:
		int i = 0;
	};

	class D :public B {
	public:
		void incr_i()
		{
			++i;
		}

		void print_i() const
		{
			std::cout << i << '\n';
		}
	};
}

namespace base_class_and_derived_class_func_call_test {
	class Base {
	public:
		void f() { std::cout << "Base::f() called\n"; }
	};

	class Derived : public Base {
	public:
		void f() { std::cout << "Derived::f() called\n"; }
	};
}

namespace public_derivation_test {
	class Base {
	public:
		int i = 1;
	protected:
		double d = 3.14159;
	private:
		char c = 'A';
	};

	class Derived : public Base {
	public:
		void access()
		{
			++i;
			++d;
		///	++c; /// error
		}
	};
}

//namespace protected_derivation_test {
//	class Base {
//	public:
//		int i = 1;
//	protected:
//		double d = 3.14159;
//	private:
//		char c = 'A';
//	};
//
//	class Derived : protected Base {
//	public:
//		void access()
//		{
//			++i;
//			++d;
//			++c; /// error
//		}
//	};
//}

//namespace private_derivation_test {
//	class Base {
//	public:
//		int i = 1;
//	protected:
//		double d = 3.14159;
//	private:
//		char c = 'A';
//	};
//
//	class Derived : private Base {
//	public:
//		void access()
//		{
//			++i;
//			++d;
//			++c; /// error
//		}
//	};
//}

//namespace both_virtual_and_override_specifier {
//	struct Base {
//		virtual void f() override; /// error
//		virtual ~Base() override; /// error
//	};
//}

namespace derivation_from_two_different_bases {
	struct Base1 {
		// ...
	};

	struct Base2 {
		// ...
	};

	struct Derived :public Base1 {

	};

	struct Derived :public Base2 { /// error: 'Derived': type redefinition

	};
}