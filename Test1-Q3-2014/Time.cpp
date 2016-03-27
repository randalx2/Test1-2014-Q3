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

void Time::getTime(int &outHours, int &outMins, int &outSecs) //use reference when getting more than one attb
{
	outHours = hours;
	outMins = mins;
	outSecs = secs;
}

void Time::setTime(int iHours, int iMins, int iSecs)
{
	hours = iHours;
	mins = iMins;
	secs = iSecs;
}

void Time::print() const
{

}