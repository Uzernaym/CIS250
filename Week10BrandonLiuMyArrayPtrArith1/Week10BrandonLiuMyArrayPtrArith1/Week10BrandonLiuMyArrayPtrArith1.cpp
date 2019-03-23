#include "pch.h"
#include <iostream>
using namespace std;

class myArrayClass {
private:
	int arraySize;
	int * ptrArray;
public:
	myArrayClass() {
		arraySize = 0;
		ptrArray = NULL;
	}
	myArrayClass(int inX) {
		if (inX > 0) {
			arraySize = inX;
			ptrArray = new int[arraySize];
		}
		
	}
	void setSize(int inX) {
		if (ptrArray == NULL && inX > 0) {
			arraySize = inX;
			ptrArray = new int[arraySize];
		}
	}
	void setAllValues() {
		if (ptrArray != NULL) {
			for (int i = 0; i < arraySize; i++) {
				int input;
				cout << "array[" << i << "] = ";
				cin >> input;
				ptrArray[i] = input;
			}
			cout << endl;
		}
	}
	void printAll() {
		if (ptrArray != NULL) {
			for (int i = 0; i < arraySize; i++) {
				cout << "arr[" << i << "] = " << ptrArray[i] << endl;
			}
		}
	}
};

int main() {
	cout << "Name: Brandon Liu - Program Name: MyArrayPtrArith1 - Date: 3/23/2019\n";

	cout << "Array1" << endl;
	myArrayClass Array1;
	Array1.setSize(6);
	Array1.setAllValues();
	Array1.printAll();
	cout << endl << "Array2" << endl;

	myArrayClass Array2(7);
	Array2.setAllValues();
	Array2.printAll();
	cout << endl << "Array3" << endl;

	myArrayClass * ptrArray1 = new myArrayClass;
	ptrArray1->setSize(7);
	ptrArray1->setAllValues();
	ptrArray1->printAll();

	system("pause");
	return 0;
}