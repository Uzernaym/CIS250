// FinalProjectMemoryMatchBrandon Liu.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class MemoryMatchGame {
	
public:
	MemoryMatchGame() {
		cout << "Memory Match game started" << endl;
	}

	void grabFile(string name, vector<string> &data) {
		ifstream fin;
		string aLine, aWord;
		fin.open(name + ".txt");

		cout << name + ".txt";

		if (!fin) {
			cerr << "It's broke" << endl;
			exit(1);
		}
		while (!fin.eof()) {
			fin >> aWord;
			getline(fin, aLine);
			data.push_back(aWord);
		}
	}
};

int main()
{
	vector<string> food, states, animals;
	string categories[3] = { "food", "states", "animals" };

	MemoryMatchGame m1;
	m1.grabFile("food", food);
	m1.grabFile("states", states);
	m1.grabFile("animals", animals);
	
	
	
	for (int i = 0; i < food.size(); i++) {
		cout << food[i] << endl;
	}

	system("pause");
	return 0;
}


