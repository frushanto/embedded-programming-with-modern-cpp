#include <iostream>

void xchgUsingReferences(int &x, int &y)
{ 
    // Reference parameters
    int t = x;
    x = y;
    y = t;
}

void xchgUsingPointers(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int a = 10;
    int b = 20;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    xchgUsingReferences(a, b);
    std::cout << std::endl;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    xchgUsingPointers(&a, &b);
    std::cout << std::endl;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
}