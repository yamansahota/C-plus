#include <iostream>
using namespace std;
int main()
{
int x,y;
cout<<"Enter two Number : ";
cin>>x>>y;

x=x+y;
y=x-y;
x=x-y;

cout<<"After Swapping the Value : "<<x<<"\n"<<y;
return 0;
}