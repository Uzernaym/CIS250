// FinalProjectMemoryMatchBrandon Liu.cpp
#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <ctime>
#include <stdlib.h>
#include <thread>
#include <chrono>
using namespace std;

class MemoryMatchGame {
private:
	int levelOfDifficulty, speedOfGame, category, randObj, input, input1, input2, scoreCounter, turnCounter;
	int letterWidth = 14;
	string sInput;
	string categories[3] = { "Food", "States", "Animals" };
	vector<string> food, states, animals, faceLayer, hiddenLayer;
	vector<vector<string>> categoryList = {};
public:
	MemoryMatchGame() {
		cout << "Memory Match game started" << endl;
		categoryList.push_back(food);
		categoryList.push_back(states);
		categoryList.push_back(animals);
	}
	void pickSettings() {
		chooseDifficulty();
		chooseCategory();
		chooseSpeed();
		faceLayer = createFaceVector();
		hiddenLayer = createHiddenVector();
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
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Incorrect input" << endl;
			chooseDifficulty();
		}
	}
	void chooseSpeed() {
		cout << "Choose your speed!\n1 - 6 seconds - Easy\n2 - 4 seconds - Moderate\n3 - 2 seconds - Hard" << endl;
		cin >> input;
		if (input <= 3 && input >= 1) {
			speedOfGame = 6-((input-1)*2);
		}
		else {
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Incorrect input" << endl;
			chooseSpeed();
		}
	}
	void chooseCategory() {
		cout << "Choose your category!\n1 - " << categories[0] << "\n2 - " << categories[1] << "\n3 - " << categories[2] << endl;
		cin >> input;
		input--;
		if (input >= 0 && input < 3) {
			category = input;
			grabFile(categories[category], categoryList[category]);
		}
		else {
			cin.clear();
			cin.ignore(256, '\n');
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
		vector<string> hidden;
		vector<string> temp;
		temp = categoryList[category];
		for (int i = 0; i < levelOfDifficulty*levelOfDifficulty / 2; i++) {
			randObj = rand() % temp.size();
			hidden.push_back(temp[randObj]);
			temp.erase(temp.begin() + randObj);
		}
		for (int i = 0; i < levelOfDifficulty*levelOfDifficulty/2; i++) {
			hidden.push_back(hidden[i]);
		}
		for (int i = 0; i < 100; i++) {
			randObj = rand() % hidden.size();
			hidden.push_back(hidden[randObj]);
			hidden.erase(hidden.begin() + randObj);
		}
		return hidden;
	}
	void ghettoClear() {
		for (int i = 0; i < 50; i++) {
			cout << "" << endl;
		}
	}
	void drawTop() {
		cout << "Score - " << scoreCounter << setfill(' ') << setw(letterWidth) << "Moves - " << turnCounter << endl;
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
				cout << i*levelOfDifficulty + j + 1 << setfill(char(32)) << setw(letterWidth - 1 - (to_string(i*levelOfDifficulty + j + 1)).length()) << grid[(i*levelOfDifficulty) + j];
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
			draw(faceLayer);
			checkGame();
		} else if (sInput == "N") {
			system("pause");
		} else {
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Incorrect input" << endl;
			startGame();
		}
	}
	void draw(vector<string> grid) {
		ghettoClear();
		drawTop();
		drawWalls(grid);
		drawBottom();
	}
	void checkGame() {
		if (scoreCounter >= levelOfDifficulty * levelOfDifficulty / 2) {
			cout << "You win!" << endl << "Score - " << scoreCounter << endl << "Moves - " << turnCounter << "Would you like to play again? Y/N" << endl;
			cin >> sInput;
			if (sInput == "Y") {
				scoreCounter = 0;
				turnCounter = 0;
				pickSettings();
				startGame();
			}
			else if (sInput == "N") {
				system("pause");
			}
			else {
				cin.clear();
				cin.ignore(256, '\n');
				cout << "Incorrect input" << endl;
				startGame();
			}
		}
		checkOne();
		checkTwo();
		turnCounter++;
		this_thread::sleep_for(chrono::seconds(speedOfGame));
		if (faceLayer[input1 - 1] != faceLayer[input2 - 1]) {
			cout << input1 << endl << input2 << endl;
			faceLayer[input1 - 1] = categories[category];
			faceLayer[input2 - 1] = categories[category];
		}
		else {
			scoreCounter++;
		}
		draw(faceLayer);
		checkGame();
	}
	void checkOne() {
		cout << "Choose your first square" << endl;
		cin >> input1;
		if (input1 > 0 && input1 <= levelOfDifficulty*levelOfDifficulty && faceLayer[input1-1] == categories[category]) {
			faceLayer[input1-1] = hiddenLayer[input1-1];
			draw(faceLayer);
		}
		else {
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Incorrect input" << endl;
			checkOne();
		}
	}
	void checkTwo() {
		cout << "Choose your second square" << endl;
		cin >> input2;
		if (input2 > 0 && input2 <= levelOfDifficulty*levelOfDifficulty && input2 != input1 && faceLayer[input2-1] == categories[category]) {
			faceLayer[input2 - 1] = hiddenLayer[input2 - 1];
			draw(faceLayer);
		}
		else {
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Incorrect input" << endl;
			checkTwo();
		}
	}
};

int main()
{
	srand(time(NULL));
	MemoryMatchGame m1;
	m1.pickSettings();
	m1.startGame();

	system("pause");
	return 0;
} 