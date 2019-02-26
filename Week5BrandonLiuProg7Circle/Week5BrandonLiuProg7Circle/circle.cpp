#include "pch.h"
#include "circle.h"
using namespace std;

void circle::setRadius(double r) {
	if (r > 0) {
		radius = r;
	}
	else {
		cout << "Invalid radius\n";
	}
}
void circle::getCircumference() {
	if (radius > 0) {
		cout << 2 * pi*radius << endl;
	}
	else {
		cout << "Invalid radius\n";
	}
}
void circle::getArea() {
	if (radius > 0) {
		cout << radius * radius * pi << endl;
	}
	else {
		cout << "Invalid radius\n";
	}
}
void circle::getDiameter() {
	if (radius > 0) {
		cout << 2 * radius << endl;
	}
	else {
		cout << "Invalid radius\n";
	}
}