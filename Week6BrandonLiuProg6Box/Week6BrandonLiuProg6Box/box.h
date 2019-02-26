#pragma once
#include "pch.h"
#include <iostream>
using namespace std;

template<class T>
class box { //Class with preset values
private:
	T width = 0;
	T height = 0;
	T depth = 0;
public:
	void setWidth(T x);
	void setHeight(T x);
	void setDepth(T x);
	T getDepth();
	T getHeight();
	T calcArea();
	T calcVolume();
};
