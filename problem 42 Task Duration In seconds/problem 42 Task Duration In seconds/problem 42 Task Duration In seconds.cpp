#include<iostream>
#include<string>
using namespace std;
struct strTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};
int ReadPostiveNumber(string Message)
{
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}
strTaskDuration ReadTaskDuration()
{
	strTaskDuration TaskDuration;
	TaskDuration.NumberOfDays = ReadPostiveNumber("Please enter number of Days?");
	TaskDuration.NumberOfHours = ReadPostiveNumber("Please enter number of Hours?");
	TaskDuration.NumberOfMinutes = ReadPostiveNumber("Please enter number of Minutes?");
	TaskDuration.NumberOfSeconds = ReadPostiveNumber("Please enter number of Seconds?");
	return TaskDuration;
}
int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
	int DurationInSeconds = 0;
	DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
	DurationInSeconds += TaskDuration.NumberOfSeconds;
	return DurationInSeconds;
}
int main()
{
	cout << "\nTask Duration in seconds : " << TaskDurationInSeconds(ReadTaskDuration());
	return 0;
}