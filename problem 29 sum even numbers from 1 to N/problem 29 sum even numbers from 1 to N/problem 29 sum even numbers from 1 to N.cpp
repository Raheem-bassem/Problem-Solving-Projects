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
	int counter = 1;
	cout << "Range printed using while statement:\n";
	while (counter <= num)
	{
		cout << counter << endl;
		counter += 2;
	}
}

void PrintRangeFrom1toN_UsingDoWhile(int num)
{
	int counter = 1;
	cout << "Range printed using Do while statement:\n";
	do {
		cout << counter << endl;
		counter += 2;
	} while (counter <= num);
}

void PrintRangeFrom1toN_UsingFor(int num)
{
	cout << "Range printed using For Loop:\n";
	for (int counter = 1; counter <= num; counter += 2)
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