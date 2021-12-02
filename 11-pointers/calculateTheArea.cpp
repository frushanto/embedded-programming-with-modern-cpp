#include <iostream>

using namespace std;

void area(double *length, double *width, double *result)
{
    *result = *length * *width;
    // cout << *result << endl;
}

int main()
{
    double length{4.5}, width{6.7}, result{};
    area(&length, &width, &result);
    cout << result << endl;
}