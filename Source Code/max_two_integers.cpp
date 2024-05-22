/*
* Maximum of two numbers
*/ 
#include <iostream>
int main()
{
    std::cout << "Enter two numbers: ";
    int a, b; // declaring multiple names
    std::cin >> a >> b;
    int max;
    if (a > b)
        max = a;
    else
        max = b;
    std::cout << "Max = " << max << std::endl;

    return 0;
}