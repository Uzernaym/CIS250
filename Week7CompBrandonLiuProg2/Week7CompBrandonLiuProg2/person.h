#pragma once
#include "date.h"
#include <iostream>
#include <string>
using namespace std;

class person
{
private:
	string firstname;
	string lastname;
	date dateOfBirth;
public:
	person();
	person(string firstname, string lastname, date dateOfBirth);
	string getFirstName();
	string getLastName();
	void getBirthday();
	void setFirstName(string x);
	void setLastName(string x);

	~person();
};

