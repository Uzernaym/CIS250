#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string firstName;
	string lastName;
	int YearOfBirth;
public:
	Person() {
		firstName = "None";
		lastName = "None";
		YearOfBirth = 2000;
	}
	Person(string first, string last, int year) {
		firstName = first;
		lastName = last;
		YearOfBirth = year;
	}

	string getFirstName() {
		return firstName;
	}
	string getLastName() {
		return lastName;
	}
	int getYearOfBirth() {
		return YearOfBirth;
	}
	void setFirstName(string first) {
		firstName = first;
	}
	void setLastName(string last) {
		lastName = last;
	}
	void setYearOfBirth(int year) {
		YearOfBirth = year;
	}
};

int main() {
	cout << "Name: Brandon Liu - Program Name: Program 3 - Date: 3/04/2019\n";

	Person p1;
	Person p2("Brandon", "Liu", 2002);

	Person * ptrPerson1;
	ptrPerson1 = NULL;
	Person * ptrPerson2;
	ptrPerson2 = NULL;

	ptrPerson1 = &p1;
	ptrPerson2 = &p2;

	cout << ptrPerson1->getFirstName() << endl;
	cout << ptrPerson2->getFirstName() << endl;
	cout << ptrPerson1->getLastName() << endl;
	cout << ptrPerson2->getLastName() << endl;
	cout << ptrPerson1->getYearOfBirth() << endl;
	cout << ptrPerson2->getYearOfBirth() << endl << endl;

	ptrPerson1->setFirstName("Brendon");
	ptrPerson2->setFirstName("None");
	ptrPerson1->setLastName("Lin");
	ptrPerson2->setLastName("None");
	ptrPerson1->setYearOfBirth(2002);
	ptrPerson2->setYearOfBirth(2000);

	cout << ptrPerson1->getFirstName() << endl;
	cout << ptrPerson2->getFirstName() << endl;
	cout << ptrPerson1->getLastName() << endl;
	cout << ptrPerson2->getLastName() << endl;
	cout << ptrPerson1->getYearOfBirth() << endl;
	cout << ptrPerson2->getYearOfBirth() << endl;

	system("pause");
	return 0;
}
