#include "pch.h"
#include "bucky.h"
#include <string>
#include <iostream>

using namespace std;

void BuckysClass::setName(string x) {
	name = x;
}
string BuckysClass::getName() {
	return name;
}