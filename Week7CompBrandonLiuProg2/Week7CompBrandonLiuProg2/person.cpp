#include "pch.h"
#include "date.h"
#include "person.h"
#include <iostream>
#include <string>
using namespace std;

person::person()
{
	firstname = "None";
	lastname = "None";
	dateOfBirth = date();
}

person::person(string first, string last, date birthdate) {
	firstname = first;
	lastname = last;
	dateOfBirth = birthdate;
}

string person::getFirstName() {
	return firstname;
}

string person::getLastName() {
	return lastname;
}

void person::getBirthday() {
	cout << dateOfBirth.getMonth() << "/" << dateOfBirth.getDay() << "/" << dateOfBirth.getYear() << endl;
}

void person::setFirstName(string x) {
	firstname = x;
}

void person::setLastName(string x) {
	lastname = x;
}


person::~person()
{
}
