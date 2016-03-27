#include "Time.h"
#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <ctime>

using namespace std;

Time::Time()
{
	hours = 0;
	mins = 0;
	secs = 0;
}


Time::~Time()
{
}

void Time::getTime(int &outHours, int &outMins, int &outSecs) const//use reference when getting more than one attb
{
	outHours = hours;
	outMins = mins;
	outSecs = secs;
}

void Time::setTime(int iHours, int iMins, int iSecs)
{
	//hours = iHours;
	//mins = iMins;
	//secs = iSecs;

	//First check for proper input
	if (iHours > 23 || iHours < 0)
	{
		cout << "invalid input for hours please use correct 24hr format and enter hours now" << endl;
		cin >> hours;
	}
	else
	{
		hours = iHours;
	}

	if (iMins > 59 || iMins < 0)
	{
		cout << "invalid input for minutes please use correct 24hr format and enter minutes now" << endl;
		cin >> mins;
	}
	else
	{
		mins = iMins;
	}

	if (iSecs > 59 || iSecs < 0)
	{
		cout << "invalid input for seconds please use correct 24hr format and enter seconds now" << endl;
		cin >> secs;
	}
	else
	{
		secs = iSecs;
	}

}

void Time::print() const
{
	if (hours > 9)
	{
		cout << hours;
	}
	else
	{
		cout << "0" << hours;
	}
	cout << ":";


	if (mins > 9)
	{
		cout << mins;
	}
	else
	{
		cout << "0" << mins;
	}
	cout << ":";

	if (secs > 9)
	{
		cout << secs;
	}
	else
	{
		cout << "0" << secs;
	}
	cout << endl;
	
}