#include "pch.h"
#include <iostream>
using namespace std;

class circle {
private:
	double radius = 0;
	double pi = 3.1415926535897;
public:
	void setRadius(double r) {
		if (r > 0) {
			radius = r;
		}
		else {
			cout << "Invalid radius\n";
		}
	}
	
	void getCircumference() {
		if (radius > 0) {
			cout << 2 * pi*radius << endl;
		}
		else {
			cout << "Invalid radius\n";
		}
	}
	void getArea() {
		if (radius > 0) {
			cout << radius * radius * pi << endl;
		}
		else {
			cout << "Invalid radius\n";
		}
	}
	void getDiameter() {
		if (radius > 0) {
			cout << 2 * radius << endl;
		}
		else {
			cout << "Invalid radius\n";
		}
	}
};

int main() {
	cout << "Name: Brandon Liu - Program Name: Prog7Circle - Date: 2/05/2019\n\n";

	circle c1;
	c1.setRadius(10);
	c1.getCircumference();
	c1.getArea();
	c1.getDiameter();

	circle c2;
	c2.setRadius(-10);
	c2.getCircumference();
	c2.getArea();
	c2.getDiameter();

	circle c3;
	c3.setRadius(0);
	c3.getCircumference();
	c3.getArea();
	c3.getDiameter();

	circle c4;
	c4.setRadius(5/3);
	c4.getCircumference();
	c4.getArea();
	c4.getDiameter();

	system("pause");
	return 0;
}