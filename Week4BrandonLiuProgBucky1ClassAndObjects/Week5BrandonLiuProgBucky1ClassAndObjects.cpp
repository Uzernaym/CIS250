#include "pch.h"
#include <iostream>
using namespace std;

class BuckysClass {
public:
	void coolSaying() {
		cout << "preachin to the choir" << endl;
	}
};

int main() {
	cout << "Name: Brandon Liu - Program Name: ProgBucky1ClassAnd Objects - Date: 2/05/2019\n\n";

	BuckysClass buckysObject;
	buckysObject.coolSaying();

	system("pause");
	return 0;
}