#pragma once
#include <string>
#include "Birthday.h"

using namespace std;

class People
{
private:
	string name;
	Birthday dateOfBirth;
public:
	People(string x, Birthday bo);
	void printInfo();
	~People();
};

