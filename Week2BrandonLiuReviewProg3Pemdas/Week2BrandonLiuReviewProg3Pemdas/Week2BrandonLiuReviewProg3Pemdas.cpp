#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Brandon Liu - 1/22/2019" << endl;
	int userAdd; //Declaring variables
	int userMultiplyOne;
	int userMultiplyTwo;
	cout << "What is the number you want to add?" << endl; //Asks for 1st number
	cin >> userAdd; //Saves user input
	cout << "What is the first number you want to multiply?" << endl; //Asks for 2nd number
	cin >> userMultiplyOne; //Saves user input
	cout << "What is the second number you want to multiply?" << endl; //Asks for 3rd number
	cin >> userMultiplyTwo; //Saves user input
	cout << userAdd + (userMultiplyOne * userMultiplyTwo); //Prints result
}