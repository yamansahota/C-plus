#include <iostream>
using namespace std;
int main()
{
    int marks[] = {23, 45, 65, 78};
    int mathMarks[4];

    mathMarks[0] = 234;
    mathMarks[1] = 345;
    mathMarks[2] = 566;
    mathMarks[3] = 264;

    cout << "These are math marks" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;
    cout << "These are  marks" << endl;

    // We can change the array element:
    marks[2] = 450;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // We can use For loop for print the array elements

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "The value of marks " << i << " is " << marks[i] << endl;
    // }

    // Pointers and Arrays
    int *p = marks;

    cout << "The value of marks[0] is " << *p << endl;
    cout << "The value of marks[0] is " << *(p + 1) << endl;
    cout << "The value of marks[0] is " << *(p + 2) << endl;
    cout << "The value of marks[0] is " << *(p + 3) << endl;
    return 0;
}