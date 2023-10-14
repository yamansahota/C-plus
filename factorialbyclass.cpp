#include<iostream>
using namespace std;

class hell
{
    int i,fact=1, number;
    public:
    set()
    {
        cout<<"Enter the Number  : ";
        cin>>number;
    }
    a()
    {
        for ( i = 1; i <=number; i++)       
        {
            fact=fact*i;
        }
        cout<<"Factorial of "<<number<<" is "<<fact;
    }

};
int main()
{
    hell b;
    b.set();
    b.a();
    return 0;
}