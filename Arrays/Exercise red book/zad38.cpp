#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::setw;
using std::endl;

const int MAX_SIZE1 = 20;
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
	cout << "Enter " << n << " rows with " << n << " symbols for the strig with max length " << MAX_SIZE2 - 1 << "!\n";

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}

	char s[MAX_SIZE1 * MAX_SIZE1*(MAX_SIZE2 - 1) + 1] = " ";
	int hor = 0;
	int ver = 0;
	while (hor < n / 2 && ver < n / 2)
	{
		for (int i = ver; i < n - ver; i++)
		{
			strcat_s(s, a[hor][i]);
		}
		for (int i = hor + 1; i < n - hor; ++i)
		{
			strcat_s(s, a[i][n - ver - 1]);
		}
		for (int i = n - ver - 2; i >= ver; i--)
		{
			strcat_s(s, a[n - hor - 1][i]);
		}
		for (int i = n - hor - 2; i > hor; i--)
		{
			strcat_s(s, a[i][ver]);
		}
		hor++;
		ver++;
	}
	if (n % 2)
	{
		for (int i = ver; i < n - ver; i++)
		{
			strcat_s(s, a[hor][i]);
		}
	}
	else
	{
		for (int i = hor; i < n - hor; i++)
		{
			strcat_s(s, a[i][ver]);
		}
	}
	cout << s << endl;
	return 0;
}