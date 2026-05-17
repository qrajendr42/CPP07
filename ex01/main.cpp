#include "iter.hpp"

void addTen(int &x)
{
    x += 10;
}

int main()
{
    int arrInt[5] = {1, 2, 3, 4, 5};

    std::cout << "Int array:" << std::endl;
    iter(arrInt, 5, printElement);
    std::cout << " " << std::endl;

    std::cout << "Add 10 to int array:" << std::endl;
    iter(arrInt, 5, addTen);
    iter(arrInt, 5, printElement);
    std::cout << " " << std::endl;

    std::string arrStr[3] = {"Ali", "Abu", "4242"};

    std::cout << "String array:" << std::endl;
    iter(arrStr, 3, printElement);
    std::cout << " " << std::endl;

    const int constArr[3] = {10, 20, 30};

    std::cout << "Const int array:" << std::endl;
    iter(constArr, 3, printElement);

    return (0);
}