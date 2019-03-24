#include "pch.h"
#include "MyArrayPtrArithTemp.cpp"
#include <iostream>
using namespace std;

int main() {
	cout << "Name: Brandon Liu - Program Name: MyArrayPtrArith3 - Date: 3/23/2019\n";

	cout << "Array1" << endl;
	myArrayClass<int> Array1;
	Array1.setSize(6);
	Array1.setAllValues();
	Array1.printAll();
	cout << endl << "Array2" << endl;

	myArrayClass<double> Array2(7);
	Array2.setAllValues();
	Array2.printAll();
	cout << endl << "Array3" << endl;

	myArrayClass<long int> * ptrArray1 = new myArrayClass <long int>;
	ptrArray1->setSize(7);
	ptrArray1->setAllValues();
	ptrArray1->printAll();

	system("pause");
	return 0;
}