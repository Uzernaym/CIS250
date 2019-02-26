#include "pch.h"
#include <iostream>
using namespace std;

class Rectangle {
private:
	int width, height;
public:
	void set_values(int x, int y) {
		width = x;
		height = y;
	}

	int area() {
		int answer;
		// complete this function so the code works 
		answer = width * height;
		return answer;
	}
};

int main() {
	cout << "Name: Brandon Liu - Program Name: Prog5Rect - Date: 2/05/2019\n\n";

	Rectangle rect1;
	rect1.set_values(5, 6);
	cout << "area: " << rect1.area() << endl;

	Rectangle rect2;
	rect2.set_values(3, 4);
	cout << "area: " << rect2.area() << endl;

	system("pause");
	return 0;
}