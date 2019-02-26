#include "pch.h"
#include "Color.h"
#include "Color.cpp"
using namespace std;

int main() {
	cout << "Name: Brandon Liu - Program Name: Week6BrandonLiuProg4Color - Date: 2/19/2019\n\n";

	color <int> IInt; //Create object
	IInt.setElement(0, "red"); //Setting colors
	IInt.setElement(1, "orange");
	IInt.setElement(2, "yellow");
	IInt.setElement(3, "green");
	IInt.setElement(4, "blue");
	IInt.setElement(5, "indigo");
	IInt.setElement(6, "violet");
	IInt.printColors(); //Print colors
	IInt.pickColor(); //Print random color

	color <long int> ILoi; //Create object
	ILoi.setElement(0, "red"); //Setting colors
	ILoi.setElement(1, "orange");
	ILoi.setElement(2, "yellow");
	ILoi.setElement(3, "green");
	ILoi.setElement(4, "blue");
	ILoi.setElement(5, "indigo");
	ILoi.setElement(6, "violet");
	ILoi.printColors(); //Print colors
	ILoi.pickColor(); //Print random color


	color <int> EInt; //Create object
	EInt.setElement((int)0, "red"); //Setting colors
	EInt.setElement((int)1, "orange");
	EInt.setElement((int)2, "yellow");
	EInt.setElement((int)3, "green");
	EInt.setElement((int)4, "blue");
	EInt.setElement((int)5, "indigo");
	EInt.setElement((int)6, "violet");
	EInt.printColors(); //Print colors
	EInt.pickColor(); //Print random color
	
	color <long int> ELoi; //Create object
	ELoi.setElement((long int)0, "red"); //Setting colors
	ELoi.setElement((long int)1, "orange");
	ELoi.setElement((long int)2, "yellow");
	ELoi.setElement((long int)3, "green");
	ELoi.setElement((long int)4, "blue");
	ELoi.setElement((long int)5, "indigo");
	ELoi.setElement((long int)6, "violet");
	ELoi.printColors(); //Print colors
	ELoi.pickColor(); //Print random color


	system("pause");
	return 0;
}
