#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

	int c, a = 0, b = 1, t;
	cout << "Fibonacci numbers are...\n";
	for (c = 0; c < 22; c++)
	{
		if (c <= 1)
		{
			t = c;
		}

		else
		{
			t = a + b;
			a = b;
			b = t;

		}
		cout << t << " "<<endl;
	}
	system("pause");
	return 0;
}
