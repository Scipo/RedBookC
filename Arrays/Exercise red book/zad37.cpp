#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::setw;
using std::endl;

const int MAX_SIZE1 = 30;
const int MAX_SIZE2 = 7;

int main()
{
	int n;
	char a[MAX_SIZE1][MAX_SIZE1][MAX_SIZE2];

	do
	{
		cout << "Enter value of N from [1 to " << MAX_SIZE1 << "]: ";
		cin >> n;
	} while (n < 1 || n>30);
	cout << "Enter " << n << " rows with " << n << " symbols for the strig with max length " << MAX_SIZE2 - 1 << "!\n";

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
	char s1[MAX_SIZE1 * (MAX_SIZE2 - 1) + 1] = "";
	char s2[MAX_SIZE1 * (MAX_SIZE2 - 1) + 1] = "";
	for (int i = 0; i < n; ++i)
	{
		strcat_s(s1, a[i][i]);
		strcat_s(s2, a[n - i - 1][i]);
	}
	if (!strcmp(s1, s2))
	{
		cout << "Sentances are even" << endl;
	}
	else
	{
		cout << "They are not even" << endl;
	}
	return 0;
}