#pragma once
#include "pch.h"
#include <iostream>
using namespace std;
#include <string>
class colorPicker {
private:
	string colorArray[7];
public:
	colorPicker();
	void printAllColors();
	string randomColor();
};