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

	char s[MAX_SIZE2];
	cout << "Enter the word: ";
	cin >> s;
	int br = 0;
	for (int i = 0; i < n-2; ++i)
	{
		for (int j = 0; j < n-i-2; ++j)
		{
			if (!strcmp(a[i][j], s))br++;
		}
	}
	cout << "The number of the words [" << s << "] is " << br << endl;

	return 0;
}