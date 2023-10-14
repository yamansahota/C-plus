#include <iostream>
using namespace std;

class item
{
    int number;
    float cost;

public:
    void getdata(int a, float b);
    void putdata(){
    cout << "Number = " << number<<"\n";
    cout << "Cost = " << cost<<"\n";
    }
};
void item::getdata(int a, float b)
{
    number = a;
    cost = b;
}
int main()
{
    item x;
    cout << "\n Object x"
         << "\n";
    x.getdata(100, 29.85);
    x.putdata();

    item y;
    cout << "\n Object y "
         << "\n";
    y.getdata(34, 86.676);
    y.putdata();

    return 0;
}
