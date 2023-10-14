#include <iostream>
#include <stdio.h>
using namespace std;

class vowels
{

    string str;
    public:
    
    void setData()
    {
        cout << "Enter Your String : ";
        cin >> str;
    }

    void getData();
};
void vowels::getData()
    {
        int i = 0;
        int len = 0;
        while (str[i] != '\0')
        {
            len++;
        }
        cout << "All the Vowels are in the string are : \n";

        for (i = 0; i < len; i++)
        {
            if 
            (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')

            {
                cout << str[i] << " ";
            }
        }
    };

int main()
{
    vowels hello;
    hello.setData();
    hello.getData();

    return 0;
}