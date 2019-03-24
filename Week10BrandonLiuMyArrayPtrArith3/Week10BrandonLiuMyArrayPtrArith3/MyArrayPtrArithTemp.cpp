#include "pch.h"
#include <iostream>

using namespace std;

template <class T>
class myArrayClass {
private:
	int arraySize;
	T * ptrArray;
public:
	myArrayClass() {
		arraySize = 0;
		ptrArray = NULL;
	}
	myArrayClass(int inX) {
		if (inX > 0) {
			arraySize = inX;
			ptrArray = new T[arraySize];
		}

	}
	void setSize(int inX) {
		if (ptrArray == NULL && inX > 0) {
			arraySize = inX;
			ptrArray = new T[arraySize];
		}
	}
	void setAllValues() {
		if (ptrArray != NULL) {
			for (int i = 0; i < arraySize; i++) {
				T input;
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