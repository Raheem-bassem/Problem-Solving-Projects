#include <iostream>
#include<string>
using namespace std;
void ReadNumbers(int num,int M)
{
	cout << "please enter a number: ";
	cin >> num;

	cout << "please enter the Power: ";
	cin >> M;
}
int PowerOf2_3_4(int num,int M)
{
	if (M == 0)
	{
		return 1;
	}

	int P=1;
	for (int i = 1; i <= M; i++)
	{
		P = P * num;
	}
	return P;
}
void PrintResult(int Result)
{
	cout << "\nthe Result is " << Result << endl;
}
int main()
{
	int num, M;
	ReadNumbers(num, M);
	PrintResult(PowerOf2_3_4(num,M));
	return 0;
}