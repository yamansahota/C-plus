#include <iostream>
#include <conio.h>
using namespace std;

class BOOK
{
	int BOOKNO;
	char BOOKTITLE[20];
	float PRICE;
	void TOTAL_COST(int N)
	{
		float tcost;
		tcost = PRICE * N;
		cout << tcost;
	}

public:
	void INPUT()
	{
		cout << "Enter Book Number : \n";
		cin >> BOOKNO;
		cout << "Enter Book Title : \n";
		cin>>BOOKTITLE;
		cout << "Enter price per copy : \n";
		cin >> PRICE;
	}

	void PURCHASE()
	{
		int n;
		cout << "Enter number of copies to purchase "<<endl;
		cin >> n;
		cout << "Total cost is ";
		TOTAL_COST(n);
	}
};

int main()
{
	BOOK obj;
	obj.INPUT();
	obj.PURCHASE();
	getch();
	return 0;
}
