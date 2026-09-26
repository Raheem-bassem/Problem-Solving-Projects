#include<iostream>
#include<string>
using namespace std;
int ReadNumber()
{
	int num;
	cout << "please enter a number: " << endl;
	cin >> num;
	return num;
}
void PrintRangeFrom1toN_UsingWhile(int num)
{
	int counter = 0;
	cout << "Range printed using while statement:\n";
	while (counter <= num)
	{
		counter+=2;
		cout << counter << endl;
	}
}
void PrintRangeFrom1toN_UsingDoWhile(int num)
{
	int counter = 0;
	cout << "Range printed using Do while statement:\n";
	do {
		counter+=2;
		cout << counter << endl;
	} while (counter <= num);
}
void PrintRangeFrom1toN_UsingFor(int num)
{
	cout << "Range printed using For Loop:\n";
	for (int counter = 2; counter <= num; counter+=2)
	{
		cout << counter << endl;
	}
}
int main()
{
	int num = ReadNumber();
	PrintRangeFrom1toN_UsingWhile(num);
	PrintRangeFrom1toN_UsingDoWhile(num);
	PrintRangeFrom1toN_UsingFor(num);
}