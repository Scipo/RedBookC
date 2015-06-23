#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a[10][10];
	int n;
	int sum = 0;
	int newSum = 0;
	bool fail = false;

	do
	{
		cout << "n= ";
		cin >> n;
	} while (n < 2 || n>10);

	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - 1; ++j)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}


	for (int i = 0; i < n; ++i)
	{
		sum += a[i][i];
	}
	for (int i = n - 1; i >= 0; --i)
	{
		newSum = a[i][n - 1 - i];
	}

	if (!(fail = sum != newSum))
	{
		for (int i = 0; (i < n) && !fail; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (!j)
				{
					if (i && (sum != newSum))fail = true;
					{
						newSum = 0;
					}
				}
				newSum += a[i][j];
			}
		}
	}
	cout << endl;
	for (int i = 0; (i < n) && !fail; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (!j)
			{
				if (i && (sum != newSum))fail = true;
				{
					newSum = 0;
				}
			}
			newSum += a[j][i];
		}
	}
	if (!fail)
	{
		cout << "Matrix is Magiacl" << endl;
	}
	else
	{
		cout << "Matrix is not Magical" << endl;
	}
	
	

	return 0;

}