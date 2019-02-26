#include "pch.h"
#include <iostream>
using namespace std;

int squareInteger(int x) {
	return (x * x);
}
double squareDouble(double d) {
	return d * d;
}
float squareFloat(float f) {
	return f * f;
}

int main() {
	cout << "Brandon Liu - 1/30/2019\n";

	cout << "Square of integer 6 = " << squareInteger(6) << endl; //Prints result of function squareInteger(6)
	cout << "Square of double 6.9 = " << squareDouble(6.9) << endl; //Prints result of function squareDouble(6.9)
	cout << "Square of float 9.1 = " << squareFloat(9.1) << endl; //Prints result of function squareFloat(9.1)

	system("pause");
	return 0;
}