#include<iostream>
#include<string>
using namespace std;

float ReadNumberOfHours()
{
	float NumberOfHours;
	cout << "please enter number of Hours: ";
	cin >> NumberOfHours;
	return NumberOfHours;
}
float HoursToDays(float NumberOfHours)
{
	return (float)NumberOfHours / 24;
}
float HoursToWeeks(float NumberOfHours)
{
	return (float)NumberOfHours / (24 * 7);
}
int main()
{
	float NumberOfHours = ReadNumberOfHours();
	cout << "Total Hours = " << HoursToDays(NumberOfHours) << endl;
	cout << "Total Days = " << HoursToWeeks(NumberOfHours) << endl;
}