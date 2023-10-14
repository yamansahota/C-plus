#include <iostream>
using namespace std;
class item
{
    static int count;
    int number;

public:
    void getdata(int a)
    {
        number = a;
        count++;
    }
    void getcount()
    {
        cout << "Count : ";
        cout << count << "\n";
    }
};
int item::count;
int main()
{
    item a, b, c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getcount(100);
    b.getcount(200);
    c.getcount(300);

    cout << "After reading data."
         << "\n";

    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}