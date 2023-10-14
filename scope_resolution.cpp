#include <iostream>
using namespace std;
int m = 10;
int main()
{
    int m = 20;
    {
        int k = m;
        int m = 30;
        cout << "We are in Inner Block : ";
        cout << "k = " << k << "\n";
        cout << "m = " << m << "\n";
        cout << "::m = " << ::m << "\n";
    }
    cout << "We are in Outer Block : ";
    cout << m<<endl;
    cout << ::m;
    return 0;
}