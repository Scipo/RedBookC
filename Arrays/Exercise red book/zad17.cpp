#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

//zad17 uchb

int main()
{
	int n;
	int a[10][10];
	
	do
	{
		cout << "n= ";
		cin >> n;
	} while (n < 1 || n>10);
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << "a[" << i << "][" << j << "] ";
			cin >> a[i][j];
		}
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			
			if (a[i][j] % 2 == 1&& i >j)
			{
				sum += a[i][j];
			}
			
		}


	}
	cout << "Sum= " << sum << endl;
	
	int multi = 1;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			int tmp = a[i][j];
			if (tmp % 10 == 5)
			{
				tmp = a[i][j] / 10;
				multi *= a[i][j];
			}
		}
	}
	cout << "Multi= " << multi << endl;

	return 0;
}
