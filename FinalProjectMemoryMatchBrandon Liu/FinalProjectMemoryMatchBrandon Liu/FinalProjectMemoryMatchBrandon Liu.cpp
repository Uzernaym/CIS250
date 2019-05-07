// FinalProjectMemoryMatchBrandon Liu.cpp

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class MemoryMatchGame {
private:
	int levelOfDifficulty;
	int speedOfGame;
public:
	int input;
	MemoryMatchGame() {
		cout << "Memory Match game started" << endl;

		cout << "Choose your category" << endl;
		cin >> input;
		chooseDifficulty(input);
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
	void chooseDifficulty(int x) {
		if (x <= 3 && x <= 0) {

		} else {
			cout << "Incorrect input" << endl;
			cout << "Choose your cateogry" << endl;
			cin >> input;
			chooseDifficulty(input);
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





	system("pause");
	return 0;
}


