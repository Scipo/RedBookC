#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

const int MAX_SIZE1 = 50;
const int MAX_SIZE2 = 100;

int main()
{
	int n;
	int m;
	do
	{
		cout << "Enter N from[1, " << MAX_SIZE1 << "]: ";
		cin >> n;
	} while (n<1 || n>MAX_SIZE1);
	
	int a[MAX_SIZE1][3];

	cout << "Enter " << n << " rows with 3 intiger numbers" << endl;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}


	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << setw(5) << a[i][j];
			cout << endl;
		}
	}



	do
	{
		cout << "Enter M from[ 1, " << MAX_SIZE1 << "]: ";
		cin >> m;
	} while (m<1 || m>MAX_SIZE1);

	int b[MAX_SIZE1][3];
	cout << "Enter " << m << " rows with 3 int numbers" << endl;

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> b[i][j];
		}
	}


	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << setw(5) << b[i][j];
			cout << endl;
		}
	}
	
	int c[MAX_SIZE2][3];
	int i = 0; 
	int j = 0; 
	int k = -1;

	while (i < n && j < m)
	{
		if (a[i][0] < b[j][0] || a[i][0] == b[j][0] && a[i][1] < b[j][1])
		{
			++k;
			c[k][0] = a[i][0];
			c[k][1] = a[i][1];
			c[k][2] = a[i][2];
			++i;
		}
		else if (a[i][0] > b[j][0] || a[i][0] == b[j][0] && a[i][1] > b[j][1])
		{
			++k;
			c[k][0] = b[j][0];
			c[k][1] = b[j][1];
			c[k][2] = b[j][2];
			++j;
		}
		else
		{
			if (a[i][2] + b[j][2] != 0)
			{
				++k;
				c[k][0] = a[i][0];
				c[k][1] = a[i][1];
				c[k][2] = a[i][2] + b[j][2];
			}
			++i; ++j;
		}
	}

	while (j < m)
	{
		++k;
		c[k][0] = b[j][0];
		c[k][1] = b[j][1];
		c[k][2] = b[j][2];
		++j;
	}
	while (i < n)
	{
		++k;
		c[k][0] = a[i][0];
		c[k][1] = a[i][1];
		c[k][2] = a[i][2];
		++i;
	}
	k++;
	cout << "The Sum is" << endl;
	for (i = 0; i < k; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			cout << setw(5) << c[i][j];
			cout << endl;
		}
	}

	return 0;
}
