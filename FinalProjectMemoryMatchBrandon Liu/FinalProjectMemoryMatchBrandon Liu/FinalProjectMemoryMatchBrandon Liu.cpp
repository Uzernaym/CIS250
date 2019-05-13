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
	int letterWidth = 14;
	string sInput;
	string categories[3] = { "food", "states", "animals" };
	vector<string> food, states, animals;
public:
	int input;
	MemoryMatchGame() {
		cout << "Memory Match game started" << endl;
		chooseDifficulty();
		//createVectors();
		//chooseSpeed();

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
			levelOfDifficulty = (input * 2) + 2;
		}
		else {
			cout << "Incorrect input" << endl;
			chooseDifficulty();
		}
	}
	void createVectors() {
		vector<vector<string>> faceLayer(levelOfDifficulty);
		for (int i = 0; i < levelOfDifficulty; i++) {
			faceLayer[i] = vector<string>(levelOfDifficulty);
		}

		vector<vector<string>> hiddenLayer(levelOfDifficulty);
		for (int i = 0; i < levelOfDifficulty; i++) {
			hiddenLayer[i] = vector<string>(levelOfDifficulty);
		}

		for (int i = 0; i < faceLayer.size(); i++) {
			for (int j = 0; j < faceLayer[i].size(); j++) {
				faceLayer[i][j] = "test" + i;
			}
		}
		for (int i = 0; i < faceLayer.size(); i++) {
			for (int j = 0; j < faceLayer[i].size(); j++) {
				cout << faceLayer[i][j] << endl;
			}
		}
	}
	void chooseSpeed() {
		cout << "Choose your speed!\n1 - 6 seconds - Easy\n2 - 4 seconds - Moderate\n3 - 2 seconds - Hard" << endl;
		cin >> input;
		if (input <= 3 && input >= 1) {
			speedOfGame = input;
		}
		else {
			cout << "Incorrect input" << endl;
			chooseSpeed();
		}
	}
	void chooseCategory() {
		cout << "Choose your category!\n1 - " << categories[0] << "\n2 - " << categories[1] << "\n3 - " << categories[2] << endl;
		cin >> input;
		if (input == 1) {
			grabFile(categories[input - 1], food);
		}
		else if (input == 2) {
			grabFile(categories[input - 1], states);
		}
		else if (input == 3) {
			grabFile(categories[input - 1], animals);
		}
		else {
			cout << "Incorrect input" << endl;
			chooseCategory();
		}
	}
	void ghettoClear() {
		for (int i = 0; i < 50; i++) {
			cout << "" << endl;
		}
	}
	void drawTop() {
		cout << char(201);
		for (int i = 0; i < levelOfDifficulty; i++) {
			cout << setfill(char(205)) << setw(letterWidth);
			if (i < levelOfDifficulty - 1) {
				cout << char(203);
			}
		}
		cout << char(187) << endl;
	}
	void drawBottom() {
		cout << char(200);
		for (int i = 0; i < levelOfDifficulty; i++) {
			cout << setfill(char(205)) << setw(letterWidth);
			if (i < levelOfDifficulty - 1) {
				cout << char(202);
			}
		}
		cout << char(188) << endl;
	}
	void drawWalls() {
		for (int i = 0; i < 1; i++) {
			for (int i = 0; i < levelOfDifficulty; i++) {
				cout << char(186);
				cout << setfill(char(32)) << setw(letterWidth-1) << "test";
			}
			cout << char(186) << endl;
		}
	}
	void drawDivider() {
		cout << char(204);
		for (int i = 0; i < levelOfDifficulty; i++) {
			
			for (int j = 0; j < letterWidth - 1; j++) {
				cout << char(205);
			}
			if (i < levelOfDifficulty - 1) {
				cout << char(206);
			}
		}
		cout << char(185) << endl;
	}
	void startGame() {
		cout << "Start game? Y/N"<< endl;
		getline(cin, sInput);
		cout << sInput;
		if (sInput == "Y") {
			draw();
		} else {
			startGame();
		}
	}
	void draw() {
		ghettoClear();
		drawTop();
		for (int i = 0; i < levelOfDifficulty; i++) {
			drawWalls();
			if (i < levelOfDifficulty - 1) {
				drawDivider();
			}
		}
		drawBottom();
	}
};

int main()
{
	MemoryMatchGame m1;

	m1.startGame();

	system("pause");
	return 0;
} 