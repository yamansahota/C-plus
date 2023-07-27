#include <iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;

}ep;
 
union money
{
    int rice;
    char car;
    float pounds;

};

int main(){
    enum meal{breakfast,lunch,dinner};
    meal m1=dinner;
    cout<<(m1==2);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;

    // union money m1;
    // m1.rice=65;
    // m1.car='Y';
    // cout<<m1.car;

// By using typedef we can make a short code.
    
    // ep yaman;
    // yaman.eId=1;
    // yaman.favChar='j';
    // yaman.salary=145000000;
    // cout<<"The value is "<<yaman.eId<<endl;
    // cout<<"The value is "<<yaman.favChar<<endl;
    // cout<<"The value is "<<yaman.salary<<endl;
    // return 0;
}