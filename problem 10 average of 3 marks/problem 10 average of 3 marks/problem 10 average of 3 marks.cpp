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

int AverageOf3Numbers(int num1, int num2, int num3)
{
	int Average = (num1 + num2 + num3)/3;
	return Average;
}

void PrintResults(int Average)
{
	cout << "\n the average of numbers is: " << Average << endl;
}
int main()
{
	int num1, num2, num3;
	ReadNumbers(num1, num2, num3);
	PrintResults(AverageOf3Numbers(num1, num2, num3));
}