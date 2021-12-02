#include <iostream>

using namespace std;

void sum_difference(int *value1, int *value2)
{
    int value1_aux = *value1;
    *value1 += *value2;
    *value2 = abs(value1_aux - *value2);
}

int main()
{
    int value1{2}, value2{6};
    sum_difference(&value1, &value2);
    cout << "Sum = " << value1 << endl;
    cout << "Absolute difference = " << value2 << endl;
}