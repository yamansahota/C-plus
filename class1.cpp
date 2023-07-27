// To find a area of triangle
#include <iostream>
using namespace std;
class rectangle
{
    int len, bre;

public:
    setData()
    {
        cout << "Enter the value of lenght : ";
        cin >> len;
        cout << "Enter the value of breadht : ";
        cin >> bre;
    }
    Area()
    {
        int calarea;
        calarea = len * bre;
        cout << "Area of triangle : " << calarea;
    }
};
int main()
{
    rectangle rect;
    rect.setData();
    rect.Area();

    return 0;
}
