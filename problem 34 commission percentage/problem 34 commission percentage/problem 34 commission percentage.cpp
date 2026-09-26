#include<iostream>
#include<string>
using namespace std;
float ReadTotalSales()
{
	float TotalSales;
	cout << "enter the total sales: ";
	cin >> TotalSales;
	return TotalSales;
}
float GetCommissionPercentage(float TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else
		return 0.0;
}
float CalculateTotalCommision(float TotalSales)
{
	return GetCommissionPercentage(TotalSales) * TotalSales;
}
int main()
{
	float TotalSales = ReadTotalSales();
	cout << endl << "commission percentage = " << GetCommissionPercentage(TotalSales) * 100 << "%" << endl;
	cout << endl << "total commission = " << CalculateTotalCommision(TotalSales)<< endl;
}