#include<iostream>
#include<string>
using namespace std;
struct stInfo
{
	int Age;
	bool HasDriverLicense;
};
stInfo ReadInfo()
{
	stInfo Info;
	cout << "please enter your age: ";
	cin >> Info.Age;

	cout << "Do you have a Driver License? " << endl;
	cin >> Info.HasDriverLicense;

	return Info;
}
bool IsAccepted(stInfo Info)
{
	return (Info.Age > 21 && Info.HasDriverLicense);
}

void PrintResult(stInfo Info)
{
	if (IsAccepted(Info))
		cout << "\n Hired";
	else
		cout << "\n Rejected";
}
int main()
{
	PrintResult(ReadInfo());
}