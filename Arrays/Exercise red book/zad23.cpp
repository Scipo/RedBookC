#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a[10][10];
	int n;

	do
	{
		cout << "n= ";
		cin >> n;
	} while (n < 1 || n>10);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}

	int max = a[0][0];
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int tmp = a[i][j];

			if (tmp % 2 != 0 && tmp > max)
			{
				max = a[i][j];
			}
		}
		
	}
	cout << "Max odd Number is: " << max << endl;
	
	return 0;
}

