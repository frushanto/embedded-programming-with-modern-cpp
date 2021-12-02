#include <iostream>

using namespace std;

// Student structure
struct Student
{
    string name;
    int roll_number;
    int marks;
};

// main function
int main()
{
    // Declare structure variable
    struct Student s1;
    // Declare structure pointer
    struct Student *ptrs1 = &s1;

    // "(*ptrs1)." is quivalent to "ptrs1->"
    // Set value of name
    ptrs1->name = "John";
    // Set value of roll_number
    ptrs1->roll_number = 1;
    // Set value of marks
    ptrs1->marks = 50;

    // Print value of structure member
    cout << "s1 Information:" << endl;
    cout << "Name = " << (*ptrs1).name << endl;
    cout << "Roll Number = " << (*ptrs1).roll_number << endl;
    cout << "Marks = " << (*ptrs1).marks << endl;

    return 0;
}