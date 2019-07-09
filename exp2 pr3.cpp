#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{

	int a;
	double V, b;
	const double z = 2.5;

	cout << "Input the value of x: " << endl;
	cin >> a;
	cout << "Input the value for y: " << endl;
	cin >> b;

	cout << setprecision(2) << fixed;


	switch (a)
	{
	case 1:
		if (b > 1 && b < 5)
		{
			V = a * b * z;
			cout << "The Value of V is: " << setw(10) << V << endl;
		}
		else if (b >= 5)
		{
			V = a + (b / z);
			cout << "The Value of V is: " << setw(10) << V << endl;
		}
		else
		{
			V = a + b + z;
			cout << "The Value of V is: " << setw(10) << V << endl;
		}
		break;

	case 2:
		if (b <= 5)
		{
			V = abs((a - b) / z);
			cout << "The Value of V is: " << setw(10) << V << endl;
		}
		else if (b > 5)
		{
			V = a - sqrt(b + z);
			cout << "The Value of V is: " << setw(10) << V << endl;
		}
		break;
	default:
	{
		V = a + b + z;
		cout << "The Value of V is: " << setw(10) << V << endl;
	}
	}
	system("pause");
	return 0;
}
