#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter Your age : ";
    cin >> age;

    if (age > 150 || age<4)
    {
        cout << "Invalid age.";
    }
    else if (age >= 18)
    {
        cout << "You can vote.";
    }

    else
    {
        cout << "You cannot vote.";
    }
}