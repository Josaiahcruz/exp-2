#include<iostream>

using namespace std;

int main()
{
	int i, s = 0, n;


	cout << "Enter a number: ";
	cin >> n;

	while (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			s = (n * (n + 1)) / 2;
		}
		cout << "The sum of all whole numbers from 1 to " << n << " is " << s << endl;
		cout << "Enter a number: ";
		cin >> n;
	}
	cout << "Thank you :)" << endl;

	system("pause");
	return 0;
}
