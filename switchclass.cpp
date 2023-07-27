#include <iostream>
using namespace std;
int main()
{

    int n, i, a, b, A, S, M, c, d, fac = 1;
    float D;
    cout << "Press 1 for Greatest of Numbers\n";
    cout << "Press 2 for Factortial of Number\n";
    cout << "Press 3 for Exit\n";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << " Enter any two numbers : ";
        cin >> a;
        cin >> b;
        if (a > b)
        {
            cout << "First number is" << a << " greater";
        }
        else
        {
            cout << " Second numbers is " << b << " greater";
        }
        break;

    case 2:
        cout << "Enter any number for find Factorial : ";
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            fac = fac * i;
        }

        cout << " Factorial of the given number is" << fac;
        break;

    case 3:
        cout<<"EXIT!";
        break;
    }
    return 0;
}
