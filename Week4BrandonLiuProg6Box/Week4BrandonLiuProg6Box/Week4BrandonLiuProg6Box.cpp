#include "pch.h"
#include <iostream>
using namespace std;

class box {
private:
	int width = 0; 
	int height = 0;
	int depth = 0;
public:
	void setWidth(int x) {
		width = x;
	}
	void setHeight(int x) {
		height = x;
	}
	void setDepth(int x) {
		depth = x;
	}
	int getDepth() {
		return depth;
	}
	int getHeight() {
		return height;
	}
	int calcArea() {
		return width * height;
	}
	int calcVolume() {
		return width * height * depth;
	}
};

int main() {
	cout << "Name: Brandon Liu - Program Name: Prog6Box - Date: 2/05/2019\n\n";

	// Box 1 - Test set functions, Volume, getHeight and area functions

	box B1;    // HINT MAKE A Default constructor or set functions...
	B1.setWidth(2);
	B1.setHeight(3);
	B1.setDepth(4);
	cout << "Height = " << B1.getHeight() << endl;
	cout << "Area = " << B1.calcArea() << endl;
	cout << "Volume = " << B1.calcVolume() << endl << endl;

	// Box 2 - Test zero value error for calc Area and Volume of sides functions

	box B2;
	B2.setWidth(3);
	B2.setHeight(4);
	cout << "Depth = " << B2.getDepth() << endl;
	cout << "Area = " << B2.calcArea() << endl;
	cout << "Volume = " << B2.calcVolume() << endl;

	system("pause");
	return(0);
}