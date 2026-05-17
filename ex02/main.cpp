#include <iostream>
#include <string>
#include "Array.hpp"

int main()
{
    Array<int> a(5);
    for (std::size_t i = 0; i < a.size(); ++i)
        a[i] = static_cast<int>(i + 10);
    Array<int> b = a;
    b[0] = 42;

    std::cout << "a[2] = " << a[2] << std::endl;
    std::cout << "b[2] = " << b[0] << std::endl;

    b[2] = 42;
    std::cout << "b[2] replaced with 42 = " << b[2] << std::endl;

    Array<std::string> s(2);
    s[0] = "hello";
    s[1] = "world";
    std::cout << s[0] << " " << s[1] << std::endl;

    try
    {
        std::cout << a[6] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Out of bounds" << std::endl;
    }
    return (0);

}