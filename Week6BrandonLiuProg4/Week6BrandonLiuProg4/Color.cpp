#include "pch.h"
#include "Color.h"

template<class T>
void color<T>::setElement(T index, string color) {
	colors[index] = color;
}

template<class T>
void color<T>::printColors() { //Prints every color
	for (int i = 0; i < getLength(); i++) {
		cout << colors[i] << endl;
	}
	cout << endl;
}

template<class T>
void color<T>::pickColor() { //Picks a random color
	srand(time(NULL));
	cout << "The random color is " << colors[rand() % 7] << endl;
}

template<class T>
T color<T>::getLength() {
	return sizeof(colors) / sizeof(colors[0]);
}
