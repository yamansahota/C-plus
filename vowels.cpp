#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter Your String : ";
    cin >> str;

    int i = 0;
    int len = 0;
    while (str[len] )
    {
        len++;
    }
    cout << "All the vowels in the string are : \n";
    for (i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            cout << str[i] << " ";
        }
    }
}