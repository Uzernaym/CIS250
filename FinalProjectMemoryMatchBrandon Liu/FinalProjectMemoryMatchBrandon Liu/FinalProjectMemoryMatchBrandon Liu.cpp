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
	vector<string> food, states, animals;
	vector<vector<string>> categoryList = {food, states, animals};
	vector<vector<string>> faceLayer, hiddenLayer;
public:
	int input;
	MemoryMatchGame() {
		cout << "Memory Match game started" << endl;
		chooseDifficulty();
		chooseCategory();
		faceLayer = createFaceVector();
		hiddenLayer = createHiddenVector();
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

	vector<vector<string>> createFaceVector() {
		vector<vector<string>> faceLayer(levelOfDifficulty);
		for (int i = 0; i < levelOfDifficulty; i++) {
			faceLayer[i] = vector<string>(levelOfDifficulty);
		}
		for (int i = 0; i < faceLayer.size(); i++) {
			for (int j = 0; j < faceLayer[i].size(); j++) {
				faceLayer[i][j] = categories[category];
			}
		}
		return faceLayer;
	}
	vector<vector<string>> createHiddenVector() {
		vector<vector<string>> hiddenLayer(levelOfDifficulty);
		for (int i = 0; i < levelOfDifficulty; i++) {
			hiddenLayer[i] = vector<string>(levelOfDifficulty);
		}
		for (int i = 0; i < hiddenLayer.size(); i++) {
			srand(time(NULL));
			randObj = rand() % hiddenLayer.size();
			for (int j = 0; j < hiddenLayer[i].size(); j++) {
				hiddenLayer[i][j] = food[i];
			}
		}
		return hiddenLayer;
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
			grabFile(sInput, categoryList[1]);
		}
		else if (sInput == categories[2]) {
			category = 2;
			grabFile(sInput, categoryList[2]);
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
	void drawWalls(vector<vector<string>> grid) {
		for (int i = 0; i < levelOfDifficulty; i++) {
			for (int j = 0; j < levelOfDifficulty; j++) {
				cout << char(186);
				cout << setfill(char(32)) << setw(letterWidth - 1) << grid[i][j];
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
		drawWalls(faceLayer);
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