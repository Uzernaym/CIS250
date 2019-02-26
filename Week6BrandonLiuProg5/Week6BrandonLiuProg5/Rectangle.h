#pragma once
#include "pch.h"
#include <iostream>
using namespace std;

template<class T>
class Rectangle {
private:
	T width, height;
public:
	void set_values(T x, T y);

	T area();
};
