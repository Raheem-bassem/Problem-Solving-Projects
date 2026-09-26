#include<iostream>
#include<string>
using namespace std;
int ReadAge()
{
	int num;
	cout << "please enter a number: ";
	cin >> num;
	return num;
}

bool ValidateNumberInRange(int num, int From, int To)
{
	return (num >= From && num <= To);
}

int ReadUntilAgeBetween(int From, int To)
{
	int Age = 0;
	do {
		Age = ReadAge();
	} while (!ValidateNumberInRange(Age, From, To));
	return Age;
}

void PrintResult(int Age)
{
	cout << "your age is: " << Age << endl;
}


int main()
{
	PrintResult(ReadUntilAgeBetween(18, 45));
	return 0;
}