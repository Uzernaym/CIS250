#include "pch.h"
#include <iostream>
#include <string>
#include "bucky.h"
using namespace std;

int main() {
	cout << "Name: Brandon Liu - Program Name: ProgBucky2VariablesInAClass - Date: 2/12/2019\n\n";

	BuckysClass bo;
	bo.setName("Sir Bucky Wallace");
	cout << bo.getName() << endl;

	system("pause");
	return 0;
}