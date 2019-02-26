#pragma once
#include <iostream>
#include <string>
using namespace std;
class date
{
private:
	int month;
	int day;
	int year;
public:
	date();
	date(int month, int day, int year);

	int getMonth();
	int getDay();
	int getYear();
	void setMonth(int month);
	void setDay(int day);
	void setYear(int year);

	~date();
};