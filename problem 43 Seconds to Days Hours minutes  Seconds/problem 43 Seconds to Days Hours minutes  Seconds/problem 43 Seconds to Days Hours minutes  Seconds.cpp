#include<iostream>
#include<string>
using namespace std;
struct stNumberOfSeconds
{
	int NumberOFDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};
int ReadNumberOfSeconds(string Message)
{
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	
	return Number;
}
stNumberOfSeconds ReadNumberOfSeconds(int S)
{
	stNumberOfSeconds NumberOfSeconds;
	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerHour = 60 * 60;
	const int SecondsPerMinute = 60;

	int Remainder = 0;
	NumberOfSeconds.NumberOFDays = floor(S / SecondsPerDay);
	Remainder = S % SecondsPerDay;

	NumberOfSeconds.NumberOfHours = floor(Remainder / SecondsPerHour);
	Remainder = Remainder % SecondsPerHour;

	NumberOfSeconds.NumberOfMinutes = floor(Remainder / SecondsPerMinute);
	Remainder = Remainder % SecondsPerMinute;

	NumberOfSeconds.NumberOfSeconds = Remainder;

	return NumberOfSeconds;
}
int main()
{

}