#include "pch.h"
#include <iostream>
using namespace std;

void printNumber(int x) {
	cout << "i am printing an integer " << x << endl;
}

void printNumber(float x) {
	cout << "now i am printing a float " << x << endl;
}

int main() {
	cout << "Name: Brandon Liu - Program Name: Week15BrandonLiuPart1A - Date: 4/24/2019\n";

	int a = 54;
	float b = 32.4896;

	printNumber(a);
	printNumber(b);

	system("pause");
	return 0;
}