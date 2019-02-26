#include "pch.h"
#include "Rectangle.h"

template<class T>
void Rectangle<T>::set_values(T x, T y) {
	width = x;
	height = y;
}

template<class T>
T Rectangle<T>::area() {
	T answer;
	// complete this function so the code works 
	answer = width * height;
	return answer;
}
