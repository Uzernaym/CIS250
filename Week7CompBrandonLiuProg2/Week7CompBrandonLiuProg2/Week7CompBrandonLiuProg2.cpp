#include "pch.h"
#include "date.h"
#include "person.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Name: Brandon Liu - Program Name: Prog2 - Date: 2/25/2019\n\n";

	person Person1;
	cout << Person1.getFirstName() << " " << Person1.getLastName() << endl;
	Person1.getBirthday();
	cout << endl;

	date date2(04, 19, 2002);
	person Person2("Brandon", "Liu", date2);

	cout << Person2.getFirstName() << " " << Person2.getLastName() << endl;
	Person2.getBirthday();

	date2.setDay(30);
	cout << date2.getDay() << endl;

	date2.setDay(31); //Prints "Incorrect day value" and does not change day
	cout << date2.getDay() << endl;

	date2.setYear(12); //Prints "Incorrect year value" and does not change year
	cout << date2.getYear() << endl;

	system("pause");
	return 0;
}