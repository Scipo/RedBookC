#include <iostream>

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
	} while (n < 1 || n > 10);

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
			int b = 1;
			int c = a[i][j];

			for (int k = 0; k < n; ++k)
			{
				if (k != i)
				{
					if (c>a[k][j]) b = 0;
				}
			}
			for (int k = 0; k < n; ++k)
			{
				if (k != j)
				{
					if (c < a[i][k]) b = 0;
				}
			}
			if (b)
			{
				cout << "YES";
			}
			else
			{
				cout << "NO"; 
			}
		}
	}


	

	
	
	return 0;

}