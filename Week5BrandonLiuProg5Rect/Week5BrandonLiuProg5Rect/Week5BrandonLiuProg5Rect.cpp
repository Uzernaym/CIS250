#include "pch.h"
#include "Rectangle.h"
using namespace std;

int main() {
	cout << "Name: Brandon Liu - Program Name: Prog5Rect - Date: 2/12/2019\n\n";

	Rectangle rect1;
	rect1.set_values(5, 6);
	cout << "area: " << rect1.area() << endl;

	Rectangle rect2;
	rect2.set_values(3, 4);
	cout << "area: " << rect2.area() << endl;

	system("pause");
	return 0;
}