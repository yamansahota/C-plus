#include <iostream>
using namespace std;

int main()
{
    int var1, var2, temp;
    cout << "Enter Two Numbers : ";
    cin >> var1 >> var2;

    temp = var1;
    var1 = var2;
    var2 = temp;

    cout << "After Swapping the Value : " << var1 << "\n"
         << var2;
    return 0;
}