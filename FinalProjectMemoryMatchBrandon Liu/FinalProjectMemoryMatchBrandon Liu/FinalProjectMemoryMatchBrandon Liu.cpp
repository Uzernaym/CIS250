// FinalProjectMemoryMatchBrandon Liu.cpp

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class MemoryMatchGame {
private:
	int levelOfDifficulty;
	int speedOfGame;
	int category;
	int letterWidth = 10;
public:
	int input;
	MemoryMatchGame() {
		cout << "Memory Match game started" << endl;
		chooseDifficulty();
		//chooseSpeed();
		//chooseCategory();
	}

	void grabFile(string name, vector<string> &data) {
		ifstream fin;
		string aLine, aWord;
		fin.open(name + ".txt");

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
	void chooseDifficulty() {
		cout << "Choose your difficulty!\n1 - (4x4) grid - Easy\n2 - (6x6) grid - Moderate\n3 - (8x8) grid - Difficult" << endl;
		cin >> input;
		if (input <= 3 && input >= 1) {
			cout << input << endl;
			levelOfDifficulty = input;
		}
		else {
			cout << "Incorrect input" << endl;
			chooseDifficulty();
		}
	}
	void chooseSpeed() {
		cout << "Choose your speed!\n1 - 6 seconds - Easy\n2 - 4 seconds - Moderate\n3 - 2 seconds - Hard" << endl;
		cin >> input;
		if (input <= 3 && input >= 1) {
			cout << input << endl;
			speedOfGame = input;
		}
		else {
			cout << "Incorrect input" << endl;
			chooseSpeed();
		}
	}
	void chooseCategory() {
		cout << "Choose your category!\n1 - Food\n2 - States\n3 - Animals" << endl;
		cin >> input;
		if (input <= 3 && input >= 1) {
			cout << input << endl;
			category = input;
		}
		else {
			cout << "Incorrect input" << endl;
			chooseCategory();
		}
	}
	void startGame() {
		cout << char(201);
		for (int i = 0; i < (levelOfDifficulty * 2) + 2; i++) {
			cout << setfill(char(205)) << setw(letterWidth);
			if (i < (levelOfDifficulty * 2) + 1) {
				cout << char(203);
			}
		}
		cout << char(187);
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

	m1.startGame();


	system("pause");
	return 0;
} 