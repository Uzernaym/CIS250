#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class color {
private:
	string colors[7];
public:
	void setElement(int index, string color);
	void printColors();
	void pickColor();
	int getLength();
};