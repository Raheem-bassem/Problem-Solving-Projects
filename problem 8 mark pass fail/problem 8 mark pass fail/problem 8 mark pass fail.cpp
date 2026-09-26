#include<iostream>
#include<string>
using namespace std;
enum enPassFail { Pass=1, Fail=2};
int ReadMark()
{
	int Mark;
	cout << "enter your mark" << endl;
	cin >> Mark;
	return Mark;
}

enPassFail PassorFail(int Mark)
{
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintPassOrFail(int Mark)
{
	if (PassorFail(Mark) == enPassFail::Pass)
		cout << "Pass";
	else
		cout << "Fail";
}
int main()
{
	PrintPassOrFail(ReadMark());
}