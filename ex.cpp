#include <iostream>
using namespace std;

class rect
{
    int len, bre;

public:
    rect(int a, int b)

    {
        len = a;
        bre = b;
    }

    int area()
    {
        return (len * bre);
    }
};

int main()
{
    rect obj(2, 4);
    cout << obj.area() << endl;
    return 0;
}