#include "pch.h"
#include "box.h"
using namespace std;

template<class T>
void box<T>::setWidth(T x) { //Set values
	width = x;
}

template<class T>
void box<T>::setHeight(T x) {
	height = x;
}

template<class T>
void box<T>::setDepth(T x) {
	depth = x;
}

template<class T>
T box<T>::getDepth() { //Get values
	return depth;
}

template<class T>
T box<T>::getHeight() {
	return height;
}

template<class T>
T box<T>::calcArea() {
	return width * height;
}

template<class T>
T box<T>::calcVolume() {
	return width * height * depth;
}
