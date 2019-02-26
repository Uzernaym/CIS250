#include "pch.h";
#include <iostream> //Added <
using namespace std;

int main() { //Fixed capitalization error - Int to int
	// start program //Added / to make line comment
	// Declare and Initialize Variables //Added / to make line comment
	int height = 0; //Fixed capitalization error - inT to int
	int feet = 0; //Fixed capitalization error and added semicolon
	int inches = 0; //Fixed capitalization error
	// Prompt for height
	cout << "Enter your height in inches: "; //Swapped >> for <<
	cin >> height; //Fixed capitalization error
	// Calculate Height in feet and inches
	feet = height / 12; //Placed feet = at the front of the expression
	inches = height % 12;
	// Print out height in feet and inches //Added / to make line comment
		cout << "You are " << feet << " feet and " << inches << " inches" << endl; //Fixed capitalization error, swapped >> with <<, added endl
	system("pause"); // Mac user comment out this line 
	return 0;

} // end of program
