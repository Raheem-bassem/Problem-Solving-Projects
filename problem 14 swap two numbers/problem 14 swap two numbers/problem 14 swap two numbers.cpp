#include<iostream>
#include<string>
using namespace std;
void ReadNumbers(int& num1,int& num2)
{
	cout << "please enter number 1: ";
	cin >> num1;
	cout << "please enter number 2: ";
	cin >> num2;
}

void Swap(int num1, int num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

void PrintNumbers(int num1, int num2)
{
	cout << "\nNumber1 = " << num1 << endl;
	cout << "Number2 = " << num2 << endl;
}
int main()
{
	int num1, num2;
	ReadNumbers(num1, num2);
	PrintNumbers(num1, num2);
	Swap(num1, num2);
	PrintNumbers(num1, num2);
}