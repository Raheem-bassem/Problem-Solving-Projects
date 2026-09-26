#include<iostream>
#include<string>
using namespace std;
void ReadNumbers(int& num1, int& num2,int& num3)
{
	cout << "please neter number 1 : ";
	cin >> num1;
	cout << "please neter number 2 : ";
	cin >> num2;
	cout << "please neter number 2 : ";
	cin >> num3;
}

int MaxOfTwoNumbers(int num1, int num2,int num3)
{
	if (num1 > num2)
	{
		if (num1 > num3)
			return num1;
		else
			return num3;
	}
	else {
		if (num2 > num3)
			return num2;
		else
			return num3;
	}
}
void PrintResult(int Max)
{
	cout << "\n The Maximum Number is: " << Max << endl;
}
int main()
{
	int num1,num2,num3;
	ReadNumbers(num1,num2,num3);
	PrintResult(MaxOfTwoNumbers(num1,num2,num3));
}