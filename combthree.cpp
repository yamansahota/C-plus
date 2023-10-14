#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    int arr[3];

    cout << "Enter First Number : ";
    cin >> arr[0];
    cout << "Enter Second Number : ";
    cin >> arr[1];
    cout << "Enter Third Number : ";
    cin >> arr[2];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                if (i != j &&j != k && k != i)
                {
                    cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"\n";
                }
            }
        }
    }
}