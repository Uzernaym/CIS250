#include "pch.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Name: Brandon Liu - Program Name: Prog 3 - Date: 5/5/2019\n";

	ofstream fout;
	double arrayTestScores[10];
	int testScore, maxScore = 0, minScore;
	double avgScore = 0.0;

	fout.open("savedTestScores.txt");

	cout << "Enter 10 test scores" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> testScore;
		fout << testScore << endl;
		arrayTestScores[i] = testScore;
		maxScore = testScore;
		minScore = testScore;
	}
	fout.close();
	
	for (int i = 0; i < 10; i++) {
		if (maxScore < arrayTestScores[i]) maxScore = arrayTestScores[i];
		if (minScore > arrayTestScores[i]) minScore = arrayTestScores[i];
		avgScore += arrayTestScores[i];
	}
	avgScore = avgScore / 10.0;

	cout << "Minimum Score - " << minScore << endl;
	cout << "Maximum Score - " << maxScore << endl;
	cout << "Average Score - " << avgScore << endl;

	system("pause");
	return 0;
}