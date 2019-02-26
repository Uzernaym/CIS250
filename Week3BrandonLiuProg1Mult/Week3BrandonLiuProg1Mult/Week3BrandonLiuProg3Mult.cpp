#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "Brandon Liu - 1/30/2019\n\n";

	for (int i = 1; i <= 12; i++) {
		for (int j = 1; j <= 12; j++) {
			cout << setw(4);
			cout << i * j;
		}
		cout << endl;
	}

	system("pause");
	return 0;
}