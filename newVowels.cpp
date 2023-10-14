#include <iostream>
#include <string>
using namespace std;
int vowel(char c)
{
    switch (c)
    {
    case 'a':
    {
        return 0;
        break;
    }
    case 'A':
    {
        return 1;
        break;
    }
    case 'e':
    {
        return 2;
        break;
    }
    case 'E':
    {
        return 3;
        break;
    }
    case 'i':
    {
        return 4;
        break;
    }
    case 'I':
    {
        return 5;
        break;
    }
    case 'o':
    {
        return 6;
        break;
    }
    case 'O':
    {
        return 7;
        break;
    }
    case 'u':
    {
        return 8;
        break;
    }
    case 'U':
    {
        return 9;
        break;
    }
    default:
    {
        return 10;
        break;
    }
    }
}
int main()
{
    string str;
    int count[10] = {0}, x;
    cout << "Enter a string : ";
    cin >> str;
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        x = vowel(str[i]);
        if (x < 10)
            count[x] += 1;
    }
    cout << "\n a : " << count[0];
    cout << "\n e : " << count[2];
    cout << "\n i : " << count[4];
    cout << "\n o : " << count[6];
    cout << "\n u : " << count[8];
    cout << "\n A : " << count[1];
    cout << "\n E : " << count[3];
    cout << "\n I : " << count[5];
    cout << "\n O : " << count[7];
    cout << "\n U : " << count[9];

    return 0;
}