#include<iostream>
#include<string>
using namespace std;
void ReadNumbers(float& TotalBill, float& CashPaid)
{
	cout << "Please enter the totalbill : " << endl;
	cin >> TotalBill;

	cout << "Please enter the CashPaid : " << endl;
	cin >> CashPaid;
}
float Remainder(float TotalBill,float CashPaid)
{
	return TotalBill - CashPaid;
}

void PrintResult(float Result)
{
	cout << "the remainder is " << Result << endl;
}
int main()
{
	float TotalBill, CashPaid;
	ReadNumbers(TotalBill, CashPaid);
	PrintResult(Remainder(TotalBill, CashPaid));
}