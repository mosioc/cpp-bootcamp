#include <iostream>

int main()
{
    const int i = 2;
    switch (i)
    {
    case 1:
        std::cout << '1';
        break;
    case 2:              // execution starts at this case label
        std::cout << '2';
        [[fallthrough]];
    case 3:
        std::cout << '3';
        [[fallthrough]]; // C++17 attribute to silent the warning on fallthrough
    case 5:
        std::cout << "45";
        break;           // execution of subsequent statements is terminated
    case 6:
        std::cout << '6';
    }

    return 0;
}