#pragma once
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

// STEP 1 - DEFINE THE new datatype/Class  'aThing'
class aThing {
public:  // Public means that is can be access in step 3 with the dot notation
	double getWeight(); // public functions  accessible by dot notation
	void setWeight(double inWeight);
private: // Private means that it can NOT be accessed with the dot notation, but indirectly with a public function
	double weight; // private variables only accessible by a function
};
