#include<iostream>
#include<string>
using namespace std;
int ReadGrade()
{
	int Grade;
	cout << "enter your Grade: " << endl;
	cin >> Grade;
	return Grade;
}
char GetGradeLetter(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else
		return 'F';

}


int main()
{
	cout << endl << "the result is : " << GetGradeLetter(ReadGrade()) << endl;
}