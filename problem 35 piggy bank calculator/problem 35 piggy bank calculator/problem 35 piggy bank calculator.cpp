#include<iostream>
#include<string>

using namespace std;
struct stPiggyBankContent
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{
	stPiggyBankContent PiggyBankContent;

	cout << "plase enter total numbers of pennies: " << endl;
	cin >> PiggyBankContent.Pennies;
	cout << "plase enter total numbers of Nickels: " << endl;
	cin >> PiggyBankContent.Nickels;
	cout << "plase enter total numbers of Dimes: " << endl;
	cin >> PiggyBankContent.Dimes;
	cout << "plase enter total numbers of Quarters: " << endl;
	cin >> PiggyBankContent.Quarters;
	cout << "plase enter total numbers of Dollars: " << endl;
	cin >> PiggyBankContent.Dollars;
	return PiggyBankContent;
}

int CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
	int TotalPennies = PiggyBankContent.Pennies * 1
		+ PiggyBankContent.Nickels * 5
		+ PiggyBankContent.Dimes * 10
		+ PiggyBankContent.Quarters * 25
		+ PiggyBankContent.Dollars * 100;
	return TotalPennies;
}

int main()
{
	int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());
	cout << "Total Pennies = " << TotalPennies << endl;
	cout << "Total Dollars = $" << (float)TotalPennies / 100;
	return 0;
}