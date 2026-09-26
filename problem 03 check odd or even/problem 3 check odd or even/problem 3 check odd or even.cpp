#include<iostream>
#include<string>
using namespace std;
enum enNumberType { Odd = 1, Even = 2};
int readnumber()
{
	int num;
	cout << "please enter a number below " << endl;
	cin >> num;
	return num;
}

enNumberType checkoddoreven(int num)
{
	int result = num % 2;
	if (result == 0)
	{
		return enNumberType::Even;
	}
	else {
		return enNumberType::Odd;
	}
}

void Printnumberoddoreven(enNumberType NumberType)
{
	if (NumberType == enNumberType::Even)
	{
		cout << "the number is Even\n";
	}
	else {
		cout << "the number is Odd\n";
	}
}
int main()
{
	Printnumberoddoreven(checkoddoreven(readnumber()));
}