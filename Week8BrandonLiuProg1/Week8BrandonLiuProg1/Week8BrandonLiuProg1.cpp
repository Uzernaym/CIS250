#include "pch.h"
#include "Test.cpp"
#include <iostream>
using namespace std;

int main() {
	cout << "Name: Brandon Liu - Program Name: Program 1 - Date: 3/04/2019\n";

	Test test;
	//test.testNullPtr();
	/*int i = 0;
	while (i++ < 1000) {
		test.memoryLeak();
	}*/

	/*string * ptrS;
	ptrS = new string;
	test.deletePointer() = ptrS;
	cout << *ptrS << endl; */

	test.testTwoAlias();

	system("pause");
	return 0;
}