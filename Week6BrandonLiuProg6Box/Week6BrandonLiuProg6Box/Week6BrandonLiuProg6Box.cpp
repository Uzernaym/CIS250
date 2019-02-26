#include "pch.h"
#include "box.h"
#include "box.cpp"
using namespace std;

int main() {
	cout << "Name: Brandon Liu - Program Name: Prog6Box - Date: 2/19/2019\n\n";

	// Box 1 - Test set functions, Volume, getHeight and area functions

	box <int> IInt;    // HINT MAKE A Default constructor or set functions...
	IInt.setWidth(2);
	IInt.setHeight(3);
	IInt.setDepth(4);
	cout << "Height = " << IInt.getHeight() << endl;
	cout << "Area = " << IInt.calcArea() << endl;
	cout << "Volume = " << IInt.calcVolume() << endl << endl;

	box <double> IDou;    // HINT MAKE A Default constructor or set functions...
	IDou.setWidth(2.12);
	IDou.setHeight(3.234);
	IDou.setDepth(4.245);
	cout << "Height = " << IDou.getHeight() << endl;
	cout << "Area = " << IDou.calcArea() << endl;
	cout << "Volume = " << IDou.calcVolume() << endl << endl;

	box <float> IFlo;    // HINT MAKE A Default constructor or set functions...
	IFlo.setWidth((float)2.56);
	IFlo.setHeight((float)3.1);
	IFlo.setDepth((float)4.12);
	cout << "Height = " << IFlo.getHeight() << endl;
	cout << "Area = " << IFlo.calcArea() << endl;
	cout << "Volume = " << IFlo.calcVolume() << endl << endl;

	box <long int> ILoi;    // HINT MAKE A Default constructor or set functions...
	ILoi.setWidth(2);
	ILoi.setHeight(3);
	ILoi.setDepth(4);
	cout << "Height = " << ILoi.getHeight() << endl;
	cout << "Area = " << ILoi.calcArea() << endl;
	cout << "Volume = " << ILoi.calcVolume() << endl << endl;


	box <int> EInt;    // HINT MAKE A Default constructor or set functions...
	EInt.setWidth((int)2);
	EInt.setHeight((int)3);
	EInt.setDepth((int)4);
	cout << "Height = " << EInt.getHeight() << endl;
	cout << "Area = " << EInt.calcArea() << endl;
	cout << "Volume = " << EInt.calcVolume() << endl << endl;

	box <double> EDou;    // HINT MAKE A Default constructor or set functions...
	EDou.setWidth((double)2.12);
	EDou.setHeight((double)3.76);
	EDou.setDepth((double)4.845);
	cout << "Height = " << EDou.getHeight() << endl;
	cout << "Area = " << EDou.calcArea() << endl;
	cout << "Volume = " << EDou.calcVolume() << endl << endl;

	box <long int> ELoi;    // HINT MAKE A Default constructor or set functions...
	ELoi.setWidth((long int)2);
	ELoi.setHeight((long int)3);
	ELoi.setDepth((long int)4);
	cout << "Height = " << ELoi.getHeight() << endl;
	cout << "Area = " << ELoi.calcArea() << endl;
	cout << "Volume = " << ELoi.calcVolume() << endl << endl;



	system("pause");
	return(0);
}