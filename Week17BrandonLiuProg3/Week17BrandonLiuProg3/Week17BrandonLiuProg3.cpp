#include "pch.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Name: Brandon Liu - Program Name: Prog 3 - Date: 5/5/2019\n";

	ofstream fout;

	fout.open("savedNames.txt");

	int userNum;
	string name;
	cout << "How many names would you like to save?" << endl;
	cin >> userNum;
	for (int i = 0; i < userNum; i++) {
		cin >> name;
		fout << name << endl;
	}

	fout.close();

	system("pause");
	return 0;
}