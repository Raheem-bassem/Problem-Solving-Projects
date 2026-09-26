#include<iostream>
#include<string>
using namespace std;
struct stInfo {
	string fname;
	string lname;
};
stInfo ReadInfo()
{
	stInfo Info;
	cout << "please enter your first name: " << endl;
	cin >> Info.fname;

	cout << "please enter your last name: " << endl;
	cin >> Info.lname;

	return Info;
}

string GetFullName(stInfo Info)
{
	string FullName;
	FullName = Info.fname + " " + Info.lname;
	return FullName;
}

void PrintFullName(string FullName)
{
	cout << " your fullname is " + FullName << endl;
}
int main()
{
	PrintFullName(GetFullName(ReadInfo()));
}