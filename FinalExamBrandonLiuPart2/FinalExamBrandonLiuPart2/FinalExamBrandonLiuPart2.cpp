// Code for polymorphism
// Find and fix the 6 simple errors
// comment each line that was fixed

// When completed, upload good code and screen prints of successful execution.

#include "pch.h"
#include <iostream>
using namespace std;

//Create BASE class
class polygon {
protected:
	int width, height;
public:
	void setValues(int inW, int inH) { //Switched function name to camelCase
		width = inW; 
		height = inH; //Placed on separate line
	}
	virtual int getArea() { //Added "virtual" to function
		return (width * height); //Used width * height to get area
	}
};

//Create DERIVED class
class rectangle : public polygon {
public:
	int getArea() { return width * height; }
};

//Create DERIVED class
class triangle : public polygon {
public:
	int getArea() { return width * height * 1 / 2; } //Deleted 4
};

//Create Poly function
void polyFun(polygon * ptrBase) {
	//REPEAT code by using function
	//Key feature - base class pointer as argument..
	cout << ptrBase->getArea() << endl; //Used correct syntax for pointer
}

int main()
{
	cout << "Name: Brandon Liu - Program Name: Final Exam Part 2 - Date: 5/16/2019\n";
	//Regular static declarations
	rectangle rect;
	triangle trg1;
	//Regular use with dot notation
	cout << "-----------" << endl;
	rect.setValues(3, 4);
	cout << " Area of rectangle is: " << rect.getArea() << endl;
	trg1.setValues(3, 5);
	cout << " Area of triangle is: " << trg1.getArea() << endl; //Fixed direction of stream
	//......................................

	//WHY ... use ptr..?? FOR Polymorphism...
	rectangle * ptrRect = NULL; //Be absolutely clear that it has NO address
	triangle * ptrTrg1 = NULL;

	ptrRect = &rect; //assign address to ptr variables
	ptrTrg1 = &trg1;

	//Polymorphism - ONE set of code that can work for MANY derived class.
	//key idea is - Declare ONE base class pointer... and assign ANY Derived class address to it

	// method 2 - GOOD REAL GOOD Method
	// make a function - so I only type code ONCE
	cout << "-----------" << endl;
	cout << " Area of rectangle is: "; polyFun(&rect); //Fixed cout name to apply to correct polygon
	cout << " Area of triangle is: ";  polyFun(&trg1); //Fixed cout name to apply to correct polygon
	cout << "-----------" << endl;

	system("pause");
	return 0;
}