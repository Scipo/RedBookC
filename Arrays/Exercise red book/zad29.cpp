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
	} while (n < 2 || n>10);

	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - 1; ++j)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
	
	double esp;
	do
	{
		cout << "eps= ";
		cin >> esp;
	} while (esp<0 || esp >0.1);
	bool flag = true;
	for (int i = 0; i < n && flag; ++i)
	{
		for (int j = 0; j < n&&flag; ++j)
		{
			double s = 0;
			for (int k = 0; k < n; ++k)
			{
				s += a[i][k] * a[k][j];
				if (i == j && fabs(s - 1) > esp || i != j && fabs(s) > esp)flag = false;
			
			}
			
		}
	}
	if (flag)
	{
		cout << "Matrix is Ortonometical" << endl;
	}
	else
	{
		cout << "Matrix is not Ortonometrical" << endl;
	}


	return 0;
}