#include "pch.h"
#include "date.h"
#include <iostream>
#include <string>
using namespace std;

date::date()
{
	month = 01;
	day = 01;
	year = 1900;
}

date::date(int m, int d, int y) {
	if (m >= 1 && m <= 12) { 
		month = m; 

		if (m == 2) {
			if (d >= 1 && d <= 28) {
				day = d;
			} else {
				cout << "Incorrect day value" << endl;
			}
		} else if ((m == 4) || (m == 6) || (m == 9) || (m = 11)) {
			if (d >= 1 && d <= 30) {
				day = d;
			} else {
				cout << "Incorrect day value" << endl;
			}
		} else {
			if (d >= 1 && d <= 31) {
				day = d;
			} else {
				cout << "Incorrect day value" << endl;
			}
		}
	}
	else {
		cout << "Incorrect month value" << endl;
	}

	if ((to_string(y).length() == 4) && (y > 1)) {
		year = y;
	}
}

int date::getMonth() {
	return month;
}

int date::getDay() {
	return day;
}

int date::getYear() {
	return year;
}

void date::setMonth(int m) {
	if (m > 0 || m < 13) { 
		month = m;
	} else { 
		cout << "Incorrect value for month";
	}
}

void date::setDay(int d) {
	if (month == 2) {
		if (d >= 1 && d <= 28) {
			day = d;
		}
		else {
			cout << "Incorrect day value" << endl;
		}
	}
	else if ((month == 4) || (month == 6) || (month == 9) || (month = 11)) {
		if (d >= 1 && d <= 30) {
			day = d;
		}
		else {
			cout << "Incorrect day value" << endl;
		}
	}
	else {
		if (d >= 1 && d <= 31) {
			day = d;
		}
		else {
			cout << "Incorrect day value" << endl;
		}
	}
}

void date::setYear(int y) {
	if ((to_string(y).length() == 4) && (y > 1)) {
		year = y;
	} else {
		cout << "Incorrect year value" << endl;
	}
}

date::~date()
{

}
