#include<iostream>
#include<string>
using namespace std;
enum enPassFail { Pass = 1 , Fail = 2};
void ReadNumbers(int& Mark1,int& Mark2, int& Mark3)
{
	cout << "please enter your mark1 : ";
	cin >> Mark1;
	cout << "please enter your mark2 : ";
	cin >> Mark2;
	cout << "please enter your mark3 : ";
	cin >> Mark3;
}
int SumOfMarks(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;
}
float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
	return (float)SumOfMarks(Mark1, Mark2, Mark3) / 3;
}
enPassFail CheckAverage(float Average)
{
	if (Average >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}
void PrintResult(float Average)
{
	cout << "\n Your Average is: " << Average << endl;

	if (CheckAverage(Average) == enPassFail::Pass)
		cout << "\n You Passed" << endl;
	else
		cout << "\n You Failed" << endl;
}
int main()
{
	int Mark1, Mark2, Mark3;
	ReadNumbers(Mark1, Mark2, Mark3);
	PrintResult(CalculateAverage(Mark1, Mark2, Mark3));
}