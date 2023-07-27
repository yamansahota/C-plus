#include <iostream>
using namespace std;
int c = 45;
int main()
{

    // Global and local variable scope:

    // int a, b, c;
    // cout << "Enter first number " << endl;
    // cin >> a;
    // cout << "Enter Second number " << endl;
    // cin >> b;
    // c = a + b;
    // cout << "The sum of two number is " << c << endl;
    // cout<<"The Global scope of c is "<<::c;

    // ______________Literals in C++________________

    // float d = 34.4F;
    // long double e = 34.4L;

    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    //  cout<<"The size of 34.4 is "<<sizeof(34.4f)<<endl;
    //   cout<<"The size of 34.4 is "<<sizeof(34.4F)<<endl;
    //    cout<<"The size of 34.4 is "<<sizeof(34.4l)<<endl;
    //     cout<<"The size of 34.4 is "<<sizeof(34.4L)<<endl;

    // cout << "The value of d is " << d << endl
    //      << "The value of e is " << e;

    // _________Reference Variable______________

    // float x = 4545;
    // float &y = x;
    // cout << x << endl;
    // cout << y << endl;

    // ____________Type Casting________
    int a = 45;
    float b = 56.25;
    cout << "The value of a is " << (float)a<<endl;
    cout << "The value of b is " << (int)b;
    return 0;
}
