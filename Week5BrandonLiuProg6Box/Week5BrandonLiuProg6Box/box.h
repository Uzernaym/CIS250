#pragma once
#include "pch.h"
#include <iostream>
using namespace std;

class box { //Class with preset values
private:
	int width = 0;
	int height = 0;
	int depth = 0;
public:
	void setWidth(int x);
	void setHeight(int x);
	void setDepth(int x);
	int getDepth();
	int getHeight();
	int calcArea();
	int calcVolume();
};