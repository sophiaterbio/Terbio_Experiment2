#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i;
	int n1 = 0;
	int n2 = 1;
	int nextNum = 0;

	cout << "Fibonacci numbers: \n";

	for (i = 0; i <= 20; i++)
	{
		n1 = n2;
		n2 = nextNum;
		nextNum = n1 + n2;
		cout << ", " << nextNum;	
	}
	_getch();
	return 0;
}