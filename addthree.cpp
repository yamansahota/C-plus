#include <iostream>
using namespace std;
class three
{
    int n, sum=0, rem;
    public:
    set()
    {
        cout<<"Enter the Number : ";
        cin>>n;
    }
    xyz()
    {
        while (n>0)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/ 10;
        }
        cout<<"The Sum of the Entered Number is "<<sum;
    }
};
    int main()
    {
        three a;
        a.set();
        a.xyz();
        return 0;
    }
