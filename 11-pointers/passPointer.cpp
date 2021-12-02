#include <iostream>

using namespace std;

// function definition
void passPointer(int *number)
{
    // Multiply the number by 10
    *number = *number * 10;
    cout << "Value of number inside the function = " << *number << endl;
}

int main()
{
    // Initialize variable
    int num = 10;
    cout << "Value of number before function call = " << num << endl;
    // Call function
    passPointer(&num);
    cout << "Value of number after function call = " << num << endl;

    return 0;
}