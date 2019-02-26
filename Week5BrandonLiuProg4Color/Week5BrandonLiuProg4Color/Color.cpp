#include "pch.h"
#include "Color.h"

void color::setElement(int index, string color) {
	colors[index] = color;
}
void color::printColors() { //Prints every color
	for (int i = 0; i < getLength(); i++) {
		cout << colors[i] << endl;
	}
	cout << endl;
}
void color::pickColor() { //Picks a random color
	srand(time(NULL));
	cout << "The random color is " << colors[rand() % 7] << endl;
}
int color::getLength() {
	return sizeof(colors) / sizeof(colors[0]);
}