#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

	int gallonsUsed;
	float lastMonth;
	float toPay;
	const float demandCharge = 35;
	const float consumptionCharge = 1.10;

	cout << "Enter unpaid balance last month: "; cin >> lastMonth;
	cout << "Enter unpaid balance this month: "; cin >> gallonsUsed;

	if (lastMonth < 0 && gallonsUsed < 0)
	{
		cout << "Amount invalid! ";
	}

	else if (lastMonth > 0)
	{
		toPay = demandCharge + (consumptionCharge * gallonsUsed) + lastMonth;
		cout << "Water bill: Php" << toPay;
	}
	_getch();
	return 0;
}