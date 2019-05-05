#include "pch.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	cout << "Name: Brandon Liu - Program Name: Prog 2 - Date: 5/5/2019\n";

	string aWord, aLine;
	ifstream fin;
	vector<string> data;
	vector<int> age;
	int maxNum = 0;
	int minNum = 0;

	fin.open("firstLastAge.txt");

	if (!fin) {
		exit(1);
	}
	while (!fin.eof()) {
		getline(fin, aLine);
		data.push_back(aLine);
	}
	fin.close();
	for (int i = 0; i < data.size(); i++) {
		age.push_back(stoi(data[i].substr(data[i].length() - 2)));
	}
	for (int i = 0; i < data.size(); i++) {
		if (age[i] > age[maxNum]) maxNum = i;
		if (age[i] < age[minNum]) minNum = i;
	}
	cout << "Youngest Person = " << data[minNum] << endl;
	cout << "Oldest Person = " << data[maxNum] << endl;

	system("pause");
	return 0;
}