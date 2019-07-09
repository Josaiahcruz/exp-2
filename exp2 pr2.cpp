#include<iostream>

using namespace std;

int main()
{
	double g, bal, t;

	cout << "Enter Customer's Water bill" << endl;
	cout << "Enter the total from the previous and this month in Gallons. " << endl;
	cin >> g;
	cout << "Input customer's remaining balance: \n" << endl;
	cin >> bal;


	if (bal > 0)
	{
		t = 55 + (g * 1.10) + bal;
		cout << "A late charge of P20 and P35 for water demand charge was added onto the bill." << endl;
		cout << "The current water bill is: " << t << endl;
	}
	else
	{
		cout << "P35 was added for water demand charge." << endl;
		t = 35 + (g * 1.10);
		cout << "The current water bill is: " << t << endl;
	}


	system("pause");

	return 0;

}