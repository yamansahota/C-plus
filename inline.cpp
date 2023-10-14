#include <iostream>
using namespace std;
class helo
{
    int a, b, add;

public:
    void get();
    void sum();
};
inline void helo::get()
    {
        cout<<"Enter Two Numbers : \n";
        cin>>a>>b;
    }
    inline void helo::sum()
    {
        add=a+b;
        cout<<"Sum of the two numbers are "<<add;
    }
 int main()
{
    helo h1;
    h1.get();
    h1.sum();
    return 0;
}