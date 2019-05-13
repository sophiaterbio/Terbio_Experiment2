#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char package;
	float time;
	float price;
	{
		cout << "Enter package purchased: "; cin >> package;
		cout << "Enter hours used: "; cin >> time;

		if (package == 'A' && package == 'a' && package == 'B' && package == 'b' && package == 'C' && package == 'c')
		{
			cout << "Package does not exist! ";
		}

		if (time < 0)
		{
			cout << "Number of hours is invalid! ";
		}

		else
		{
			switch (package)
			{
			case 'a':
			case 'A':
				if (time <= 10)
					price = 995;
				else
					price = 995 + (time - 10) * 20;
				break;
			case 'b':
			case 'B':
				if (time <= 20)
					price = 1495;
				else
					price = 1945 + (time - 20) * 10;
				break;
			case 'c':
			case 'C':
				price = 1995;
				break;
			}
			cout << "Total amount due: Php" << price;
		}
	}
		

	_getch();
	return 0;
}