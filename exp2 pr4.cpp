#include<iostream>
using namespace std;

int main()
{

	int c;
	for (c = 1; c <= 30;)
	{
		if (c <= 10)
		{
			cout << c << ",";
		}
		else if (c > 10 && c < 28)
		{
			cout << (c = c + 1) << ",";
		}
		else
		{
			cout << (c = c + 1);
		}
		c++;
	}
	system("pause");
	return 0;
}
