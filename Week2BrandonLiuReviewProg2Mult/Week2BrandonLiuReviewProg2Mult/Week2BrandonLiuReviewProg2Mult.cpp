#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int userFirstInt; //Declares first user input
 	int userSecondInt; //Declares second user input
	cout << "Brandon Liu - 1/22/2019" << endl;
	cout << "What is your first integer?" << endl; //Asks user for 1st integer
	cin >> userFirstInt; //Saves user input
	cout << "What is your second integer?" << endl; //Asks user for 2nd integer
	cin >> userSecondInt; //Saves user input
	cout << userFirstInt * userSecondInt << endl; //Prints result of 1st and 2nd integer
}