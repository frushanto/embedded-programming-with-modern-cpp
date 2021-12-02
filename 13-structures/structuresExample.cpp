#include <iostream>

using namespace std;
// structure Student
struct Student
{
    string name;
    int roll_number;
    int marks;
};
// main function
int main()
{
    struct Student s[100];

    s[0] = {"John", 1, 50};

    cout << "s1 Information:" << endl;
    cout << "Name = " << s[0].name << endl;
    cout << "Roll Number = " << s[0].roll_number << endl;
    cout << "Marks = " << s[0].marks << endl;

    s[1] = {"Alice", 2, 43};

    cout << "s2 Information:" << endl;
    cout << "Name = " << s[1].name << endl;
    cout << "Roll Number = " << s[1].roll_number << endl;
    cout << "Marks = " << s[1].marks << endl;

    return 0;
}
