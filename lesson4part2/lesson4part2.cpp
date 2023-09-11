// Program converts seconds to days , hours, minutes, and remaining seconds
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//declares variable used for input 
	long long int secondsEntered, days, daysInSeconds, hours, hoursInSeconds, minutes, minutesInSeconds, seconds;

	//asks user to enter in seconds
	cout << "Enter seconds" << endl;
	cin >> secondsEntered;

	//displays seconds user entered 
	cout << "Total seconds: " << secondsEntered << endl << endl;

	// if time enetered is less than or = to 0 program ends
	if (secondsEntered <= 0)
	{
		cout << "Total seconds must be greater than zero" << endl;
		return 0;
	}

	// sets vars for each amount to what they should be while also defining the InSeconds variables to be the same as the original variables but in 
	// seconds so that the program can figure out how many seconds are in a certain time period not including the remainder to be used in further math
	days = (secondsEntered / 24 / 60 / 60);
	daysInSeconds = days * 24 * 60 * 60;

	hours = (secondsEntered - daysInSeconds) / 60 / 60;
	hoursInSeconds = (hours * 60 * 60);

	minutes = (secondsEntered - daysInSeconds - hoursInSeconds) / 60;
	minutesInSeconds = minutes * 60;

	seconds = (secondsEntered - daysInSeconds - hoursInSeconds - minutesInSeconds);

	//checks if days is greater than 0 and if it is displays number
	if (days > 0)
	{
		cout << days << " day(s)" << endl;
	}

	//checks if hours is greater than 0 and if it is displays number
	if (hours > 0)
	{
		cout << hours << " hour(s)" << endl;
	}

	//checks if minutes is greater than 0 and if it is displays number
	if (minutes > 0)
	{
		cout << minutes << " minute(s)" << endl;
	}

	//checks if seconds is greater than 0 and if it is displays number
	if (seconds > 0)
	{
		cout << seconds << " second(s)" << endl;
	}
}