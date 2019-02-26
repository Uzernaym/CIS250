#include "pch.h"
#include "circle.h"
using namespace std;

int main() {
	cout << "Name: Brandon Liu - Program Name: Prog7Circle - Date: 2/12/2019\n\n";

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
	c4.setRadius(5 / 3);
	c4.getCircumference();
	c4.getArea();
	c4.getDiameter();

	system("pause");
	return 0;
}