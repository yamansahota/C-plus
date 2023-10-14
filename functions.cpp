#include <iostream>
using namespace std;

// function prototype
// type function name (arguements);



int sum(int a, int b)
{
    int c= a + b;
    return c;
}

int main()
{
    int num1, num2;
    cout << "Enter First Number : " << endl;
    cin >> num1;
    cout << "Enter Second Numner : " << endl;
    cin >> num2;
    cout << "The sum of both numbers are " << sum(num1, num2);

    return 0;
}
