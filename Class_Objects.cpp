#include <iostream>
#include <string>
using namespace std;

class employee
{

public:
    string name;
    int salary;

    employee(string n, int s,int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword=sp;
    }

    void printDetails()
    {
        cout << "The first person name is " << this->name << " and his salary is " << this->salary << " Dollars" << endl;
    }

    void getSecretPassword()
    {
        cout<<"The secret password of employee is "<<this->secretPassword;
    }
        private:
        int secretPassword;
};
int main()
{
    employee yam("Yaman Sahota", 456,654614);
    // yam.name="Yaman";
    // yam.salary=456;
    yam.printDetails();
    yam.getSecretPassword();
    // cout<<yam.secretPassword;
}
