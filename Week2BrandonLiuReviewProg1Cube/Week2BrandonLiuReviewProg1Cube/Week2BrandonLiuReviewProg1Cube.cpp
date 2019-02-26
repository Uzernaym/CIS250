#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Brandon Liu - 1/22/2019" << endl;
	int userInput = 0; //Sets integer variable
	cout << "What's your integer?" << endl; //Asks user for integer
	cin >> userInput; //Saves user input as 
	cout << userInput * userInput * userInput << endl; //Prints result of userInput times itself 3 times
	return 0;
}	