#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void    printElement(const T &elem)
{
    std::cout << elem << std::endl;
}

// non-const array + function that can modify elements
template <typename T>
void    iter(T array[], size_t length, void (*func)(T &))
{
    for (size_t i = 0; i < length; i++)
        func(array[i]);
}

// const array _ function that cannot modify elements
template <typename T>
void iter(const T array[], size_t length, void (*func)(const T &))
{
    for (size_t i = 0; i < length; i++)
        func(array[i]);
}

#endif