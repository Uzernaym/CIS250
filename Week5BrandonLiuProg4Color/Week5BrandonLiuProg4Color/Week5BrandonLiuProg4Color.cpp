#include "pch.h"
#include "Color.h"
using namespace std;

int main() {
	cout << "Name: Brandon Liu - Program Name: Prog4Color - Date: 2/12/2019\n\n";

	color brandonsColor; //Create object

	brandonsColor.setElement(0, "red"); //Setting colors
	brandonsColor.setElement(1, "orange");
	brandonsColor.setElement(2, "yellow");
	brandonsColor.setElement(3, "green");
	brandonsColor.setElement(4, "blue");
	brandonsColor.setElement(5, "indigo");
	brandonsColor.setElement(6, "violet");

	brandonsColor.printColors(); //Print colors

	brandonsColor.pickColor(); //Print random color


	system("pause");
	return 0;
}