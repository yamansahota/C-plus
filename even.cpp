#include <iostream>
using namespace std;

class kam
{
    int sum_odd, sum_even, N , i;
    odd=0;
    even=0;
    N=20;
    void setData(int odd , int even);
    void getData()
    {
        for (i = 1; i <= N; i++)
    {

        if ((i % 2) == 0)
        {

            sum_even = sum_even + i;
        }
        else
        {

            sum_odd = sum_odd + i;
        }
    }
    void kam::setData(int odd , int even)
    {
         for (i = 0; i < 35; i++)
        cout << "_";
    cout << "\n\n";

    cout << "The sum of 10 evens are"

         << "\t" << sum_even<<endl;

    cout << "The sum of 10 odd are"
         << "\t" << sum_odd<<endl;

    for (i = 0; i < 35; i++)
    }
    }
};
int main()
{
    kam yam();
    yam.setData(int sum_odd, int sum_even);
    yam.getData();
    return 0;
}