#include<iostream>
#include<string>
using namespace std;
void ReadNumbers(int& num1, int& num2)
{
	cout << "please neter number 1 : ";
	cin >> num1;
	cout << "please neter number 2 : ";
	cin >> num2;
}

int MaxOfTwoNumbers(int num1,int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}
void PrintResult(int Max)
{
	cout << "\n The Maximum Number is: " << Max << endl;
}
int main()
{
	int num1, num2;
	ReadNumbers(num1, num2);
	PrintResult(MaxOfTwoNumbers(num1, num2));
}