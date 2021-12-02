#include <iostream>

using namespace std;

int main()
{
    int size{5};
    //Declare dynamic array
    int *Array{new int[size]};
    //Initialize dynamic array
    for (int i = 0; i < size; ++i)
    {
        Array[i] = i;
    }
    //Prints dynamic array
    for (int i = 0; i < size; ++i)
    {
        cout << Array[i] << " ";
    }
    // Deletes a memory allocated to dynamic array
    delete[] Array;
}