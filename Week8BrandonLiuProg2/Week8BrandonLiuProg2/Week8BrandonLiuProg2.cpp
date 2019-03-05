#include "pch.h"
#include <iostream>
using namespace std;
	
	
class myClass{
private:
	int x;
public:
	myClass() { x = 0; }
		myClass(int inX) { x = inX; }
		int getX() { return x; }
		void setX(int inX) { x = inX; } 
};
int main() {
	cout << "Name: Brandon Liu - Program Name: Program 2 - Date: 3/04/2019\n";

	myClass C1;
	C1.setX(42);
	cout << C1.getX( ) << endl;
	myClass * ptrMyClass;
	ptrMyClass = NULL;
	ptrMyClass = &C1;
	cout << "Used Arrow -Value of X is: " << ptrMyClass->getX() << endl;
	ptrMyClass->setX(104);
	cout << "Used Arrow -Value of X is: " << ptrMyClass->getX() << endl;

	myClass C2(123);
	myClass * ptrMyClass2;
	ptrMyClass2 = NULL;
	ptrMyClass2 = &C2;
	cout << "Used Arrow -Value of X is: " << ptrMyClass2->getX() << endl;
	ptrMyClass2->setX(333);
	cout << "Used Arrow -Value of X is: " << ptrMyClass2->getX() << endl;

	system("pause");
	return 0;
}