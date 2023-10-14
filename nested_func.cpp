#include <iostream>
using namespace std;
class list
{
    int n, i, list[10];
    void display();

public:
    void readlist();
    void modify();
};
void list::readlist()
{
    cout << "Enter the lenght of list : ";
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> list[i];
}
void list::modify()
{
    for (i = 0; i < n; i++)
        list[i] = list[i] * 5;

    display();
}
void list::display()
{
    cout << "The list is : ";
    for (i = 0; i < n; i++)
    {
        cout << list[i] << endl;
    }
}

int main()
{
    list sre;
    sre.readlist();
    sre.modify();
    return 0;
}