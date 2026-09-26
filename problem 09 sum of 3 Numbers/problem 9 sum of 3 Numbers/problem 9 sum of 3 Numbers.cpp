#include<iostream>
#include<string>
using namespace std;
void ReadNumbers(int& num1, int& num2, int& num3)
{
	cout << "please enter number 1: ";
	cin >> num1;

	cout << "please enter number 2: ";
	cin >> num2;

	cout << "please enter number 3: ";
	cin >> num3;
}

int SumOf3Numbers(int num1,int num2,int num3)
{
	int Total= num1 + num2 + num3;
	return Total;
}

void PrintResults(int Total)
{
	cout << "\n the total sum of numbers is: " << Total << endl;
}
int main()
{
	int num1, num2, num3;
	ReadNumbers(num1, num2, num3);
	PrintResults(SumOf3Numbers(num1, num2, num3));
}