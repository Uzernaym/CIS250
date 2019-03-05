#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Test {
public:
	void testNullPtr() {
		int * ptrInt;
		ptrInt = NULL;
		*ptrInt = 42;
	}

	void memoryLeak() {
		double * ptrDouble;
		ptrDouble = new double;
		*ptrDouble = 3.123456789;
	}

	string * deletePointer() {
		string * ptrString;
		ptrString = new string;
		*ptrString = "Carlos";
		return ptrString;
	}
	void testTwoAlias() {
		int * ptrAlias1;
		ptrAlias1 = new int;
		*ptrAlias1 = 42;

		int * ptrAlias2;
		ptrAlias2 = new int;
		*ptrAlias2 = *ptrAlias1;

		cout << ptrAlias1 << " " << ptrAlias2 << endl;
		cout << *ptrAlias1 << " " << *ptrAlias2 << endl;

	}
};

