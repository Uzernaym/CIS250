#pragma once
#include "pch.h"
#include <iostream>
using namespace std;

class circle {
private:
	double radius = 0;
	double pi = 3.1415926535897;
public:
	void setRadius(double r);
	void getCircumference();
	void getArea();
	void getDiameter();
};