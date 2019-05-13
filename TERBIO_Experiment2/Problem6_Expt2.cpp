#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int n;
	int i;
	int sum = 0;

	do {
		cout << "Enter a number: "; cin >> n;
		i = n;

		for (i = 1; i <= n; i++)
		{
			sum = sum + i;
		}
	} while (n <= 0);

	cout << "The sum of whole numbers from 1 to " << n << " is: " << sum;

	_getch();
	return 0;
}