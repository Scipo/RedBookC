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
	for (int i = 1; i < n; i++)
	{
		if (a[i][0] < max)
		{
			max = a[i][0];
		}
	}

	for (int j = 1; j < n; ++j)
	{
		int min = a[0][j];
		for (int i = 1; i < n; ++i)
		{
			if (a[i][j] < min) min = a[i][j];
			if (min > max) max = min;
		}

	}

	cout << "Max from min rows is: " << max << endl;



	return 0;
}


/*
A)

int max = a[0][0];

for (int j = 1; j < n; j++)
{
if (a[0][j] < max)
max = a[0][j];
}


for (int i = 1; i < n; i++)
{
int min = a[i][0];
for (int j = 1; j < n; j++)
{
if (a[i][j] < min) min = a[i][j];
if (min > max)max = min;
}
}
*/