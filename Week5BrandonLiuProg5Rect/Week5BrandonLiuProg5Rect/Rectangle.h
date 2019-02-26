#pragma once
#include "pch.h"
#include <iostream>
using namespace std;

class Rectangle {
private:
	int width, height;
public:
	void set_values(int x, int y);

	int area();
};