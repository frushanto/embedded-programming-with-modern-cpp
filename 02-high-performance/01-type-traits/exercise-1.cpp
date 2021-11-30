#include <iostream>
#include <type_traits>

int main()
{
    // displays either true or false instead of 1 or 0
    std::cout << std::boolalpha << std::endl;

    std::cout << "std::is_const<std::add_const<int>::type>::value: " << std::is_const<std::add_const<int>::type>::value << std::endl;
    std::cout << "std::is_const<std::remove_const<const int>::type>::value: " << std::is_const<std::remove_const<const int>::type>::value << std::endl;

    std::cout << std::endl;
    typedef std::add_const<int>::type myConstInt;
    std::cout << "std::is_const<myConstInt>::value: " << std::is_const<myConstInt>::value << std::endl;
    typedef const int myConstInt2;
    std::cout << "std::is_same<myConstInt, myConstInt2>::value: " << std::is_same<myConstInt, myConstInt2>::value << std::endl;

    std::cout << std::endl;
}

float min(float x, float y, float z){
    return x < y ? (x < z ? x : z) : (y < z ? y : z);
}