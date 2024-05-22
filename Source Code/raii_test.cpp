#include <vector>
#include <string>
#include <array>
#include <memory>
#include <iostream>

class ArrayLengthError {

};
class X {
public:
    X()
    {
        std::cout << "Calling X::X()\n";
    }
    ~X()
    {
        std::cout << "Calling X::~X()\n";
    }
    // …
};

void f()
{
    X x; // constructor
    std::vector<int> v{ 0, 1, 2 };
    std::string s("Hello, world");
    std::array<X, 5> ax;
    //    std::unique_ptr<X> ux(new X);
    if (ax.size() >= 5)
        throw ArrayLengthError();
} // calling destructor(s) at the end of scope (in reverse order)

struct Y {
    X x;
};

int main()
{
   try {
        f();
     //   {
       //     std::array<X, 5> ax;
        //    std::unique_ptr<X> ux(new X);
         //   if (ax.size() >= 5)
         //       return 0;
        //    Y y_obj;
       // }
    }
    catch (...)
    {

    }
}
