// FinalProjectMemoryMatchBrandon Liu.cpp

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <ctime>
#include <stdlib.h>

using namespace std;

class MemoryMatchGame {
private:
	int levelOfDifficulty;
	int speedOfGame;
	int category;
	int letterWidth = 14;
	int randObj;
	string sInput;
	string categories[3] = { "Food", "States", "Animals" };
	vector<string> food, states, animals, faceLayer, hiddenLayer;
	vector<vector<string>> categoryList = {};
public:
	int input;
	MemoryMatchGame() {
		cout << "Memory Match game started" << endl;
	}
	void pickSettings() {
		chooseDifficulty();
		chooseCategory();
		//chooseSpeed();
		faceLayer = createFaceVector();
		hiddenLayer = createHiddenVector();

		for (int i = 0; i < hiddenLayer.size(); i++) {
			cout << hiddenLayer[i] << endl;
		}
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
		cout << "Choose your category!\n" << categories[0] << "\n" << categories[1] << "\n" << categories[2] << endl;
		cin >> sInput;
		if (sInput == categories[0]) {
			category = 0;
			grabFile(sInput, food);
		}
		else if (sInput == categories[1]) {
			category = 1;
			grabFile(sInput, states);
		}
		else if (sInput == categories[2]) {
			category = 2;
			grabFile(sInput, animals);
		}
		else {
			cout << "Incorrect input" << endl;
			chooseCategory();
		}
	}
	vector<string> createFaceVector() {
		vector<string> test(levelOfDifficulty*levelOfDifficulty);
		for (int i = 0; i < test.size(); i++) {
			test[i] = categories[category];
		}
		return test;
	}

	vector<string> createHiddenVector() {
		vector<string> test(levelOfDifficulty*levelOfDifficulty/2);
		srand(time(NULL));
		for (int i = 0; i < test.size(); i++) {
			randObj = rand() % test.size();
			test[i] = food[randObj];
		}
		return test;
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
	void drawWalls(vector<string> grid) {
		for (int i = 0; i < levelOfDifficulty; i++) {
			for (int j = 0; j < levelOfDifficulty; j++) {
				cout << char(186);
				cout << setfill(char(32)) << setw(letterWidth - 1) << grid[(i*levelOfDifficulty) + j];
			}
			cout << char(186) << endl;
			if (i < levelOfDifficulty - 1) {
				drawDivider();
			}
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
		cin >> sInput;
		if (sInput == "Y") {
			draw();
		} else if (sInput == "N") {
			system("pause");
		} else {
			cout << "Incorrect input" << endl;
			startGame();
		}
	}
	void draw() {
		ghettoClear();
		drawTop();
		drawWalls(hiddenLayer);
		drawBottom();
	}
};

int main()
{
	MemoryMatchGame m1;

	m1.pickSettings();
	m1.startGame();

	system("pause");
	return 0;
} 