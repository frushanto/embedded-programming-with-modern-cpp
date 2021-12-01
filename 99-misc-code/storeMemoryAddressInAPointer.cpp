#include <iostream>
#include <cstdint>
#include <sstream>

int main()
{
    int i = 1234567;
    const int *p = &i;

    std::string address;
    {
        std::ostringstream ostm;
        ostm << reinterpret_cast<std::uintptr_t>(p);
        address = ostm.str();
    }

    std::uintptr_t n;
    {
        std::istringstream istm(address);
        istm >> n;
    }

    const int *q = reinterpret_cast<const int *>(n);

    std::cout << "the int at address " << p << " is " << *p << '\n'
              << "the int at address " << q << " is " << *q << '\n';
}