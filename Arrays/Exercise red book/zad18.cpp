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
	
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i + j == n - 1)
			{
				sum += a[i][j];
			}
		}
	}
	cout << "Sum= " << sum << endl;

	int Nmulti = 1;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i + j < n - 1)
			{
				Nmulti *= a[i][j];
			}
		}
	}
	cout << "Nmulti= " << Nmulti << endl;
	
	int Pmulti = 1;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i + j > n - 1)
			{
				Pmulti *= a[i][j];
			}
		}
	}
	cout << "Pmulti= " << Pmulti << endl; 
	return 0;
}