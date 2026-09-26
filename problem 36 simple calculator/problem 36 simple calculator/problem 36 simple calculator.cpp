#include <iostream>
#include<string>
using namespace std;
enum enOperationType{ Add = '+',Subtract = '-',Multiply = '*',Divide = '/' };
float ReadNumbers(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;
	return Number;
}

enOperationType ReadOpType()
{
	char OT = '+';
	cout << "Please enter Operation Type (+,-,*,/) ?" << endl;
	cin >> OT;
	return (enOperationType)OT;
}

float Calculate(float num1, float num2, enOperationType OpType)
{
	switch (OpType)
	{
	case enOperationType::Add:
		return num1 + num2;
	case enOperationType::Subtract:
		return num1 - num2;
	case enOperationType::Multiply:
		return num1 * num2;
	case enOperationType::Divide:
		return num1 / num2;
	default:
		return num1 + num2;
	}
}
int main()
{
	float num1 = ReadNumbers("please enter the First Number?");
	float num2 = ReadNumbers("please enter the Second Number?");

	enOperationType OpType = ReadOpType();
	cout << endl << "Result = " << Calculate(num1, num2, OpType) << endl;
}