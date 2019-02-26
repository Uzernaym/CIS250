#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

template<class T>
class color {
private:
	string colors[7];
public:
	void setElement(T index, string color);
	void printColors();
	void pickColor();
	T getLength();
};
