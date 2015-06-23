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

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << a[i][j] << endl;
		}

	}

	for (int k = 0; k < n; ++k)
	{
		int i = -1;
		do
		{
			++i;
		} while (a[i][k] == a[k][i] && i < n - 1);
		if (a[i][k] == a[k][i])
		{
			cout << "k= " << k << endl;
		}
		else
		{
			cout << "There is no match\n" << endl;
		}
			
		
	}
	

	return 0;
}