#include<iostream>
#include<iomanip>


using namespace std;

int main()
{
	cout << "Package X: P995/mo - 10hrs of  internet. P20/hr for the exceeding hours " << endl;
	cout << "Package Y: P1495/mo - 20hrs if internet. P10/hr the exceeding hours" << endl;
	cout << "Package Z: P1995/mo - Unli internet " << endl;
	char pack;
	int tme, pay;

	cout << "\n\nEnter the letter of the package you seek to avail.(Enter the letter only): \n" << endl;
	cin >> pack;

	switch (pack)

	{

	case 'X':
	case 'x':
		cout << "How many hours did you consume? " << endl;
		cin >> tme;
		cout << " " << endl;
		if (tme > 10 && tme <= 744) // fixed number of days per month is 31 days
		{
			cout << "An additional P20/hr will be added to your bill for excess use of the internet." << endl;
			pay = 995 + 20 * (tme - 10);
			cout << "Your total amount due is: " << pay << endl;
		}

		else if (tme <= 10)
		{
			cout << "Total balance amount due is: P995" << endl;
		}
		else
		{
			cout << "Invalid Input " << endl;
		}
		break;

	case 'Y':
	case 'y':
		cout << "How many hours did you consume? " << endl;
		cin >> tme;
		cout << " " << endl;
		if (tme > 20 && tme <= 744)
		{
			cout << "An additional P10/hr will be added to your bill for excess use of the internet." << endl;
			pay = 1495 + 10 * (tme - 20);
			cout << "Total balance amount due is: " << pay << endl;
		}


		else if (tme <= 20)
		{
			cout << "Total balance due is: P1495" << endl;
		}

		else
		{
			cout << "Invalid Input" << endl;
		}
		break;


	case 'Z':
	case 'z':
		cout << "Total balance due is: P1995" << endl;
		break;
	}


	system("pause");

	return 0;
}