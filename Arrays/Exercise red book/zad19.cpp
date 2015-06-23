#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a[10][20];
	int n;
	int k;
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


	cout << "K [0-" << n - 1 << "]: ";
	cin >> k;
	if (k != n - 1)
	{
		for (int i = k + 1; i < n; ++i)
		{
			for (int j = k + 1; j < n; ++j)
			{
				a[i - 1][j - 1] = a[i][j];
			}
		}
		n--;
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << a[i][j] << endl;
			
		}
	}
	return 0;
}