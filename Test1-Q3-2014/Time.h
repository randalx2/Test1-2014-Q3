#pragma once
#ifndef TIMER_H
#define TIMER_H
#include <string>

using namespace std;

class Time
{
private: int hours, mins, secs;
public:
	Time();
	~Time();
	void getTime(int &, int &, int &);
	void setTime(int, int, int);
	void print() const;  //making member function constant to be accessible to constant objects
};

#endif