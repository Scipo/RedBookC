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
	cout << "Enter " << n << "rows with " << n << " symbols for the strig with max length " << MAX_SIZE2 - 1 << "!\n";

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


	int br = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			int len = strlen(a[i][j]);
			char rev[MAX_SIZE2];
			for (int k = len - 1; k >= 0; k--)
			{
				rev[len - k - 1] = a[i][j][k];
				rev[len] = '\0';
				if (!strcmp(a[i][j], rev))br++;
			}
		}
	}
	cout << "Number of palindrom is: " << br << endl;
	return 0;
}