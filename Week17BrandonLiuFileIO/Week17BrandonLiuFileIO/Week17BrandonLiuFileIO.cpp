#include "pch.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	cout << "Name: Brandon Liu - Program Name: FileIO - Date: 5/5/2019\n";

	string aWord, aLine;
	ifstream fin;
	string letters[26] = {"A", "B" , "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
	string letters2[26] = { "a", "b" , "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" };
	vector<string> data;
	vector<string> sortedData;
	vector<string> dataToInput;

	fin.open("fileIO.txt");

	if (!fin) {
		cerr << "broke" << endl;
		exit(1);
	}
	while (!fin.eof()) {
		getline(fin, aLine);
		data.push_back(aLine);
	}
	fin.close();
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < data.size(); j++) {
			if (data[j].substr(0, 1) == letters[i]) {
				sortedData.push_back(data[j]);
			}
		}
	}

	for (int i = 0; i < sortedData.size(); i++) {
		cout << sortedData[i] << endl;
	}
	system("pause");
	return 0;
}