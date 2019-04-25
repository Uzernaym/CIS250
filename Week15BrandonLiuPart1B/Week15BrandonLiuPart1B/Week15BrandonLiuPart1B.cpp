#include "pch.h"
#include "Sally.h"
#include <iostream>
using namespace std;


int main() {
	cout << "Name: Brandon Liu - Program Name: Week15BrandonLiuPart1B - Date: 4/24/2019\n";

	Sally a(34);
	Sally b(21);
	Sally c;

	c = a + b;
	cout << c.num << endl;

	system("pause");
	return 0;
}