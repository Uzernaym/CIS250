#pragma once
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

template<class T>
class aThing {
public:
	T getWeight();
	void setWeight(T inWeight);
private:
	T weight;
};