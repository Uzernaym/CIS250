#include "pch.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Name: Brandon Liu - Program Name: Prog 2 - Date: 5/5/2019\n";

	string aWord, aLine;
	char aChar;
	ifstream fin;

	fin.open("firstLastAge.txt");

	if (!fin) {
		exit(1);
	}

	while (!fin.eof()) {
		getline(fin, aLine);
		cout << aLine << endl;
	}

	fin.close();

	system("pause");
	return 0;
}