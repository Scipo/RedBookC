#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

const int MAX_SIZE1 = 30;
const int MAX_SIZE2 = 10;

int main()
{
	int n;
	char a[MAX_SIZE1][MAX_SIZE1][MAX_SIZE2];

	do
	{
		cout << "Enter value of N from [1 to " << MAX_SIZE1 << "]: ";
		cin >> n;
	} while (n < 1 || n>30);
	cout << "Enter " << n << "rows with " << n << " symbols for the strig with max length " << MAX_SIZE2 - 1<<"!\n";
	
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
			cout << setw(MAX_SIZE2) << a[i][j] << endl;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int p = 0; p < n; ++p)
		{
			int k = p;
			char min[MAX_SIZE2];
			strcpy(min, a[i][p]);
			for (int j = p + 1; j < n; ++j)
			{
				if (strcmp(a[i][j], min) < 0)
				{
					strcpy(min, a[i][j]);
					k = j;
				}
			}
			strcpy(a[i][k], a[i][p]);
			strcpy(a[i][p], min);
		}
	}
	cout << endl << endl;
	cout << "\t\tSort MATRIX" << endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << setw(MAX_SIZE2) << a[i][j] << endl;
			
		}

	}
	return 0;
}
