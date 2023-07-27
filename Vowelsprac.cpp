#include <iostream>
#include <string.h>
using namespace std;
class show
{
    char str[100];
    string A = "a", E = "e", I = "i", O = "o", U = "u";
    int i;

public:
    void getdata();
    void setdata();
};
void show::getdata()
{
    cout << "Enter String : " << endl;
    cin >> str;
}
void show::setdata()
{
    for (i = 0; str[i]; i++)
    {
        if (str[i] == 'a' || str[i] == 'A')
            A = A + str[i];
        else if (str[i] == 'e' || str[i] == 'E')
            E = E + str[i];
        else if (str[i] == 'i' || str[i] == 'I')
            I = I + str[i];
        else if (str[i] == 'o' || str[i] == 'O')
            O = O + str[i];
        if (str[i] == 'u' || str[i] == 'U')
            U = U + str[i];
        else
            continue;
    }
    cout << "Vowels appeared in the string : " << A[1] << E[1] << I[1] << O[1] << U[1];
}
int main()
{
    show a;
    a.getdata();
    a.setdata();
    return 0;
}