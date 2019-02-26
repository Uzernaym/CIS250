#include "pch.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class color {
	private:
		string colors[7];
	public:
		void setElement(int index, string color) {
			colors[index] = color;
		}

		void printColors() { //Prints every color
			for (int i = 0; i < getLength(); i++) {
				cout << colors[i] << endl;
			}
			cout << endl;
		}

		void pickColor() { //Picks a random color
			srand(time(NULL));
			cout << "The random color is " << colors[rand()%7] << endl;
		}
		int getLength() {
			return sizeof(colors)/sizeof(colors[0]);
		}
};

int main() {
	cout << "Name: Brandon Liu - Program Name: Prog4Color - Date: 2/05/2019\n\n";

	color brandonsColor; //Create object

	brandonsColor.setElement(0, "red"); //Setting colors
	brandonsColor.setElement(1, "orange");
	brandonsColor.setElement(2, "yellow");
	brandonsColor.setElement(3, "green");
	brandonsColor.setElement(4, "blue");
	brandonsColor.setElement(5, "indigo");
	brandonsColor.setElement(6, "violet");

	brandonsColor.printColors(); //Print colors

	brandonsColor.pickColor(); //Print random color


	system("pause");
	return 0;
}