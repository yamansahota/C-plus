#include <iostream>
using namespace std;
class jug
{
    int n, a, b, fac = 1;

public:
    set()
    {
        cout << "Press 1 for Greatest of Numbers\n";
        cout << "Press 2 for Factortial of Number\n";
        cout << "Press 3 for Positive or Negative Number\n";
        cout << "Press 4 for Exit\n";
        cin >> n;
    }
    area()
    {
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
            int i;
            for (i = 1; i <= n; i++)
            {
                fac = fac * i;
            }

            cout << " Factorial of the given number is " << fac;
            break;

        case 3:
            cout << "Enter The Positive or Negative Number : ";
            cin >> n;
            if (n <= 0)
            {
                cout << "This Number is Negative " << n;
            }
            else
            {
                cout << "This Number is Positive " << n;
            }

            break;

        case 4:
            cout << "EXIT!";
            break;
        }
    }
};
int main()
{
    jug rec;
    rec.set();
    rec.area();
    return 0;
}