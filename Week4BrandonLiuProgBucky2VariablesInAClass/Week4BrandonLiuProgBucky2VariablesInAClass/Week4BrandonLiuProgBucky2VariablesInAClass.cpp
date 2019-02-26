#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class BuckysClass {
public:
	void setName(string x) {
		name = x;
	}
	string getName() {
		return name;
	}
private:
	string name;
};

int main() {
	cout << "Name: Brandon Liu - Program Name: ProgBucky2VariablesInAClass - Date: 2/05/2019\n\n";

	BuckysClass bo;
	bo.setName("Sir Bucky Wallace");
	cout << bo.getName() << endl;

	system("pause");
	return 0;
}