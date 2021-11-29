// C++ 14
#include <iostream>
using namespace std;

template <typename T>
T gcd(T a, T b)
{
    static_assert(std::is_integral<T>::value, "T should be an integral type");
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    cout << endl;

    // cout << gcd(3.5, 4.0) << endl; // should be gcd(3, 4)
    // cout << gcd("100", "10") << endl; // should be gcd(100, 10)
    cout << gcd(10, 2) << endl;
    cout << gcd(100, 10) << endl;

    cout << endl;
}