#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Brandon Liu - 1/30/2019\n";

	string tempType;
	double temperature;
	cout << "This is a temperature conversion program. Input either Celsius or Fahrenheit.\nAre you inputting Celsius or Fahrenheit? (C or F)\n"; //Asks user for temperature type
	cin >> tempType;
	if (tempType == "C") { //If tempType is Celsius
		cout << "What temperature?\n"; //Asks for temperature
		cin >> temperature;
		cout << (temperature * 9 / 5) + 32 << " " << static_cast<char>(248) << "F"; //Calculates conversion (C - F)
	}
	else if (tempType == "F") { //If tempType is Fahrenheit
		cout << "What temperature?\n"; //Asks for temperature
		cin >> temperature;
		cout << (temperature - 32) * 5 / 9 << " " << static_cast<char>(248) << "C"; //Calculates conversion (F - C)
	}
	else {
		cout << "Invalid input"; //If tempType is invalid
	}
}