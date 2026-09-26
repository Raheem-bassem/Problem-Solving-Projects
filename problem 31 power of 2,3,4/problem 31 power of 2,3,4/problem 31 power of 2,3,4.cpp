#include <iostream>
#include<string>
using namespace std;
int ReadNumber()
{
	int num;
	cout << "please enter a number: ";
	cin >> num;
	return num;
}
void PowerOf2_3_4(int num)
{
	int a, b, c;
	a = num * num;
	b = num * num * num;
	a = num * num * num * num;

	cout << a << " " << b << " " << c<<endl;
}
int main()
{
	PowerOf2_3_4(ReadNumber());
	return 0;
}