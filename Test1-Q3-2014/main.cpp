#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <ctime>

#include "Time.h"

using namespace std;

int main()
{
	int hours, minutes, seconds;
	Time c1;
	Time c2;
	const Time c3;

	c1.setTime(10, 30, 52);
	c2.setTime(19, 5, 15);
	
	c1.getTime(hours, minutes, seconds);
	c2.getTime(hours, minutes, seconds);
	c3.getTime(hours, minutes, seconds);

	c1.print();
	c2.print();
	c3.print();

	system("PAUSE");
	return 0;
}